#pragma once

#include "NIA_main.h"
#include "NIA_errors.h"

namespace NIA
{
	/*
		@brief Данная структура описывает функции для получения информации об
		ошибках winapi.
	*/
	struct Error
	{
		/*
			@brief Возвращает код последней ошибки
			
			@return Код последней ошибки 
		*/
		static unsigned long last();

		/*
			@brief Вызывает окно сообщения с подробной информацией

			@param[in] line Необязательный параметр для вывода номера строки
			где расположена данная функция. Задается макросом __LINE__.
			
			@param[in] path Необязательный параметр для вывода файла
			где расположена данная функция. Задается макросом __FILE__.
		*/
		static void show_last(int line = -1, string path = "");

		/*
			@brief Сбрасывает последнюю ошибку в ноль
		 */
		static void reset();
	};



}