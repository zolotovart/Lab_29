//#define _CRT_SECURE_NO_WARNINGS
//#include "Dict.h"
//#include <string.h>
//#include <stdio.h>
//
//
//#define MAX_WORDS 10000
//
//// ����� 
//char words[MAX_WORDS][MAX_LEN_WORD + 1];
//// ���������� ���� � �������
//int numWords = 0;
//
///*
//CREATE - ������� �������.
//���������� ����� ������� ������������� �������.
//*/
//void Create() {
//	numWords = 0;
//}
//
//
///*
//DESTROY - ���������� �������.
//���������� ����� ��������� ������������� �������.
//*/
//void Destroy() {
//	numWords = 0;
//}
//
//
//
///*
//INSERT � ��������� ������� � ���������.
//��������� � �������� ������ ���������� ��������.
//��� ��������� ���������� �������� � ���������, ��������� �� ����������.
//*/
//void Insert(char* word) {
//
//	if (numWords >= MAX_WORDS) {
//		return; // ������� ����������!
//	}
//
//	// ������� � ����� ������� ������ ����� ���� ����� �������� �����
//	// ������� �������� � ��������������� ������
//	// ������� �������� ���, ����� ����� ������� ������ ��� ������������
//	int i = numWords;
//	while ((i > 0) && (strcmp(word, words[i - 1]) < 0)) {
//		strcpy(words[i], words[i - 1]);
//		i--;
//	}
//	strcpy(words[i], word);
//	++numWords;
//}
//
//
//
///*
//MEMBER � ��������, �������� �� ��������� ������� ������ ������� ��������� ��� ���.
//���� �������� - ���������� 1, ����� - ���������� 0
//*/
//int  Member(char* word) {
//	// ������������ �������� ��������� ������ ����� � ��������������� �������
//	int left = 0;
//	int right = numWords - 1;
//
//	while (left <= right) {
//		int middle = (left + right) / 2;
//
//		int dif = strcmp(words[middle], word);
//		if (dif == 0) {
//			return 1;
//		}
//		if (dif < 0) {
//			left = middle + 1;
//		}
//		if (dif > 0) {
//			right = middle - 1;
//		}
//	}
//	return 0;
//}
