#pragma once
/**
	@file		Volotina_Abiturient.h
	@brief		������������ ���� ������ 
	@copyright	����
	@author		�������� �.�.
	@date		28-12-2023
	@version	1.1.1
\par ���������� ������:
	@ref Volotina_Abiturient
\par �������� �����:
	@ref Volotina_Abiturient
*/

/// ����� �������� 
/** �������� ������ ����������� � ������ ��� ������ � ���
*/


class Volotina_Abiturient
{
protected:
	char Volotina_Surname;	///< �������
	char Volotina_Name;	///< ���
	char Volotina_Otchestvo;	///< ��������
	string Volotina_addres;	///< �����
	vector<int> Volotina_score;	///< ������

public:

	/// ���������� ������ ������������, ������� �������������������� ������
	/**
	@return ������-������ � �������������, � ������� ���� �������������������� ������
	@param abit	������ ������������, � ������� ������� ������
	*/
	vector<Volotina_Abiturient> Volotina_neud(vector<Volotina_Abiturient> abit);

	/// ���������� ������ ������������, ������� ������ ������ �� ������ ��������
	/**
	@return ������-������ � �������������, � ������� ����� ������ �� ������ ��������
	@param abit	������ ������������, � ������� ������� ������
	@param targetScore	�������� ����� ������, �� ������� �������� ������������
	*/
	vector<Volotina_Abiturient> Volotina_zadanScore(vector<Volotina_Abiturient> abit, int targetScore);

	/// ���������� N ������������, ������� ����� ������� ����
	/**
	@return ������-������ � N ������������, ������� ����� ������� ����, + ������ ������������ � ����-��������� ������
	@param abit	������ ������������, � ������� ������� ������
	@param N	���������� ���������� ������������
	*/
	vector<Volotina_Abiturient> Volotina_NhighScore(vector<Volotina_Abiturient> abit, int N);

	/// ����������� ��-���������
	/** ������ ����������� ��� ������������� �����
	*/
	Volotina_Abiturient();

	/// ����������� � �������������� �����
	/** ������ ����������� � �������������� ��� ����
	\param Volotina_Surname		������� 
	\param Volotina_Name		���
	\param Volotina_Otchestvo	��������
	\param Volotina_addres		�����
	\param Volotina_score		������ ������
	*/
	Volotina_Abiturient(char Volotina_Surname, char Volotina_Name, char Volotina_Otchestvo, char Volotina_addres, vector<int> Volotina_score);

	/// ����������, ����������� ������
	~Volotina_Abiturient();
};