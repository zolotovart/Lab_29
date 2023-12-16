////
//// ���������� ������� �� ������������� ������
//// 
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdlib.h>
//
//#include "Dict.h"
//
//// =========================================================================================
//// ���������� �������!!!
//
//
//// ������� �������������� ������
//struct Node {
//	char* word;
//	struct Node* next;
//};
//
//
//// ������ ������� ������
//struct Node* first = NULL;
//
//
///*
//INSERT � ��������� ������� � ���������.
//��������� � �������� ������ ���������� ��������.
//��� ��������� ���������� �������� � ���������, ��������� �� ����������.
//*/
//void Insert(char* word) {
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//
//	newNode->next = first;
//	newNode->word = (char*)calloc(strlen(word) + 1,	sizeof(char));
//	strcpy(newNode->word, word);
//
//	first = newNode;
//}
//
//
///*
//MEMBER � ��������, �������� �� ��������� ������� ������ ������� ��������� ��� ���.
//*/
//int  Member(char* word) {
//	struct Node* ptr = first;
//	while (ptr != NULL) {
//		if (strcmp(ptr->word, word) == 0) {
//			return 1;
//		}
//		ptr = ptr->next;
//	}
//	return 0;
//}
//
//
///* CREATE - ������� �������.
//���������� ����� ������� ������������� �������. */
//void Create() {
//	first = NULL;
//}
//
//
///* DESTROY - ���������� �������.
//���������� ����� ��������� ������������� �������. */
//void Destroy() {
//	while (first != NULL) {
//		struct Node* delNode = first;
//		first = first->next;
//
//		free(delNode->word);
//		free(delNode);
//	}
//}