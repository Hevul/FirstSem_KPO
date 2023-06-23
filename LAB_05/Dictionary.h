#include <cstring>
#include <locale>
#include <iostream>
#include "stdafx.h"
#define DICTNAMEMAXSIZE		20	// Длина для названия словаря
#define DICTMAXSIZE			100	// Макс. размер словаря
#define ENTRYNAMEMAXSIZE	30	// Максимальный размер имени элемента словаря
#define THROW01 "Create: превышен размер имени словаря"
#define THROW02 "Create: превышен размер максимальной ёмкости словаря"
#define THROW03 "AddEntry: переполнение словаря"
#define THROW04 "AddEntry: дублирование идентификатора"
#define THROW05 "GetEntry: не найден элемент"
#define THROW06 "DelEntry: не найден элемент"
#define THROW07 "UpdEntry: не найден элемент"
#define THROW08 "UpdEntry: дублирование идентификатора"


namespace Dictionary {
	struct Entry {				// Элемент словаря
		int id;			// Идентификатор (уникальный)
		char name[ENTRYNAMEMAXSIZE];	// Символьная информация
	};

	struct Instance {			// Экземпляр словаря
		std::string name;		// Наименование словаря
		int maxsize;	// Макс. размер словаря
		int size;		// текущий размер словаря < DICTMAXSIZE	
		Entry* dictionary;				// Массив элементов словаря
	};

	Instance Create(			// Создать словарь
		std::string name,		// Имя словаря
		int size);

	void AddEntry(				// Добавить эл. словаря
		Instance& inst, // Экземпляр словаря
		Entry ed);		// Элемент словаря

	void DelEntry(			// Удалить эл. словаря
		Instance& inst,	// Экземпляр словаря
		int id);		// Идентификатор удаляемого элемента (уникальный)

	void UpdEntry(				// Изменить элемент словаря
		Instance& inst, // Экземпляр словаря
		int id,			// Идентификатор заменяемого элемента
		Entry new_ed);	// Новый элемент словаря

	Entry GetEntry(				// Получить элемент словаря
		Instance inst,	// Экземпляр словаря
		int id);		// Идентификатор получаемого элемента

	void Print(Instance d);		// Печать словаря
	void Delete(Instance& d);	// Удалить словарь
};