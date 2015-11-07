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
	
	void CreateTables(/*Создает таблицы в базе*/) {
		//Предметы
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Lessons (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,name VARCHAR(70) NULL, profileId INT NULL, exam INT NULL, zet INT NULL);");
		//Направления
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Directions (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,name VARCHAR(50) NULL,codename VARCHAR(50) NULL);");
		//Профили
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Profiles (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, directID INT NULL, name VARCHAR(50) NULL);");
		//Оценки
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Marks (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, studentID INT NULL, value INT NOT NULL DEFAULT '-1', lessonID INT NULL, name VARCHAR(50) NULL, tip INT NOT NULL DEFAULT '2');");
		//Студенты
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Students (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, fio VARCHAR(70) NULL ,birth DATE NULL, sex INT NULL, directId INT NULL, profileId INT NULL, groupe VARCHAR(20) NULL, edu_start DATE NULL, edu_stop DATE NULL, cafedra VARCHAR(20) NULL, manager VARCHAR(20) NULL, hostel INT NULL, statys INT NULL, edu_vid INT NULL, edu_base INT NULL, country VARCHAR(20) NULL, email VARCHAR(50) NULL, tel VARCHAR(20) NULL);");
		//Приказы
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Orders (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, studentID INT NULL, datta DATE NULL, number VARCHAR(20) NULL, about VARCHAR(60) NULL);");
		//Статистика
		mydb->RawSQL("CREATE TABLE IF NOT EXISTS Stat (id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, name VARCHAR(40) NULL, text VARCHAR(256) NULL);");

	}

	

	void ClearTables(/*Удаляет все записи в таблицах*/) {
		mydb->RawSQL("DROP TABLE IF EXISTS Lessons, Directions, Profiles, Marks, Students, Orders;");
	}
};

