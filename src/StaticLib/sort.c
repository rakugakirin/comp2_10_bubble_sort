﻿#include "Windows.h"                    // Windows API の機能(NULL)定義
#include <stdbool.h>
#include "../include/libsort.h"


// ソート
void bubble_sort(array* a)
{
	// ToDo: 実装してください
	for (int n = 0; n <= a - 1; n++)
	{
		for (int j = a->num - 1; j > 0; j--)
		{
			if (a->nodes[j].key < a->nodes[j - 1].key)
			{
				node temp = a->nodes[j];
				a->nodes[j] = a->nodes[j - 1];
				a->nodes[j - 1] = temp;
			}
		}
	}
}


//
// 配列の初期化
//
array* create(int num)
{
	array* a = (array*)malloc(sizeof(array));
	if (a == NULL) return NULL;

	a->num = num;
	a->nodes = (node*)malloc(sizeof(node) * num);

	return a;
}


//
// 使用メモリの全解放
//
void finalize(array* a)
{
	free(a->nodes);
	free(a);
}
