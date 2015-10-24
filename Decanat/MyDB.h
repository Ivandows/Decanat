#ifndef _MYDB
#define _MYDB 1

#include "Header.h"
#include <String.h>
#include <mysql.h>

class MyDB
{

	MYSQL *mysql;			
public:	
	MYSQL_RES *res;
	MyDB() { 
		mysql = new MYSQL; 
		Connect(); 
	}
	~MyDB() { 
		Disconnect();
	}
	int Connect() {
		
		mysql_init(mysql);
		if (!(mysql_real_connect(mysql, "127.0.0.1", "root", "root", "Decanat", 3306, NULL, 0)))return -1;
		if (mysql_select_db(mysql, "Decanat")) return -1;
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
