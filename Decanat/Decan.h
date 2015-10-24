#pragma once
#include "Header.h"
#include "MyDB.h"



 class Decan
{
public:
	MyDB *mydb;	


	Decan() {
		mydb = new MyDB();	
		CreateTables();
	}
	~Decan() {
		delete mydb; 
	}
	
	void CreateTables(/*������� ������� � ����*/) {
		//��������
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Lessons (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,name VARCHAR(70) NULL, profileId INT NULL, exam INT NULL, zet INT NULL);");
		//�����������
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Directions (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,name VARCHAR(50) NULL,codename VARCHAR(50) NULL);");
		//�������
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Profiles (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, directID INT NULL, name VARCHAR(50) NULL);");
		//������
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Marks (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, studentID INT NULL, value INT NULL, lessonID INT NULL, name VARCHAR(50) NULL, tip INT NULL);");
		//��������
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Students (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, fio VARCHAR(70) NULL ,birth DATE NULL, sex INT NULL, directId INT NULL, profileId INT NULL, edu_start DATE NULL, edu_stop DATE NULL, cafedra VARCHAR(20) NULL, manager VARCHAR(20) NULL, hostel INT NULL, status INT NULL, edu_vid INT NULL, edu_base INT NULL, country VARCHAR(20) NULL, email VARCHAR(50) NULL, tel VARCHAR(20) NULL);");	
		//�������
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Orders (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, studentID INT NULL, data DATE NULL, number VARCHAR(20) NULL, about VARCHAR(60) NULL);");	
	} 

	void ClearTables(/*������� ��� ������ � ��������*/) {
		mydb->RawSQL("DROP TABLE IF EXISTS Lessons, Directions, Profiles, Marks, Students, Orders;");
	}
};

