#pragma once
/**
	@file		Volotina_Abiturient.h
	@brief		Заголовочный файл классе 
	@copyright	ВоГУ
	@author		Волотина Я.Ю.
	@date		28-12-2023
	@version	1.1.1
\par Использует классы:
	@ref Volotina_Abiturient
\par Содержит класс:
	@ref Volotina_Abiturient
*/

/// Класс описания 
/** Содержит данные абитуриента и методы для работы с ним
*/


class Volotina_Abiturient
{
protected:
	char Volotina_Surname;	///< Фамилия
	char Volotina_Name;	///< Имя
	char Volotina_Otchestvo;	///< Отчество
	string Volotina_addres;	///< Адрес
	vector<int> Volotina_score;	///< Оценки

public:

	/// Возвращает список абитуриентов, имеющих неудовлетворительные оценки
	/**
	@return вектор-строку с абитуриентами, у которых есть неудовлетворительные оценки
	@param abit	массив абитуриентов, у которых смотрим оценки
	*/
	vector<Volotina_Abiturient> Volotina_neud(vector<Volotina_Abiturient> abit);

	/// Возвращает список абитуриентов, имеющих баллов оценок не меньше заданной
	/**
	@return вектор-строку с абитуриентами, у которых сумма баллов не меньше заданной
	@param abit	массив абитуриентов, у которых смотрим оценки
	@param targetScore	заданная сумма баллов, по которой отбираем абитуриентов
	*/
	vector<Volotina_Abiturient> Volotina_zadanScore(vector<Volotina_Abiturient> abit, int targetScore);

	/// Возвращает N абитуриентов, имеющих самый высокий балл
	/**
	@return вектор-строку с N абитуриентов, имеющих самый высокий балл, + список абитуриентов с полу-проходным баллом
	@param abit	массив абитуриентов, у которых смотрим оценки
	@param N	количество отбираемых абитуриентов
	*/
	vector<Volotina_Abiturient> Volotina_NhighScore(vector<Volotina_Abiturient> abit, int N);

	/// Конструктор по-умолчанию
	/** Создаёт абитуриента без инициализации полей
	*/
	Volotina_Abiturient();

	/// Конструктор с инициализацией полей
	/** Создаёт абитуриента и инициализирует его поля
	\param Volotina_Surname		Фамилия 
	\param Volotina_Name		Имя
	\param Volotina_Otchestvo	Отчество
	\param Volotina_addres		Адрес
	\param Volotina_score		Массив оценок
	*/
	Volotina_Abiturient(char Volotina_Surname, char Volotina_Name, char Volotina_Otchestvo, char Volotina_addres, vector<int> Volotina_score);

	/// Деструктор, освобождает память
	~Volotina_Abiturient();
};