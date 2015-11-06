#ifndef _MYDB
#define _MYDB 1

#include "Header.h"
#include <String.h>
#include <mysql.h>
#include "MyForm2.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;
using namespace	System::Text;

class MyDB
{

	MYSQL *mysql;			
public:	
	MYSQL_RES *res;
	int Exit;
	MyDB() {
		Exit = 0;
		mysql = new MYSQL; 
		Connect(); 
	}
	~MyDB() { 
		Disconnect();
	}
public: char * StrToChar(String ^s) {

	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(s);
	char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	return nativeString;
}
	int Connect() {
		String ^ip, ^username, ^pass, ^database;
		String ^s = gcnew String("");
			int port;		
			do {
				mysql_init(mysql);
				
		
				System::Windows::Forms::Form ^f2 = gcnew Decanat::MyForm2();			 
				if (f2->ShowDialog() == ::DialogResult::Abort) { 
					Exit = 1;				
					return -1;
				}
				port = Decanat::MyForm2::port;
				ip = Decanat::MyForm2::ip;
				username = Decanat::MyForm2::username;
				pass = Decanat::MyForm2::pass;
				database = Decanat::MyForm2::database;

		} while (!(mysql_real_connect(mysql, StrToChar(ip), StrToChar(username), StrToChar(pass), "", port, NULL, 0)));
		
		s = "CREATE DATABASE IF NOT EXISTS " + database;
		mysql_query(mysql, StrToChar(s));
		if (mysql_select_db(mysql, StrToChar(database))) { return -1; }
		return 0;
	}
	void Disconnect() {	
			mysql_free_result(res);
			mysql_close(mysql); 
			delete mysql;
	}
	void RawSQL(char *S) {
		if (mysql_query(mysql, S)) return;
		if (!(res = mysql_store_result(mysql))) return;
	}
};

#endif
