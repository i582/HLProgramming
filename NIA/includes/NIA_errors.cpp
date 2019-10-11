#include "NIA_errors.h"

// errors code from https://msbro.ru/index.php/archives/3578

void NIA_ShowErrorDescriptionByErrorId(int error_id, int line, wstring path)
{
	if (error_id == 0)
		return;

	wstring error_info = L"Номер: " + to_wstring(error_id) + L"\n";

	if (line != -1)
	{
		error_info += L"Вызвано из (Строка: " + to_wstring(line);
	}

	if (!path.empty())
	{
		error_info += L", Файл: " + path;
	}

	error_info += L")\n\n\n";

	switch (error_id)
	{

	case 1:
	{
		MessageBox(NULL, (error_info + L"Неверная функция.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2:
	{
		MessageBox(NULL, (error_info + L"Не удается найти указанный файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3:
	{
		MessageBox(NULL, (error_info + L"Системе не удается найти указанный путь.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4:
	{
		MessageBox(NULL, (error_info + L"Системе не удается открыть файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5:
	{
		MessageBox(NULL, (error_info + L"Отказано в доступе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7:
	{
		MessageBox(NULL, (error_info + L"Повреждены управляющие блоки памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}
	case 8:
	{
		MessageBox(NULL, (error_info + L"Недостаточно памяти для обработки команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9:
	{
		MessageBox(NULL, (error_info + L"Неверный адрес управляющего блока памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10:
	{
		MessageBox(NULL, (error_info + L"Ошибка в среде.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11:
	{
		MessageBox(NULL, (error_info + L"Была сделана попытка загрузить программу, имеющую неверный формат.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 12:
	{
		MessageBox(NULL, (error_info + L"Код доступа неверен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13:
	{
		MessageBox(NULL, (error_info + L"Недопустимые данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14:
	{
		MessageBox(NULL, (error_info + L"Недостаточно памяти для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 15:
	{
		MessageBox(NULL, (error_info + L"Системе не удается найти указанный диск.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 16:
	{
		MessageBox(NULL, (error_info + L"Не удается удалить папку").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 17:
	{
		MessageBox(NULL, (error_info + L"Системе не удается переместить файл на другой диск.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 18:
	{
		MessageBox(NULL, (error_info + L"Больше файлов не осталось.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 19:
	{
		MessageBox(NULL, (error_info + L"Носитель защищен от записи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 20:
	{
		MessageBox(NULL, (error_info + L"Системе не удается найти указанное устройство.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 21:
	{
		MessageBox(NULL, (error_info + L"Устройство не готово.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 22:
	{
		MessageBox(NULL, (error_info + L"Устройство не опознает команду.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 23:
	{
		MessageBox(NULL, (error_info + L"Ошибка в данных (CRC).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 24:
	{
		MessageBox(NULL, (error_info + L"Длина выданной программой команды слишком велика.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 25:
	{
		MessageBox(NULL, (error_info + L"Не удается найти заданную область или дорожку на диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 26:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к диску или дискете.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 27:
	{
		MessageBox(NULL, (error_info + L"Не удается найти заданный сектор на диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 28:
	{
		MessageBox(NULL, (error_info + L"Нет бумаги в принтере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 29:
	{
		MessageBox(NULL, (error_info + L"Системе не удается произвести запись на устройство.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 30:
	{
		MessageBox(NULL, (error_info + L"Системе не удается произвести чтение с устройства.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 31:
	{
		MessageBox(NULL, (error_info + L"Присоединенное к системе устройство не работает.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 32:
	{
		MessageBox(NULL, (error_info + L"Процесс не может получить доступ к файлу, так как этот файл занят другим процессом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 33:
	{
		MessageBox(NULL, (error_info + L"Процесс не может получить доступ к файлу, так как часть этого файла заблокирована другим процессом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 34:
	{
		MessageBox(NULL, (error_info + L"В устройство вставлен неверный диск.Вставьте %2 (серийный номер тома: %3)в устройство %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 36:
	{
		MessageBox(NULL, (error_info + L"Слишком много файлов открыто для совместного доступа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 38:
	{
		MessageBox(NULL, (error_info + L"Достигнут конец файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 39:
	{
		MessageBox(NULL, (error_info + L"Нет места на диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 50:
	{
		MessageBox(NULL, (error_info + L"Такой запрос не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 51:
	{
		MessageBox(NULL, (error_info + L"Невозможно найти сетевой путь. Убедитесь, что сетевой путь указан верно, а конечный компьютер включен и не занят. Если система вновь не сможет найти путь, обратитесь к сетевому администратору.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 52:
	{
		MessageBox(NULL, (error_info + L"Не удалось подключиться к сети из-за существования совпадающих имен. Измените имя компьютера на панели управления и повторите попытку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 53:
	{
		MessageBox(NULL, (error_info + L"Не найден сетевой путь.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 54:
	{
		MessageBox(NULL, (error_info + L"Сеть занята.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 55:
	{
		MessageBox(NULL, (error_info + L"Сетевой ресурс или устройство более недоступно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 56:
	{
		MessageBox(NULL, (error_info + L"Достигнут предел числа команд NetBIOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 57:
	{
		MessageBox(NULL, (error_info + L"Аппаратная ошибка сетевой платы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 58:
	{
		MessageBox(NULL, (error_info + L"Указанный сервер не может выполнить требуемую операцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 59:
	{
		MessageBox(NULL, (error_info + L"Непредвиденная сетевая ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 60:
	{
		MessageBox(NULL, (error_info + L"Несовместимый удаленный контроллер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 61:
	{
		MessageBox(NULL, (error_info + L"Очередь печати переполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 62:
	{
		MessageBox(NULL, (error_info + L"На сервере нет места для хранения ожидающего печати файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 63:
	{
		MessageBox(NULL, (error_info + L"Ваш файл, находившийся в очереди вывода на печать, был удален.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 64:
	{
		MessageBox(NULL, (error_info + L"Указанное сетевое имя более недоступно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 65:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 66:
	{
		MessageBox(NULL, (error_info + L"Неверно указан тип сетевого ресурса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 67:
	{
		MessageBox(NULL, (error_info + L"Не найдено сетевое имя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 68:
	{
		MessageBox(NULL, (error_info + L"Превышен предел числа имен для сетевого адаптера локального компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 69:
	{
		MessageBox(NULL, (error_info + L"Превышен предел по числу сеансов NetBIOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 70:
	{
		MessageBox(NULL, (error_info + L"Сервер сети был остановлен или находится в процессе запуска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 71:
	{
		MessageBox(NULL, (error_info + L"Дополнительные подключения к этому удаленному компьютеру в настоящее время невозможны, поскольку число подключений к компьютеру достигло предела.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 72:
	{
		MessageBox(NULL, (error_info + L"Работа указанного принтера или дискового накопителя была остановлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 80:
	{
		MessageBox(NULL, (error_info + L"Файл существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 82:
	{
		MessageBox(NULL, (error_info + L"Не удается создать файл или папку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 83:
	{
		MessageBox(NULL, (error_info + L"Сбой прерывания INT 24.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 84:
	{
		MessageBox(NULL, (error_info + L"Недостаточно памяти для обработки запроса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 85:
	{
		MessageBox(NULL, (error_info + L"Имя локального устройства уже используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 86:
	{
		MessageBox(NULL, (error_info + L"Сетевой пароль указан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 87:
	{
		MessageBox(NULL, (error_info + L"Параметр задан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 88:
	{
		MessageBox(NULL, (error_info + L"Ошибка записи в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 89:
	{
		MessageBox(NULL, (error_info + L"В настоящее время системе не удается запустить другой процесс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 100:
	{
		MessageBox(NULL, (error_info + L"Не удается создать еще один системный семафор.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 101:
	{
		MessageBox(NULL, (error_info + L"Семафор эксклюзивного доступа занят другим процессом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 102:
	{
		MessageBox(NULL, (error_info + L"Семафор установлен и не может быть закрыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 103:
	{
		MessageBox(NULL, (error_info + L"Семафор не может быть установлен повторно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 104:
	{
		MessageBox(NULL, (error_info + L"Запросы к семафорам эксклюзивного доступа на время выполнения прерываний не допускаются.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 105:
	{
		MessageBox(NULL, (error_info + L"Этот семафор более не принадлежит использовавшему его процессу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 106:
	{
		MessageBox(NULL, (error_info + L"Вставьте диск в устройство %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 107:
	{
		MessageBox(NULL, (error_info + L"Программа была остановлена, так как нужный диск вставлен не был.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 108:
	{
		MessageBox(NULL, (error_info + L"Диск занят или заблокирован другим процессом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 109:
	{
		MessageBox(NULL, (error_info + L"Канал был закрыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 110:
	{
		MessageBox(NULL, (error_info + L"Системе не удается открыть указанное устройство или файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 111:
	{
		MessageBox(NULL, (error_info + L"Указано слишком длинное имя файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 112:
	{
		MessageBox(NULL, (error_info + L"Недостаточно места на диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 113:
	{
		MessageBox(NULL, (error_info + L"Исчерпаны внутренние идентификаторы файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 114:
	{
		MessageBox(NULL, (error_info + L"Результирующий внутренний идентификатор файла неправилен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 117:
	{
		MessageBox(NULL, (error_info + L"Вызов IOCTL приложением произведен неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 118:
	{
		MessageBox(NULL, (error_info + L"Параметр проверки записи данных имеет неверное значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 119:
	{
		MessageBox(NULL, (error_info + L"Система не может обработать полученную команду.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 120:
	{
		MessageBox(NULL, (error_info + L"Эта функция не поддерживается для этой системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 121:
	{
		MessageBox(NULL, (error_info + L"Превышен таймаут семафора.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 122:
	{
		MessageBox(NULL, (error_info + L"Область данных, переданная по системному вызову, слишком мала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 123:
	{
		MessageBox(NULL, (error_info + L"Синтаксическая ошибка в имени файла, имени папки или метке тома.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 124:
	{
		MessageBox(NULL, (error_info + L"Неверный уровень системного вызова.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 125:
	{
		MessageBox(NULL, (error_info + L"У диска отсутствует метка тома.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 126:
	{
		MessageBox(NULL, (error_info + L"Не найден указанный модуль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 127:
	{
		MessageBox(NULL, (error_info + L"Не найдена указанная процедура.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 128:
	{
		MessageBox(NULL, (error_info + L"Дочерние процессы, окончания которых требуется ожидать, отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 129:
	{
		MessageBox(NULL, (error_info + L"Приложение %1 нельзя запустить в режиме Win32.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 130:
	{
		MessageBox(NULL, (error_info + L"Попытка использовать дескриптор файла для открытия раздела диска и выполнения операции, отличающейся от ввода/вывода нижнего уровня.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 131:
	{
		MessageBox(NULL, (error_info + L"Попытка поместить указатель на файл перед началом файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 132:
	{
		MessageBox(NULL, (error_info + L"Указатель на файл не может быть установлен на заданное устройство или файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 133:
	{
		MessageBox(NULL, (error_info + L"Команды JOIN и SUBST не могут быть использованы для дисков, содержащих уже объединенные диски.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 134:
	{
		MessageBox(NULL, (error_info + L"Попытка использовать команду JOIN или SUBST для диска, уже включенного в набор объединенных дисков.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 135:
	{
		MessageBox(NULL, (error_info + L"Попытка использовать команду JOIN или SUBST для диска, который уже был отображен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 136:
	{
		MessageBox(NULL, (error_info + L"Попытка снять признак объединения с диска, для которого команда JOIN не выполнялась.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 137:
	{
		MessageBox(NULL, (error_info + L"Попытка снять признак отображения с диска, для которого команда SUBST не выполнялась.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 138:
	{
		MessageBox(NULL, (error_info + L"Попытка объединить диск с папкой на объединенном диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 139:
	{
		MessageBox(NULL, (error_info + L"Попытка отобразить диск на папку, находящуюся на отображенном диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 140:
	{
		MessageBox(NULL, (error_info + L"Попытка объединить диск с папкой на отображенном диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 141:
	{
		MessageBox(NULL, (error_info + L"Попытка отобразить диск на папку, находящуюся на объединенном диске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 142:
	{
		MessageBox(NULL, (error_info + L"В настоящее время выполнить команду JOIN или SUBST невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 143:
	{
		MessageBox(NULL, (error_info + L"Невозможно объединить (или отобразить) диск с папкой (или на папку) этого же диска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 144:
	{
		MessageBox(NULL, (error_info + L"Эта папка не является подпапкой корневой папки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 145:
	{
		MessageBox(NULL, (error_info + L"Папка не пуста.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 146:
	{
		MessageBox(NULL, (error_info + L"Указанный путь используется для отображенного диска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 147:
	{
		MessageBox(NULL, (error_info + L"Недостаточно ресурсов для обработки команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 148:
	{
		MessageBox(NULL, (error_info + L"Указанный путь в настоящее время использовать нельзя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 149:
	{
		MessageBox(NULL, (error_info + L"Попытка объединить или отобразить диск, папка на котором уже используется для отображения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 150:
	{
		MessageBox(NULL, (error_info + L"Сведения о трассировке в файле CONFIG.SYS не найдены, либо трассировка запрещена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 151:
	{
		MessageBox(NULL, (error_info + L"Число семафоров для DosMuxSemWait задано неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 152:
	{
		MessageBox(NULL, (error_info + L"Не выполнен вызов DosMuxSemWait. Установлено слишком много семафоров.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 153:
	{
		MessageBox(NULL, (error_info + L"Некорректный вызов DosMuxSemWait.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 154:
	{
		MessageBox(NULL, (error_info + L"Длина метки тома превосходит предел, установленный для файловой системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 155:
	{
		MessageBox(NULL, (error_info + L"Не удается создать еще один поток команд.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 156:
	{
		MessageBox(NULL, (error_info + L"Принимающий процесс отклонил сигнал.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 157:
	{
		MessageBox(NULL, (error_info + L"Сегмент уже освобожден и не может быть заблокирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 158:
	{
		MessageBox(NULL, (error_info + L"Блокировка с сегмента уже снята.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 159:
	{
		MessageBox(NULL, (error_info + L"Адрес идентификатора потока команд задан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 160:
	{
		MessageBox(NULL, (error_info + L"Неверны один или несколько аргументов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 161:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый путь.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 162:
	{
		MessageBox(NULL, (error_info + L"Сигнал уже находится в состоянии обработки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 164:
	{
		MessageBox(NULL, (error_info + L"Создание дополнительных потоков команд невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 167:
	{
		MessageBox(NULL, (error_info + L"Не удается снять блокировку с области файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 170:
	{
		MessageBox(NULL, (error_info + L"Требуемый ресурс занят.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 173:
	{
		MessageBox(NULL, (error_info + L"Запрос на блокировку соответствует определенной области.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 174:
	{
		MessageBox(NULL, (error_info + L"Файловая система не поддерживает указанные изменения типа блокировки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 180:
	{
		MessageBox(NULL, (error_info + L"Системой обнаружен неверный номер сегмента.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 182:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 183:
	{
		MessageBox(NULL, (error_info + L"Невозможно создать файл, так как он уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 186:
	{
		MessageBox(NULL, (error_info + L"Передан неверный флаг.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 187:
	{
		MessageBox(NULL, (error_info + L"Не найдено указанное имя системного семафора.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 188:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 189:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 190:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 191:
	{
		MessageBox(NULL, (error_info + L"Не удается запустить %1 в режиме Win32.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 192:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 193:
	{
		MessageBox(NULL, (error_info + L"%1 не является приложением Win32.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 194:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 195:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 196:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить это приложение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 197:
	{
		MessageBox(NULL, (error_info + L"Конфигурация операционной системы не рассчитана на запуск этого приложения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 198:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 199:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить это приложение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 200:
	{
		MessageBox(NULL, (error_info + L"Сегмент кода должен быть меньше 64 КБ.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 201:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 202:
	{
		MessageBox(NULL, (error_info + L"Операционная система не может запустить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 203:
	{
		MessageBox(NULL, (error_info + L"Системе не удается найти указанный параметр среды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 205:
	{
		MessageBox(NULL, (error_info + L"Ни один из процессов в дереве команды не имеет обработчика сигналов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 206:
	{
		MessageBox(NULL, (error_info + L"Имя файла или его расширение имеет слишком большую длину.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 207:
	{
		MessageBox(NULL, (error_info + L"Кольцо 2 стека занято.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 208:
	{
		MessageBox(NULL, (error_info + L"Подстановочные знаки * и/или ? заданы неверно или образуют неверный шаблон имени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 209:
	{
		MessageBox(NULL, (error_info + L"Отправляемый сигнал неверен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 210:
	{
		MessageBox(NULL, (error_info + L"Не удается установить обработчик сигналов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 212:
	{
		MessageBox(NULL, (error_info + L"Сегмент заблокирован и не может быть перемещен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 214:
	{
		MessageBox(NULL, (error_info + L"К этой программе или модулю присоединено слишком много динамически подключаемых модулей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 215:
	{
		MessageBox(NULL, (error_info + L"Вызовы LoadModule не могут быть вложены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 216:
	{
		MessageBox(NULL, (error_info + L"Файл изображения %1 не поврежден, но предназначен для другого типа компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 230:
	{
		MessageBox(NULL, (error_info + L"Неправильное состояние канала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 231:
	{
		MessageBox(NULL, (error_info + L"Все копии канала заняты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 232:
	{
		MessageBox(NULL, (error_info + L"Идет закрытие канала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 233:
	{
		MessageBox(NULL, (error_info + L"С обоих концов канала отсутствуют процессы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 234:
	{
		MessageBox(NULL, (error_info + L"Имеются дополнительные данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 240:
	{
		MessageBox(NULL, (error_info + L"Сеанс был прекращен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 254:
	{
		MessageBox(NULL, (error_info + L"Имя дополнительного атрибута было задано неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 255:
	{
		MessageBox(NULL, (error_info + L"Дополнительные атрибуты несовместимы между собой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 258:
	{
		MessageBox(NULL, (error_info + L"Время ожидания операции истекло.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 259:
	{
		MessageBox(NULL, (error_info + L"Дополнительные данные отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 266:
	{
		MessageBox(NULL, (error_info + L"Не удается использовать функции копирования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 267:
	{
		MessageBox(NULL, (error_info + L"Неверно задано имя папки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 275:
	{
		MessageBox(NULL, (error_info + L"Дополнительные атрибуты не уместились в буфере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 276:
	{
		MessageBox(NULL, (error_info + L"Файл дополнительных атрибутов поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 277:
	{
		MessageBox(NULL, (error_info + L"Файл дополнительных атрибутов переполнен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 278:
	{
		MessageBox(NULL, (error_info + L"Неверно указан дескриптор дополнительного атрибута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 282:
	{
		MessageBox(NULL, (error_info + L"Установленная файловая система не поддерживает дополнительные атрибуты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 288:
	{
		MessageBox(NULL, (error_info + L"Попытка освободить не принадлежащий процессу объект синхронизации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 298:
	{
		MessageBox(NULL, (error_info + L"Слишком много попыток занесения события для семафора.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 299:
	{
		MessageBox(NULL, (error_info + L"Запрос ReadProcessMemory или WriteProcessMemory был выполнен только частично.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 300:
	{
		MessageBox(NULL, (error_info + L"Запрос на нежесткую блокировку (oplock) отклонен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 301:
	{
		MessageBox(NULL, (error_info + L"Системой получено недопустимое подтверждение на нежесткую блокировку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 302:
	{
		MessageBox(NULL, (error_info + L"Том слишком сильно фрагментирован для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 303:
	{
		MessageBox(NULL, (error_info + L"Невозможно открыть файл, поскольку это происходит в удаляемом процессе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 317:
	{
		MessageBox(NULL, (error_info + L"Не удается найти текст сообщения с номером 0x%1 в файле сообщений %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 487:
	{
		MessageBox(NULL, (error_info + L"Попытка обращения к неверному адресу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 534:
	{
		MessageBox(NULL, (error_info + L"Длина результата арифметической операции превысила 32 разряда.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 535:
	{
		MessageBox(NULL, (error_info + L"С другой стороны канала присутствует процесс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 536:
	{
		MessageBox(NULL, (error_info + L"Идет ожидание открытия процессом другой стороны канала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 994:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к дополнительным атрибутам.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 995:
	{
		MessageBox(NULL, (error_info + L"Операция ввода/вывода была прервана из-за завершения потока команд или по запросу приложения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 996:
	{
		MessageBox(NULL, (error_info + L"Наложенное событие ввода/вывода не находится в сигнальном состоянии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 997:
	{
		MessageBox(NULL, (error_info + L"Протекает наложенное событие ввода/вывода.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 998:
	{
		MessageBox(NULL, (error_info + L"Неверная попытка доступа к адресу памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 999:
	{
		MessageBox(NULL, (error_info + L"Ошибка при выполнении операции со страницей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1001:
	{
		MessageBox(NULL, (error_info + L"Слишком глубокий уровень рекурсии. Стек переполнен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1002:
	{
		MessageBox(NULL, (error_info + L"Окно не может взаимодействовать с отправленным сообщением.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1003:
	{
		MessageBox(NULL, (error_info + L"Не удается завершить выполнение функции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1004:
	{
		MessageBox(NULL, (error_info + L"Флаги установлены неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1005:
	{
		MessageBox(NULL, (error_info + L"Не удается опознать присутствующую на томе файловую систему.Убедитесь в том, что все системные драйверы загружены, а также в том, что том не поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1006:
	{
		MessageBox(NULL, (error_info + L"Том для открытого файла был изменен извне, поэтому работа с этим файлом невозможна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1007:
	{
		MessageBox(NULL, (error_info + L"Заданная операция не может быть выполнена в полноэкранном режиме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1008:
	{
		MessageBox(NULL, (error_info + L"Попытка ссылки на несуществующий маркер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1009:
	{
		MessageBox(NULL, (error_info + L"База данных реестра повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1010:
	{
		MessageBox(NULL, (error_info + L"Параметр реестра имеет неверное значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1011:
	{
		MessageBox(NULL, (error_info + L"Не удается открыть параметр реестра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1012:
	{
		MessageBox(NULL, (error_info + L"Не удается прочитать параметр реестра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1013:
	{
		MessageBox(NULL, (error_info + L"Не удается записать параметр реестра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1014:
	{
		MessageBox(NULL, (error_info + L"Один из файлов в базе данных реестра было необходимо восстановить с помощью протокола или резервной копии. Восстановление прошло успешно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1015:
	{
		MessageBox(NULL, (error_info + L"Реестр поврежден. Структура одного из файлов, содержащего данные реестра, повреждена. Возможно поврежден образ памяти в файле , или файл не удалось восстановить из-за отсутствия резервной копии или протокола.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1016:
	{
		MessageBox(NULL, (error_info + L"Неустранимый сбой операции ввода/вывода, запущенной из реестра. Не удалось выполнить чтение, запись или запись буфера для одного из файлов, содержащих образ системного реестра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1017:
	{
		MessageBox(NULL, (error_info + L"При попытке загрузить или восстановить файл реестра выяснилось, что этот файл имеет неверный формат.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1018:
	{
		MessageBox(NULL, (error_info + L"Попытка произвести недопустимую операцию над параметром реестра, отмеченным для удаления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1019:
	{
		MessageBox(NULL, (error_info + L"Не удалось выделить требуемое место в протоколе реестра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1020:
	{
		MessageBox(NULL, (error_info + L"Нельзя создать символическую связь для параметра реестра, который уже содержит подпараметры или значения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1021:
	{
		MessageBox(NULL, (error_info + L"Нельзя создать статический подпараметр для временного родительского параметра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1022:
	{
		MessageBox(NULL, (error_info + L"Запрос на уведомление об изменениях завершается, однако данные не были возвращены в буфер вызывающей процедуры. Теперь эта процедура нуждается в перечислении файлов для поиска изменений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1051:
	{
		MessageBox(NULL, (error_info + L"Команда остановки была отправлена службе, от которой зависят другие службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1052:
	{
		MessageBox(NULL, (error_info + L"Команда неуместна для данной службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1053:
	{
		MessageBox(NULL, (error_info + L"Служба не ответила на запрос своевременно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1054:
	{
		MessageBox(NULL, (error_info + L"Не удалось создать поток команд для службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1055:
	{
		MessageBox(NULL, (error_info + L"База данных службы заблокирована.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1056:
	{
		MessageBox(NULL, (error_info + L"Одна копия службы уже запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1057:
	{
		MessageBox(NULL, (error_info + L"Имя учетной записи задано неверно или не существует, или же неверен указанный пароль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1058:
	{
		MessageBox(NULL, (error_info + L"Указанная служба не может быть запущена, поскольку она отключена или все связанные с ней устройства отключены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1059:
	{
		MessageBox(NULL, (error_info + L"Была сделана попытка установить циклическую зависимость между службами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1060:
	{
		MessageBox(NULL, (error_info + L"Указанная служба не установлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1061:
	{
		MessageBox(NULL, (error_info + L"Служба в настоящее время не может принимать команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1062:
	{
		MessageBox(NULL, (error_info + L"Служба не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1063:
	{
		MessageBox(NULL, (error_info + L"Процесс службы не может установить связь с контроллером службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1064:
	{
		MessageBox(NULL, (error_info + L"Ошибка службы при обработке команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1065:
	{
		MessageBox(NULL, (error_info + L"Указанная база данных не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1066:
	{
		MessageBox(NULL, (error_info + L"Служба возвратила код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1067:
	{
		MessageBox(NULL, (error_info + L"Процесс был неожиданно завершен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1068:
	{
		MessageBox(NULL, (error_info + L"Не удалось запустить дочернюю службу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1069:
	{
		MessageBox(NULL, (error_info + L"Служба не запущена из-за ошибки входа в систему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1070:
	{
		MessageBox(NULL, (error_info + L"Сразу после запуска служба «зависла».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1071:
	{
		MessageBox(NULL, (error_info + L"Блокировка базы данных указанной службы наложена неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1072:
	{
		MessageBox(NULL, (error_info + L"Указанная служба была отмечена для удаления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1073:
	{
		MessageBox(NULL, (error_info + L"Указанная служба уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1074:
	{
		MessageBox(NULL, (error_info + L"Система в настоящий момент работает с использованием последней удачной конфигурации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1075:
	{
		MessageBox(NULL, (error_info + L"Дочерняя служба не существует или была отмечена для удаления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1076:
	{
		MessageBox(NULL, (error_info + L"Текущая конфигурация уже была задействована в качестве источника последнего удачного набора параметров.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1077:
	{
		MessageBox(NULL, (error_info + L"С момента последней загрузки попытки запустить службу не делались.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1078:
	{
		MessageBox(NULL, (error_info + L"Это имя уже используется в качестве имени службы или выводимого имени службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1079:
	{
		MessageBox(NULL, (error_info + L"Учетная запись, указанная для этой службы, отличается от учетной записи, указанной для других служб в этом же процессе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1080:
	{
		MessageBox(NULL, (error_info + L"Действия при возникновении ошибок могут быть назначены только для служб Win32, но не для драйверов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1081:
	{
		MessageBox(NULL, (error_info + L"Эта служба запущена в том же процессе, что и диспетчер управления службами.Таким образом, диспетчер не сможет предпринять какие-либо действия, если работа этой службы будет неожиданно прервана.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1082:
	{
		MessageBox(NULL, (error_info + L"Для этой службы не сконфигурировано ни одной программы восстановления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1083:
	{
		MessageBox(NULL, (error_info + L"Исполняемая программа, запуск которой настроен в службе, не включена в состав службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1084:
	{
		MessageBox(NULL, (error_info + L"Эта служба не запускается в безопасном режиме (Safe Mode)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1100:
	{
		MessageBox(NULL, (error_info + L"Достигнут физический конец ленты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1101:
	{
		MessageBox(NULL, (error_info + L"На ленте достигнута метка файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1102:
	{
		MessageBox(NULL, (error_info + L"Обнаружено начало раздела ленты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1103:
	{
		MessageBox(NULL, (error_info + L"На ленте достигнут конец набора файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1104:
	{
		MessageBox(NULL, (error_info + L"Больше данных на ленте нет.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1105:
	{
		MessageBox(NULL, (error_info + L"Не удается создать на ленте разделы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1106:
	{
		MessageBox(NULL, (error_info + L"Неверный размер блока при обращении к новой ленте многотомного раздела.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1107:
	{
		MessageBox(NULL, (error_info + L"Сведения о разделах при загрузке ленты не обнаружены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1108:
	{
		MessageBox(NULL, (error_info + L"Не удается заблокировать механизм извлечения носителя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1109:
	{
		MessageBox(NULL, (error_info + L"Не удается извлечь носитель.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1110:
	{
		MessageBox(NULL, (error_info + L"Носитель в устройстве мог быть заменен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1111:
	{
		MessageBox(NULL, (error_info + L"Шина ввода/вывода была инициализирована заново.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1112:
	{
		MessageBox(NULL, (error_info + L"Отсутствует носитель в устройстве.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1113:
	{
		MessageBox(NULL, (error_info + L"Символ Юникода не имеет сопоставления в конечной многобайтовой кодовой странице.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1114:
	{
		MessageBox(NULL, (error_info + L"Произошел сбой в программе инициализации библиотеки динамической компоновки (DLL).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1115:
	{
		MessageBox(NULL, (error_info + L"Идет завершение работы системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1116:
	{
		MessageBox(NULL, (error_info + L"Прервать завершение работы системы невозможно, так как оно не было инициировано.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1117:
	{
		MessageBox(NULL, (error_info + L"Запрос не был выполнен из-за ошибки ввода/вывода на устройстве.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1118:
	{
		MessageBox(NULL, (error_info + L"Последовательные устройства не инициализированы. Драйвер будет выгружен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1119:
	{
		MessageBox(NULL, (error_info + L"Не удается открыть устройство, использующее общий с другими устройствами запрос на прерывание (IRQ). Как минимум одно устройство, использующее этот же запрос IRQ, уже было открыто.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1120:
	{
		MessageBox(NULL, (error_info + L"Последовательная операция ввода/вывода была завершена в результате следующей операции записи в последовательный порт.(Значение IOCTL_SERIAL_XOFF_COUNTER достигло 0.)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1121:
	{
		MessageBox(NULL, (error_info + L"Последовательная операция ввода/вывода была завершена по истечении периода ожидания.(Значение IOCTL_SERIAL_XOFF_COUNTER не достигло 0.)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1122:
	{
		MessageBox(NULL, (error_info + L"На гибком диске не обнаружена адресная метка идентификатора.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1123:
	{
		MessageBox(NULL, (error_info + L"Обнаружено несоответствие между полем идентификатора сектора гибкого диска и адресом дорожки контроллера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1124:
	{
		MessageBox(NULL, (error_info + L"Ошибка, возвращенная контроллером гибких дисков, не опознается драйвером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1125:
	{
		MessageBox(NULL, (error_info + L"Контроллером гибких дисков возвращены некорректные значения регистров.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1126:
	{
		MessageBox(NULL, (error_info + L"Зафиксирован многократный сбой операции проверки при обращении к жесткому диску.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1127:
	{
		MessageBox(NULL, (error_info + L"Зафиксирован многократный сбой операции при обращении к жесткому диску.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1128:
	{
		MessageBox(NULL, (error_info + L"При обращении к жесткому диску потребовался сброс контроллера, однако даже его произвести не удалось.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1129:
	{
		MessageBox(NULL, (error_info + L"Достигнут физический конец ленты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1130:
	{
		MessageBox(NULL, (error_info + L"Недостаточно памяти сервера для обработки команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1131:
	{
		MessageBox(NULL, (error_info + L"Обнаружена вероятность возникновения взаимоблокировки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1132:
	{
		MessageBox(NULL, (error_info + L"Базовый адрес или смещение имеют неверное выравнивание.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1140:
	{
		MessageBox(NULL, (error_info + L"Попытка изменения режима питания была заблокирована другим приложением или драйвером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1141:
	{
		MessageBox(NULL, (error_info + L"Сбой BIOS при попытке изменения режима питания.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1142:
	{
		MessageBox(NULL, (error_info + L"Попытка создания большего числа ссылок на файл, чем поддерживается файловой системой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1150:
	{
		MessageBox(NULL, (error_info + L"Для указанной программы требуется более поздняя версия Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1151:
	{
		MessageBox(NULL, (error_info + L"Указанная программа не является программой для Windows или MS-DOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1152:
	{
		MessageBox(NULL, (error_info + L"Запуск более одной копии указанной программы невозможен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1153:
	{
		MessageBox(NULL, (error_info + L"Указанная программа была написана для одной из предыдущих версий Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1154:
	{
		MessageBox(NULL, (error_info + L"Поврежден один из файлов библиотек, необходимых для выполнения данного приложения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1155:
	{
		MessageBox(NULL, (error_info + L"Указанному файлу не сопоставлено ни одно приложение для выполнения данной операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1156:
	{
		MessageBox(NULL, (error_info + L"Ошибка при пересылке команды приложению.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1157:
	{
		MessageBox(NULL, (error_info + L"Не найден один из файлов библиотек, необходимых для выполнения данного приложения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1158:
	{
		MessageBox(NULL, (error_info + L"Текущий процесс использовал все системные разрешения по управлению объектами диспетчера окон.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1159:
	{
		MessageBox(NULL, (error_info + L"Сообщение может быть использовано только с операциями синхронизации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1160:
	{
		MessageBox(NULL, (error_info + L"Указанный исходный элемент не имеет носителя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1161:
	{
		MessageBox(NULL, (error_info + L"Указанный конечный элемент уже содержит носитель.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1162:
	{
		MessageBox(NULL, (error_info + L"Указанный элемент не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1163:
	{
		MessageBox(NULL, (error_info + L"Указанный элемент является частью отсутствующего журнала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1164:
	{
		MessageBox(NULL, (error_info + L"Указанный элемент требует повторной инициализации из-за аппаратных ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1165:
	{
		MessageBox(NULL, (error_info + L"Устройство требует проведение чистки перед его дальнейшим использованием.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1166:
	{
		MessageBox(NULL, (error_info + L"Устройство сообщает, что открыта дверца.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1167:
	{
		MessageBox(NULL, (error_info + L"Устройство не подключено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1168:
	{
		MessageBox(NULL, (error_info + L"Элемент не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1169:
	{
		MessageBox(NULL, (error_info + L"В индексе не найдены соответствия указанному ключу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1170:
	{
		MessageBox(NULL, (error_info + L"Указанный набор свойств не существует для объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1171:
	{
		MessageBox(NULL, (error_info + L"Переданная в GetMouseMovePoints точка не находится в буфере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1172:
	{
		MessageBox(NULL, (error_info + L"Служба слежения (на рабочей станции) не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1173:
	{
		MessageBox(NULL, (error_info + L"Не удается найти идентификатор тома.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1175:
	{
		MessageBox(NULL, (error_info + L"Не удается удалить заменяемый файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1176:
	{
		MessageBox(NULL, (error_info + L"Не удается заместить файл. Замещаемый файл сохранил свое первоначальное имя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1177:
	{
		MessageBox(NULL, (error_info + L"Не удается заместить файл. Замещаемый файл был переименован с использованием резервного имени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1178:
	{
		MessageBox(NULL, (error_info + L"Журнал изменений тома удален.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1179:
	{
		MessageBox(NULL, (error_info + L"Журнал изменений тома не активен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1180:
	{
		MessageBox(NULL, (error_info + L"Файл найден, но это может быть неверный файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1181:
	{
		MessageBox(NULL, (error_info + L"Из журнала удалена запись.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1200:
	{
		MessageBox(NULL, (error_info + L"Указано неверное имя устройства.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1201:
	{
		MessageBox(NULL, (error_info + L"Устройство в настоящее время не подключено, однако сведения о нем в конфигурации присутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1202:
	{
		MessageBox(NULL, (error_info + L"Локальное имя устройства уже используется для подключения к другому сетевому ресурсу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1203:
	{
		MessageBox(NULL, (error_info + L"Ни одна из служб доступа к сети не смогла обработать заданный сетевой путь.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1204:
	{
		MessageBox(NULL, (error_info + L"Имя службы доступа к сети задано неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1205:
	{
		MessageBox(NULL, (error_info + L"Не удается открыть конфигурацию подключения к сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1206:
	{
		MessageBox(NULL, (error_info + L"Конфигурация подключения к сети повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1207:
	{
		MessageBox(NULL, (error_info + L"Перечисление объектов, не являющихся контейнерами, невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1208:
	{
		MessageBox(NULL, (error_info + L"Ошибка расширенного типа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1209:
	{
		MessageBox(NULL, (error_info + L"Неверный формат имени группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1210:
	{
		MessageBox(NULL, (error_info + L"Неверный формат имени компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1211:
	{
		MessageBox(NULL, (error_info + L"Неверный формат имени события.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1212:
	{
		MessageBox(NULL, (error_info + L"Неверный формат имени домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1213:
	{
		MessageBox(NULL, (error_info + L"Неверный формат имени службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1214:
	{
		MessageBox(NULL, (error_info + L"Неверный формат сетевого имени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1215:
	{
		MessageBox(NULL, (error_info + L"Неверный формат имени ресурса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1216:
	{
		MessageBox(NULL, (error_info + L"Неверный формат пароля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1217:
	{
		MessageBox(NULL, (error_info + L"Неверный формат имени сообщения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1218:
	{
		MessageBox(NULL, (error_info + L"Неверный формат задания адреса, по которому отправляется сообщение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1219:
	{
		MessageBox(NULL, (error_info + L"Множественное подключение к серверу или разделяемым ресурсам одним пользователем с использованием более одного имени пользователя неразрешено. отключите все предыдущие подключения к серверу или разделяемым ресурсам и повторите…").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1220:
	{
		MessageBox(NULL, (error_info + L"Попытка установки сеанса связи с сервером сети, для которого достигнут предел по числу таких сеансов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1221:
	{
		MessageBox(NULL, (error_info + L"Имя рабочей группы или домена уже используется другим компьютером в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1222:
	{
		MessageBox(NULL, (error_info + L"Сеть отсутствует или не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1223:
	{
		MessageBox(NULL, (error_info + L"Операция была отменена пользователем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1224:
	{
		MessageBox(NULL, (error_info + L"Запрошенную операцию нельзя выполнить для файла с открытой пользователем сопоставленной секцией.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1225:
	{
		MessageBox(NULL, (error_info + L"Удаленная система отклонила запрос на подключение к сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1226:
	{
		MessageBox(NULL, (error_info + L"Сетевое подключение было закрыто.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1227:
	{
		MessageBox(NULL, (error_info + L"Конечной точке сетевого транспорта уже сопоставлен адрес.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1228:
	{
		MessageBox(NULL, (error_info + L"Конечной точке сети еще не сопоставлен адрес.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1229:
	{
		MessageBox(NULL, (error_info + L"Попытка выполнить операцию для несуществующего сетевого подключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1230:
	{
		MessageBox(NULL, (error_info + L"Попытка выполнить недопустимую операцию для активного сетевого подключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1231:
	{
		MessageBox(NULL, (error_info + L"Сетевая папка недоступна. За информацией о разрешении проблем в сети обратитесь к справочной системе Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1232:
	{
		MessageBox(NULL, (error_info + L"Сетевая папка недоступна. За информацией о разрешении проблем в сети обратитесь к справочной системе Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1233:
	{
		MessageBox(NULL, (error_info + L"Сетевая папка недоступна. За информацией о разрешении проблем в сети обратитесь к справочной системе Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1234:
	{
		MessageBox(NULL, (error_info + L"На конечном звене нужной сети удаленной системы не запущена ни одна служба.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1235:
	{
		MessageBox(NULL, (error_info + L"Запрос был прерван.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1236:
	{
		MessageBox(NULL, (error_info + L"Подключение к сети было разорвано локальной системой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1237:
	{
		MessageBox(NULL, (error_info + L"Не удалось завершить операцию. Следует повторить ее.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1238:
	{
		MessageBox(NULL, (error_info + L"Подключение к серверу невозможно, так как для данной учетной записи уже достигнут предел по числу одновременных подключений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1239:
	{
		MessageBox(NULL, (error_info + L"Попытка входа в сеть в непредусмотренное для этой учетной записи время дня.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1240:
	{
		MessageBox(NULL, (error_info + L"Данная учетная запись не может быть использована для входа в сеть с этой станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1241:
	{
		MessageBox(NULL, (error_info + L"Нельзя использовать сетевой адрес для данной операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1242:
	{
		MessageBox(NULL, (error_info + L"Служба уже зарегистрирована.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1243:
	{
		MessageBox(NULL, (error_info + L"Указанная служба не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1244:
	{
		MessageBox(NULL, (error_info + L"Запрошенная операция не была выполнена, так как пользователь не зарегистрирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1245:
	{
		MessageBox(NULL, (error_info + L"Запрошенная операция не была выполнена, так как пользователь не подключен к сети.Указанная служба не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1246:
	{
		MessageBox(NULL, (error_info + L"Требуется продолжить выполняющуюся операцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1247:
	{
		MessageBox(NULL, (error_info + L"Попытка выполнить операцию инициализации, которая уже проведена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1248:
	{
		MessageBox(NULL, (error_info + L"Больше локальных устройств не найдено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1249:
	{
		MessageBox(NULL, (error_info + L"Указанный сайт не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1250:
	{
		MessageBox(NULL, (error_info + L"Контроллер домена с указанным именем уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1251:
	{
		MessageBox(NULL, (error_info + L"Эта операция поддерживается только при наличии подключения к серверу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1252:
	{
		MessageBox(NULL, (error_info + L"Основной модуль групповой политики должен вызвать расширение даже в случае отсутствия изменений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1253:
	{
		MessageBox(NULL, (error_info + L"Выбранный пользователь не имеет допустимого профиля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1254:
	{
		MessageBox(NULL, (error_info + L"Эта операция не поддерживается на Microsoft Small Business Server").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1255:
	{
		MessageBox(NULL, (error_info + L"Идет завершение работы компьютера-сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1256:
	{
		MessageBox(NULL, (error_info + L"Удаленная система недоступна. За информацией о разрешении проблем в сети, обратитесь к справочной системе Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1257:
	{
		MessageBox(NULL, (error_info + L"Был указан идентификатор безопасности не из того домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1258:
	{
		MessageBox(NULL, (error_info + L"В указанном идентификаторе безопасности отсутствует компонент для домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1259:
	{
		MessageBox(NULL, (error_info + L"Окно AppHelp закрыто, из-за чего приложение запущено не было.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1260:
	{
		MessageBox(NULL, (error_info + L"Невозможно открыть данную программу из-за политики ограничения применения программного обеспечения. За дополнительной информацией обратитесь к системному администратору или откройте «Просмотр событий».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1261:
	{
		MessageBox(NULL, (error_info + L"Попытка программы использовать неправильное значение регистра. Обычно это вызвано неинициализированным регистром.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1262:
	{
		MessageBox(NULL, (error_info + L"Общий ресурс недоступен или не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1263:
	{
		MessageBox(NULL, (error_info + L"Протокол kerberos встретил ошибку при проверкесертификата KDC во время входа со смарт-картой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1264:
	{
		MessageBox(NULL, (error_info + L"Протокол kerberos встретил ошибку при попытке использоватьподсистему для сарт-карт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1265:
	{
		MessageBox(NULL, (error_info + L"Системой обнаружена попытка нарушения безопасности. Проверьте наличие доступа к серверу, через который был выполнен вход.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1266:
	{
		MessageBox(NULL, (error_info + L"Использованный для проверки подлинности сертификат смарт-карты был отозван.Обратитесь к администратору системы. Дополнительные сведения можно найтив журнале событий.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1267:
	{
		MessageBox(NULL, (error_info + L"При обработке сертификата смарт-карты был обнаружен центр сертификации,не входящий в число доверенных. Обратитесь к администратору системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1268:
	{
		MessageBox(NULL, (error_info + L"Не удается определить статус отзыва использованного при проверке подлинностисертификата смарт-карты. Обратитесь к администратору системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1269:
	{
		MessageBox(NULL, (error_info + L"Использованный при проверке подлинности сертификат смарт-карты не заслуживаетдоверия. Обратитесь к администратору системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1270:
	{
		MessageBox(NULL, (error_info + L"Срок действия использованного при проверке подлинности сертификата смарт-картыистек. Обратитесь к администратору системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1271:
	{
		MessageBox(NULL, (error_info + L"Компьютер заблокирован и не может завершить работу без режима принудительного завершения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1273:
	{
		MessageBox(NULL, (error_info + L"Определенный в приложении ответный вызов вернул неверные данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1274:
	{
		MessageBox(NULL, (error_info + L"Система групповой политики должна вызывать расширения в синхронном, не фоновом режиме обновления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1275:
	{
		MessageBox(NULL, (error_info + L"Загрузка драйвера была заблокирована").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1276:
	{
		MessageBox(NULL, (error_info + L"Библиотека, на которую ссылается модуль, не является библиотекой динамической компоновки (DLL) или исполняемым модулем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1300:
	{
		MessageBox(NULL, (error_info + L"Пользователь обладает не всеми использованными правами доступа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1301:
	{
		MessageBox(NULL, (error_info + L"Не было установлено соответствие между именами пользователей и идентификаторами защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1302:
	{
		MessageBox(NULL, (error_info + L"Системные квоты для данной учетной записи не установлены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1303:
	{
		MessageBox(NULL, (error_info + L"Ключ шифрования недоступен. Возвращен общедоступный ключ.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1304:
	{
		MessageBox(NULL, (error_info + L"Пароль слишком сложен и не может быть преобразован в пароль LAN Manager. Вместо пароля LAN Manager была возвращена пустая строка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1305:
	{
		MessageBox(NULL, (error_info + L"Уровень редакции неизвестен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1306:
	{
		MessageBox(NULL, (error_info + L"Два уровня редакции являются несовместимыми.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1307:
	{
		MessageBox(NULL, (error_info + L"Этот код защиты не может соответствовать владельцу объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1308:
	{
		MessageBox(NULL, (error_info + L"Этот код защиты не может соответствовать основной группе объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1309:
	{
		MessageBox(NULL, (error_info + L"Предпринята попытка использования элемента олицетворения потоком команд, который в данное время не олицетворяет клиента.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1310:
	{
		MessageBox(NULL, (error_info + L"Группу нельзя отключить.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1311:
	{
		MessageBox(NULL, (error_info + L"Отсутствуют серверы, которые могли бы обработать запрос на вход в сеть.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1312:
	{
		MessageBox(NULL, (error_info + L"Указанный сеанс работы не существует. Возможно, он уже завершен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1313:
	{
		MessageBox(NULL, (error_info + L"Указанная привилегия не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1314:
	{
		MessageBox(NULL, (error_info + L"Клиент не обладает требуемыми правами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1315:
	{
		MessageBox(NULL, (error_info + L"Указанное имя не является корректным именем пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1316:
	{
		MessageBox(NULL, (error_info + L"Пользователь с указанным именем уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1317:
	{
		MessageBox(NULL, (error_info + L"Пользователь с указанным именем не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1318:
	{
		MessageBox(NULL, (error_info + L"Указанная группа уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1319:
	{
		MessageBox(NULL, (error_info + L"Указанная группа не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1320:
	{
		MessageBox(NULL, (error_info + L"Указанный пользователь уже является членом заданной группы, либо группа не может быть удалена, так как содержит как минимум одного пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1321:
	{
		MessageBox(NULL, (error_info + L"Указанный пользователь не является членом заданной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1322:
	{
		MessageBox(NULL, (error_info + L"Последнюю учетную запись из группы администраторов нельзя отключить или удалить.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1323:
	{
		MessageBox(NULL, (error_info + L"Не удается обновить пароль. Текущий пароль был задан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1324:
	{
		MessageBox(NULL, (error_info + L"Не удается обновить пароль. Новый пароль содержит недопустимые символы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1325:
	{
		MessageBox(NULL, (error_info + L"Не удается обновить пароль. Введенный пароль не обеспечивает требований домена к длине пароля, его сложности или истории обновления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1326:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: имя пользователя или пароль не опознаны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1327:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: имеются ограничения, связанные с учетной записью. Возможные причины: запрещены пустые пароли, ограничено время входа или применены ограничения групповой политики.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1328:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: учетная запись не предусматривает возможность входа в данное время.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1329:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: пользователю не предоставлено право работы на этом компьютере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1330:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: срок действия указанного пароля истек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1331:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: учетная запись в настоящее время отключена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1332:
	{
		MessageBox(NULL, (error_info + L"Именам пользователей не сопоставлены коды защиты данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1333:
	{
		MessageBox(NULL, (error_info + L"Одновременно запрошено слишком много локальных кодов пользователей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1334:
	{
		MessageBox(NULL, (error_info + L"Дополнительные локальные коды пользователей недоступны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1335:
	{
		MessageBox(NULL, (error_info + L"Часть кода защиты данных неверна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1336:
	{
		MessageBox(NULL, (error_info + L"Список управления доступом (ACL) имеет неверную структуру.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1337:
	{
		MessageBox(NULL, (error_info + L"Код защиты данных имеет неверную структуру.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1338:
	{
		MessageBox(NULL, (error_info + L"Дескриптор защиты данных имеет неверную структуру.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1340:
	{
		MessageBox(NULL, (error_info + L"Не удается построить список управления доступом (ACL) или элемент этого списка (ACE).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1341:
	{
		MessageBox(NULL, (error_info + L"Сервер в настоящее время отключен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1342:
	{
		MessageBox(NULL, (error_info + L"Сервер в настоящее время включен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1343:
	{
		MessageBox(NULL, (error_info + L"Указано недопустимое значение для защитного кода.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1344:
	{
		MessageBox(NULL, (error_info + L"Недостаточно памяти для обновления сведений, относящихся к защите данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1345:
	{
		MessageBox(NULL, (error_info + L"Указанные атрибуты неверны или несовместимы с атрибутами группы в целом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1346:
	{
		MessageBox(NULL, (error_info + L"Требуемый уровень олицетворения не обеспечен, или обеспеченный уровень неверен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1347:
	{
		MessageBox(NULL, (error_info + L"Не удается открыть маркер безопасности анонимного уровня.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1348:
	{
		MessageBox(NULL, (error_info + L"Запрошен неправильный класс сведений для проверки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1349:
	{
		MessageBox(NULL, (error_info + L"Тип маркера не соответствует выполняемой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1350:
	{
		MessageBox(NULL, (error_info + L"Операция, связанная с защитой данных, не может быть выполнена для незащищенного объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1351:
	{
		MessageBox(NULL, (error_info + L"Не удалось получить данные о конфигурации от контроллера домена. Либо он отключен, либо к нему нет доступа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1352:
	{
		MessageBox(NULL, (error_info + L"Диспетчер защиты (SAM) или локальный сервер (LSA) не смог выполнить требуемую операцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1353:
	{
		MessageBox(NULL, (error_info + L"Состояние домена не позволило выполнить нужную операцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1354:
	{
		MessageBox(NULL, (error_info + L"Операция разрешена только для основного контроллера домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1355:
	{
		MessageBox(NULL, (error_info + L"Указанный домен не существует или к нему невозможно подключиться.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1356:
	{
		MessageBox(NULL, (error_info + L"Указанный домен уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1357:
	{
		MessageBox(NULL, (error_info + L"Была сделана попытка превысить предел на число доменов, обслуживаемых одним сервером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1358:
	{
		MessageBox(NULL, (error_info + L"Не удается завершить требуемую операцию из-за сбоев в данных на диске или неустранимой ошибки носителя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1359:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1360:
	{
		MessageBox(NULL, (error_info + L"Универсальные типы доступа содержатся в маске доступа, которая должна была уже быть связана с нестандартными типами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1361:
	{
		MessageBox(NULL, (error_info + L"Дескриптор защиты имеет неверный формат.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1362:
	{
		MessageBox(NULL, (error_info + L"Выполнение запрошенной операции разрешено только для процессов входа в систему. Вызывающий процесс не зарегистрирован как процесс входа в систему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1363:
	{
		MessageBox(NULL, (error_info + L"Запуск нового сеанса работы с уже использующимся кодом невозможен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1364:
	{
		MessageBox(NULL, (error_info + L"Пакет проверки подлинности не опознан.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1365:
	{
		MessageBox(NULL, (error_info + L"Текущее состояние сеанса входа в систему не подходит для запрошенной операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1366:
	{
		MessageBox(NULL, (error_info + L"Код сеанса входа в систему уже используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1367:
	{
		MessageBox(NULL, (error_info + L"Режим входа в систему задан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1368:
	{
		MessageBox(NULL, (error_info + L"Невозможно обеспечить олицетворение через именованный канал до тех пор, пока данные не считаны из этого канала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1369:
	{
		MessageBox(NULL, (error_info + L"Операция несовместима с состоянием транзакции для ветви реестра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1370:
	{
		MessageBox(NULL, (error_info + L"База данных защиты повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1371:
	{
		MessageBox(NULL, (error_info + L"Операция не предназначена для встроенных учетных записей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1372:
	{
		MessageBox(NULL, (error_info + L"Операция не предназначена для встроенной специальной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1373:
	{
		MessageBox(NULL, (error_info + L"Операция не предназначена для встроенного специального пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1374:
	{
		MessageBox(NULL, (error_info + L"Нельзя удалить пользователя из группы, так как она является для него основной.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1375:
	{
		MessageBox(NULL, (error_info + L"Маркер уже используется в качестве основного маркера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1376:
	{
		MessageBox(NULL, (error_info + L"Указанная локальная группа не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1377:
	{
		MessageBox(NULL, (error_info + L"Указанный пользователь не входит в локальную группу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1378:
	{
		MessageBox(NULL, (error_info + L"Указанный пользователь уже является членом локальной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1379:
	{
		MessageBox(NULL, (error_info + L"Указанная локальная группа уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1380:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: выбранный режим входа для данного пользователя на этом компьютере не предусмотрен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1381:
	{
		MessageBox(NULL, (error_info + L"Достигнут предел по количеству защищенных данных/ресурсов для одной системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1382:
	{
		MessageBox(NULL, (error_info + L"Длина защищенных данных превышает максимально возможную.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1383:
	{
		MessageBox(NULL, (error_info + L"Локальная база данных защиты содержит внутренние несоответствия.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1384:
	{
		MessageBox(NULL, (error_info + L"В процессе входа в систему было использовано слишком много кодов защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1385:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: выбранный режим входа для данного пользователя на этом компьютере не предусмотрен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1386:
	{
		MessageBox(NULL, (error_info + L"Для смены пароля необходим зашифрованный пароль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1387:
	{
		MessageBox(NULL, (error_info + L"Не удалось добавить или удалить члена локальной группы, так как он не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1388:
	{
		MessageBox(NULL, (error_info + L"Добавление нового члена в локальную группу невозможно, так как он имеет неправильный тип учетной записи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1389:
	{
		MessageBox(NULL, (error_info + L"Задано слишком много кодов защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1390:
	{
		MessageBox(NULL, (error_info + L"Для смены пароля необходим зашифрованный пароль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1391:
	{
		MessageBox(NULL, (error_info + L"Список управления доступом (ACL) не содержит наследуемых компонентов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1392:
	{
		MessageBox(NULL, (error_info + L"Файл или папка повреждены. Чтение невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1393:
	{
		MessageBox(NULL, (error_info + L"Структура диска повреждена. Чтение невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1394:
	{
		MessageBox(NULL, (error_info + L"Для заданного сеанса входа в систему отсутствует раздел сеанса пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1395:
	{
		MessageBox(NULL, (error_info + L"Для вызываемой службы действует лицензия на определенное число подключений.В настоящее время создание дополнительных подключений к службе невозможно, так как уже существует максимально допустимое число подключений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1396:
	{
		MessageBox(NULL, (error_info + L"Вход в систему не произведен: конечная учетная запись указана неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1397:
	{
		MessageBox(NULL, (error_info + L"Ошибка взаимной проверки подлинности. Пароль сервера на контроллере домена устарел.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1398:
	{
		MessageBox(NULL, (error_info + L"Существует разница настройки времени и/или даты между клиентом и сервером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1399:
	{
		MessageBox(NULL, (error_info + L"Эта операция не может быть выполнена над текущим доменом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1400:
	{
		MessageBox(NULL, (error_info + L"Недопустимый дескриптор окна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1401:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор меню.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1402:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор указателя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1403:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор таблицы сочетаний клавиш.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1404:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор обработчика.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1405:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор многооконной структуры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1406:
	{
		MessageBox(NULL, (error_info + L"Не удается создать дочернее окно верхнего уровня.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1407:
	{
		MessageBox(NULL, (error_info + L"Не удается найти класс окна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1408:
	{
		MessageBox(NULL, (error_info + L"Окно принадлежит другому потоку команд.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1409:
	{
		MessageBox(NULL, (error_info + L"Назначенная клавиша уже зарегистрирована.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1410:
	{
		MessageBox(NULL, (error_info + L"Класс уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1411:
	{
		MessageBox(NULL, (error_info + L"Класс не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1412:
	{
		MessageBox(NULL, (error_info + L"Не все окна, принадлежащие данному классу, закрыты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1413:
	{
		MessageBox(NULL, (error_info + L"Неверный индекс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1414:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор значка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1415:
	{
		MessageBox(NULL, (error_info + L"Используются ключевые слова, относящиеся к окнам диалога типа private.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1416:
	{
		MessageBox(NULL, (error_info + L"Идентификатор списка не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1417:
	{
		MessageBox(NULL, (error_info + L"Подстановочные знаки не обнаружены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1418:
	{
		MessageBox(NULL, (error_info + L"Буфер обмена для потока команд не открыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1419:
	{
		MessageBox(NULL, (error_info + L"Назначенная клавиша не зарегистрирована.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1420:
	{
		MessageBox(NULL, (error_info + L"Окно не является окном диалога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1421:
	{
		MessageBox(NULL, (error_info + L"Не найден идентификатор элемента управления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1422:
	{
		MessageBox(NULL, (error_info + L"Неверное сообщение для поля со списком (поле не имеет области ввода).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1423:
	{
		MessageBox(NULL, (error_info + L"Окно не является полем со списком.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1424:
	{
		MessageBox(NULL, (error_info + L"Высота не может превышать 256.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1425:
	{
		MessageBox(NULL, (error_info + L"Неверный дескриптор контекста устройства (DC).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1426:
	{
		MessageBox(NULL, (error_info + L"Неверный тип процедуры обработки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1427:
	{
		MessageBox(NULL, (error_info + L"Неверная процедура обработки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1428:
	{
		MessageBox(NULL, (error_info + L"Невозможно установить нелокальный обработчик без дескриптора модуля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1429:
	{
		MessageBox(NULL, (error_info + L"Эта процедура обработки может быть только глобальной.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1430:
	{
		MessageBox(NULL, (error_info + L"Процедура для обработки журнала уже установлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1431:
	{
		MessageBox(NULL, (error_info + L"Процедура обработки не установлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1432:
	{
		MessageBox(NULL, (error_info + L"Неправильное сообщение для простого списка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1433:
	{
		MessageBox(NULL, (error_info + L"Параметр LB_SETCOUNT отправлен списку неправильного типа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1434:
	{
		MessageBox(NULL, (error_info + L"Список не входит в порядок обхода элементов управления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1435:
	{
		MessageBox(NULL, (error_info + L"Нельзя уничтожить объект, созданный другим потоком команд.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1436:
	{
		MessageBox(NULL, (error_info + L"Дочерние окна не могут иметь меню.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1437:
	{
		MessageBox(NULL, (error_info + L"Окно не имеет системного меню.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1438:
	{
		MessageBox(NULL, (error_info + L"Неверный тип окна сообщения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1439:
	{
		MessageBox(NULL, (error_info + L"Неверный системный параметр (SPI_*).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1440:
	{
		MessageBox(NULL, (error_info + L"Экран уже заблокирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1441:
	{
		MessageBox(NULL, (error_info + L"Дескрипторы всех окон, входящих в многооконную структуру, должны иметь общий родительский дескриптор.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1442:
	{
		MessageBox(NULL, (error_info + L"Окно не является дочерним.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1443:
	{
		MessageBox(NULL, (error_info + L"Неверная команда GW_*.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1444:
	{
		MessageBox(NULL, (error_info + L"Неверный идентификатор потока команд.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1445:
	{
		MessageBox(NULL, (error_info + L"Невозможно обработать сообщение от окна, не являющегося компонентом многооконного (MDI) интерфейса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1446:
	{
		MessageBox(NULL, (error_info + L"Всплывающее меню уже активно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1447:
	{
		MessageBox(NULL, (error_info + L"Окно не имеет полос прокрутки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1448:
	{
		MessageBox(NULL, (error_info + L"Диапазон значений для полосы прокрутки не может выходить за пределы MAXLONG.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1449:
	{
		MessageBox(NULL, (error_info + L"Невозможно отобразить или удалить окно указанным способом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1450:
	{
		MessageBox(NULL, (error_info + L"Недостаточно системных ресурсов для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1451:
	{
		MessageBox(NULL, (error_info + L"Недостаточно системных ресурсов для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1452:
	{
		MessageBox(NULL, (error_info + L"Недостаточно системных ресурсов для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1453:
	{
		MessageBox(NULL, (error_info + L"Недостаточная квота для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1454:
	{
		MessageBox(NULL, (error_info + L"Недостаточная квота для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1455:
	{
		MessageBox(NULL, (error_info + L"Файл подкачки слишком мал для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1456:
	{
		MessageBox(NULL, (error_info + L"Не найден пункт меню.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1457:
	{
		MessageBox(NULL, (error_info + L"Недопустимая раскладка клавиатуры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1458:
	{
		MessageBox(NULL, (error_info + L"Запрещенный тип ловушки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1459:
	{
		MessageBox(NULL, (error_info + L"Эта операция требует интерактивного оконного терминала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1460:
	{
		MessageBox(NULL, (error_info + L"Возврат из операции произошел из-за превышения времени ожидания.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1461:
	{
		MessageBox(NULL, (error_info + L"Недопустимый обработчик монитора.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1500:
	{
		MessageBox(NULL, (error_info + L"Журнал событий поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1501:
	{
		MessageBox(NULL, (error_info + L"Не удается найти файл журнала событий. Служба протоколирования событий не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1502:
	{
		MessageBox(NULL, (error_info + L"Журнал событий переполнен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1503:
	{
		MessageBox(NULL, (error_info + L"Журнал событий был изменен в промежутке между двумя операциями чтения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1601:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к службе установки Windows. Возможно система запущена в безопасном режиме или Windows Installer установлен неправильно. Обратитесь в службу поддержки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1602:
	{
		MessageBox(NULL, (error_info + L"Установка, прерванная пользователем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1603:
	{
		MessageBox(NULL, (error_info + L"В процессе установки произошла неисправимая ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1604:
	{
		MessageBox(NULL, (error_info + L"Установка приостановлена, но не завершена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1605:
	{
		MessageBox(NULL, (error_info + L"Это действие допускается только для установленных продуктов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1606:
	{
		MessageBox(NULL, (error_info + L"Идентификатор функции не зарегистрирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1607:
	{
		MessageBox(NULL, (error_info + L"Идентификатор компонента не зарегистрирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1608:
	{
		MessageBox(NULL, (error_info + L"Неизвестное свойство.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1609:
	{
		MessageBox(NULL, (error_info + L"Обработчик находится в недопустимом состоянии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1610:
	{
		MessageBox(NULL, (error_info + L"Данные настройки для этого продукта повреждены. Обратитесь в службу поддержки организации").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1611:
	{
		MessageBox(NULL, (error_info + L"Отсутствует квалификатор компонента.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1612:
	{
		MessageBox(NULL, (error_info + L"Ресурс с установочными файлами для этого продукта недоступен. Проверьте существование ресурса и доступ к нему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1613:
	{
		MessageBox(NULL, (error_info + L"Этот установочный пакет не может быть развернут службой установки Windows. Нужно установить пакет обновления Windows, содержащий обновленную версию службы установки Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1614:
	{
		MessageBox(NULL, (error_info + L"Продукт удален из системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1615:
	{
		MessageBox(NULL, (error_info + L"Недопустимый или не поддерживаемый синтаксис запроса SQL.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1616:
	{
		MessageBox(NULL, (error_info + L"Поле записи отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1617:
	{
		MessageBox(NULL, (error_info + L"Это устройство было удалено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1618:
	{
		MessageBox(NULL, (error_info + L"Уже запущена другая копия процесса установки. Завершите уже начатую установку, прежде чем запускать новую.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1619:
	{
		MessageBox(NULL, (error_info + L"Невозможно открыть этот установочный пакет. Проверьте, что пакет существует и к нему есть доступ, или обратитесь к поставщику программы, чтобы убедиться в правильности этого установочного пакета Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1620:
	{
		MessageBox(NULL, (error_info + L"Невозможно открыть этот установочный пакет. Обратитесь к поставщику программы, чтобы убедиться в правильности этого установочного пакета Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1621:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка при запуске пользовательского интерфейса службы установки Windows. Обратитесь в службу поддержки вашей организации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1622:
	{
		MessageBox(NULL, (error_info + L"Ошибка открытия файла журнала установки. Проверьте наличие данного файла журнала и прав на запись в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1623:
	{
		MessageBox(NULL, (error_info + L"Язык этого установочного пакета не поддерживается данной системой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1624:
	{
		MessageBox(NULL, (error_info + L"Ошибка применения преобразований. Проверьте правильности путей указанных преобразований.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1625:
	{
		MessageBox(NULL, (error_info + L"Установка запрещена на основании системной политики. Обратитесь к системному администратору.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1626:
	{
		MessageBox(NULL, (error_info + L"Выполнение функции невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1627:
	{
		MessageBox(NULL, (error_info + L"Ошибка исполнения функции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1628:
	{
		MessageBox(NULL, (error_info + L"Указана недопустимая или неизвестная таблица.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1629:
	{
		MessageBox(NULL, (error_info + L"Получены данные неверного типа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1630:
	{
		MessageBox(NULL, (error_info + L"Данные этого типа не поддерживаются.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1631:
	{
		MessageBox(NULL, (error_info + L"Ошибка запуска службы установки Windows. Обратитесь в службу поддержки вашей организации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1632:
	{
		MessageBox(NULL, (error_info + L"Временная папка переполнена или к ней нет доступа. Освободите место на устройстве или убедитесь в возможности записи во временную папку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1633:
	{
		MessageBox(NULL, (error_info + L"Этот установочный пакет этим типом процессора. Обратитесь за помощью к поставщику пакета.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1634:
	{
		MessageBox(NULL, (error_info + L"Данный компонент не используется на этом компьютере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1635:
	{
		MessageBox(NULL, (error_info + L"Не удалось открыть этот пакет исправлений. Проверьте, что пакет существует и к нему есть доступ, или обратитесь к поставщику пакета, чтобы удостовериться в том, что этот пакет является правильным пакетом исправлений Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1636:
	{
		MessageBox(NULL, (error_info + L"Не удалось открыть этот пакет исправлений. Обратитесь к поставщику пакета, чтобы удостовериться в том, что этот пакет является правильным пакетом исправлений Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1637:
	{
		MessageBox(NULL, (error_info + L"Этот пакет исправлений не может быть обработан имеющейся службой установки Windows. Следует установить пакет обновления Windows, содержащий новую версию службы установки Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1638:
	{
		MessageBox(NULL, (error_info + L"Уже установлена другая версия этого продукта. Продолжение установки невозможно. Для настройки конфигурации или удаления существующей версии продукта используйте значок «Установка и удаление программ» на панели управления .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1639:
	{
		MessageBox(NULL, (error_info + L"Недопустимый аргумент командной строки. За справкой по использованию командной строки обратитесь к Windows Installer SDK.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1640:
	{
		MessageBox(NULL, (error_info + L"Только администраторы обладают правами на добавление, удаление или настройку сервера в течение работы удаленного сеанса служб терминалов. Обратитесь за помощью к системному администратору.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1641:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция успешно завершена. Чтобы сделанные изменения возымели силу, система будет перезагружена, .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1642:
	{
		MessageBox(NULL, (error_info + L"Пакет обновления не может быть установлен при помощи установщика Windows, поскольку обновляемая программа либо утеряна, либо пакет обновления предназначен для другой версии этой программы. Проверьте наличие этой программы на компьютере и правильность номера версии пакета обновления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1643:
	{
		MessageBox(NULL, (error_info + L"Пакеты исправления не допускаются политикой для приложений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1644:
	{
		MessageBox(NULL, (error_info + L"Перенастройки не допускаются политикой для приложений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1700:
	{
		MessageBox(NULL, (error_info + L"Неправильная строка привязки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1701:
	{
		MessageBox(NULL, (error_info + L"Неверный тип дескриптора привязки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1702:
	{
		MessageBox(NULL, (error_info + L"Недопустимый дескриптор привязки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1703:
	{
		MessageBox(NULL, (error_info + L"Последовательность протокола RPC не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1704:
	{
		MessageBox(NULL, (error_info + L"Некорректная последовательность протокола RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1705:
	{
		MessageBox(NULL, (error_info + L"Неверный универсальный уникальный идентификатор строки (UUID).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1706:
	{
		MessageBox(NULL, (error_info + L"Неправильный формат конечной точки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1707:
	{
		MessageBox(NULL, (error_info + L"Сетевой адрес задан неправильно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1708:
	{
		MessageBox(NULL, (error_info + L"Не найдена конечная точка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1709:
	{
		MessageBox(NULL, (error_info + L"Неправильное значение таймаута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1710:
	{
		MessageBox(NULL, (error_info + L"Универсальный уникальный идентификатор объекта (UUID) не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1711:
	{
		MessageBox(NULL, (error_info + L"Универсальный уникальный идентификатор объекта (UUID) уже зарегистрирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1712:
	{
		MessageBox(NULL, (error_info + L"Универсальный уникальный идентификатор типа (UUID) уже зарегистрирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1713:
	{
		MessageBox(NULL, (error_info + L"Сервер RPC уже находится в режиме приема команд.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1714:
	{
		MessageBox(NULL, (error_info + L"Не зарегистрирована ни одна последовательность протоколов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1715:
	{
		MessageBox(NULL, (error_info + L"Сервер RPC не принимает команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1716:
	{
		MessageBox(NULL, (error_info + L"Неизвестный тип диспетчера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1717:
	{
		MessageBox(NULL, (error_info + L"Неизвестный интерфейс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1718:
	{
		MessageBox(NULL, (error_info + L"Привязки отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1719:
	{
		MessageBox(NULL, (error_info + L"Последовательности протоколов отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1720:
	{
		MessageBox(NULL, (error_info + L"Создание конечной точки невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1721:
	{
		MessageBox(NULL, (error_info + L"Недостаточно ресурсов для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1722:
	{
		MessageBox(NULL, (error_info + L"Сервер RPC недоступен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1723:
	{
		MessageBox(NULL, (error_info + L"Сервер RPC занят и не может завершить операцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1724:
	{
		MessageBox(NULL, (error_info + L"Неверные параметры сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1725:
	{
		MessageBox(NULL, (error_info + L"Данный поток команд не содержит активных удаленных вызовов процедур.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1726:
	{
		MessageBox(NULL, (error_info + L"Сбой при удаленном вызове процедуры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1727:
	{
		MessageBox(NULL, (error_info + L"Сбой при удаленном вызове процедуры. Вызов не произведен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1728:
	{
		MessageBox(NULL, (error_info + L"Ошибка протокола удаленного вызова процедур (RPC).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1730:
	{
		MessageBox(NULL, (error_info + L"Синтаксис передачи не поддерживается сервером RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1732:
	{
		MessageBox(NULL, (error_info + L"Тип универсального уникального идентификатора (UUID) не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1733:
	{
		MessageBox(NULL, (error_info + L"Неверный тег.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1734:
	{
		MessageBox(NULL, (error_info + L"Неверные границы массива.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1735:
	{
		MessageBox(NULL, (error_info + L"Привязка не содержит имени элемента.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1736:
	{
		MessageBox(NULL, (error_info + L"Имя имеет неправильный синтаксис.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1737:
	{
		MessageBox(NULL, (error_info + L"Синтаксис имени не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1739:
	{
		MessageBox(NULL, (error_info + L"Отсутствуют сетевые адреса, позволяющие сконструировать универсальный уникальный идентификатор (UUID).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1740:
	{
		MessageBox(NULL, (error_info + L"Эта конечная точка дублирует уже существующую.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1741:
	{
		MessageBox(NULL, (error_info + L"Неизвестный тип проверки подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1742:
	{
		MessageBox(NULL, (error_info + L"Предельное число вызовов слишком мало.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1743:
	{
		MessageBox(NULL, (error_info + L"Слишком длинная строка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1744:
	{
		MessageBox(NULL, (error_info + L"Не найдена последовательность протокола RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1745:
	{
		MessageBox(NULL, (error_info + L"Номер процедуры выходит за допустимые границы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1746:
	{
		MessageBox(NULL, (error_info + L"Привязка не содержит никаких сведений, относящихся к проверке подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1747:
	{
		MessageBox(NULL, (error_info + L"Неизвестная служба проверки подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1748:
	{
		MessageBox(NULL, (error_info + L"Неизвестный уровень проверки подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1749:
	{
		MessageBox(NULL, (error_info + L"Неправильный контекст безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1750:
	{
		MessageBox(NULL, (error_info + L"Неизвестная служба авторизации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1751:
	{
		MessageBox(NULL, (error_info + L"Недопустимый элемент.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1752:
	{
		MessageBox(NULL, (error_info + L"Конечный узел (сервер) не может выполнить операцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1753:
	{
		MessageBox(NULL, (error_info + L"В системе отображения конечных точек не осталось доступных конечных точек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1754:
	{
		MessageBox(NULL, (error_info + L"Ни один интерфейс не экспортирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1755:
	{
		MessageBox(NULL, (error_info + L"Имя элемента задано не полностью.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1756:
	{
		MessageBox(NULL, (error_info + L"Неправильная версия.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1757:
	{
		MessageBox(NULL, (error_info + L"Другие члены в группе отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1758:
	{
		MessageBox(NULL, (error_info + L"Элементы, экспорт которых можно отменить, отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1759:
	{
		MessageBox(NULL, (error_info + L"Интерфейс не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1760:
	{
		MessageBox(NULL, (error_info + L"Элемент уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1761:
	{
		MessageBox(NULL, (error_info + L"Элемент не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1762:
	{
		MessageBox(NULL, (error_info + L"Служба имен недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1763:
	{
		MessageBox(NULL, (error_info + L"Неверное семейство сетевых адресов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1764:
	{
		MessageBox(NULL, (error_info + L"Запрошенная операция не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1765:
	{
		MessageBox(NULL, (error_info + L"Нет доступных контекстов безопасности для олицетворения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1766:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка при удаленном вызове процедуры (RPC).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1767:
	{
		MessageBox(NULL, (error_info + L"Сервер RPC попытался произвести целочисленное деление на нуль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1768:
	{
		MessageBox(NULL, (error_info + L"Ошибка адресации на сервере RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1769:
	{
		MessageBox(NULL, (error_info + L"Операция с плавающей точкой на сервере RPC привела к делению на нуль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1770:
	{
		MessageBox(NULL, (error_info + L"Исчезновение порядка при операции с плавающей точкой на сервере RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1771:
	{
		MessageBox(NULL, (error_info + L"Переполнение при операции с плавающей точкой на сервере RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1772:
	{
		MessageBox(NULL, (error_info + L"Список серверов RPC, доступных для привязки дескрипторов, был исчерпан.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1773:
	{
		MessageBox(NULL, (error_info + L"Не удается открыть файл таблицы преобразования символов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1774:
	{
		MessageBox(NULL, (error_info + L"Файл, содержащий таблицу преобразования символов, имеет размер менее 512 байт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1775:
	{
		MessageBox(NULL, (error_info + L"При удаленном вызове процедуры главному компьютеру от клиента был передан пустой дескриптор контекста.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1777:
	{
		MessageBox(NULL, (error_info + L"В процессе удаленного вызова процедуры дескриптор контекста был изменен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1778:
	{
		MessageBox(NULL, (error_info + L"Дескрипторы привязки, переданные удаленному вызову процедуры, не совпадают.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1779:
	{
		MessageBox(NULL, (error_info + L"Не удается получить дескриптор удаленного вызова процедуры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1780:
	{
		MessageBox(NULL, (error_info + L"Заглушке передан нулевой указатель ссылки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1781:
	{
		MessageBox(NULL, (error_info + L"Номер находится за пределами допустимого диапазона.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1782:
	{
		MessageBox(NULL, (error_info + L"Значение счетчика байт слишком мало.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1783:
	{
		MessageBox(NULL, (error_info + L"Заглушке переданы неправильные данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1784:
	{
		MessageBox(NULL, (error_info + L"Имеющийся буфер не подходит для указанной операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1785:
	{
		MessageBox(NULL, (error_info + L"Не удается определить тип диска. Вероятно, он не отформатирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1786:
	{
		MessageBox(NULL, (error_info + L"Рабочая станция не может участвовать в отношениях доверенности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1787:
	{
		MessageBox(NULL, (error_info + L"База данных диспетчера учетных записей на сервере не содержит записи для регистрации компьютера через доверительные отношения с этой рабочей станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1788:
	{
		MessageBox(NULL, (error_info + L"Установка отношений доверенности между основным доменом и доменом-доверителем не состоялась.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1789:
	{
		MessageBox(NULL, (error_info + L"Не удалось установить доверительные отношения между этой рабочей станцией и основным доменом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1790:
	{
		MessageBox(NULL, (error_info + L"Вход в сеть не произведен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1791:
	{
		MessageBox(NULL, (error_info + L"Удаленный вызов процедуры уже выполняется для данного потока команд.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1792:
	{
		MessageBox(NULL, (error_info + L"Попытка входа в сеть при отключенной сетевой службе входа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1793:
	{
		MessageBox(NULL, (error_info + L"Срок действия учетной записи пользователя истек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1794:
	{
		MessageBox(NULL, (error_info + L"Перенаправитель используется и не может быть выгружен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1795:
	{
		MessageBox(NULL, (error_info + L"Указанный драйвер принтера уже установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1796:
	{
		MessageBox(NULL, (error_info + L"Указанный порт не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1797:
	{
		MessageBox(NULL, (error_info + L"Неизвестный драйвер принтера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1798:
	{
		MessageBox(NULL, (error_info + L"Неизвестный процессор печати.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1799:
	{
		MessageBox(NULL, (error_info + L"Файл-разделитель задан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1800:
	{
		MessageBox(NULL, (error_info + L"Приоритет задан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1801:
	{
		MessageBox(NULL, (error_info + L"Имя принтера задано неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1802:
	{
		MessageBox(NULL, (error_info + L"Принтер уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1803:
	{
		MessageBox(NULL, (error_info + L"Неверная команда принтера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1804:
	{
		MessageBox(NULL, (error_info + L"Неверно задан тип данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1805:
	{
		MessageBox(NULL, (error_info + L"Неверно задана среда.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1806:
	{
		MessageBox(NULL, (error_info + L"Больше нет привязок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1807:
	{
		MessageBox(NULL, (error_info + L"Используется доверительная учетная запись домена. Для доступа к серверу требуется глобальная или локальная учетная запись пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1808:
	{
		MessageBox(NULL, (error_info + L"Указанное имя является именем компьютера. Для доступа к серверу воспользуйтесь глобальной или локальной учетной записью пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1809:
	{
		MessageBox(NULL, (error_info + L"Указанное имя является именем серверного траста. Для доступа к серверу воспользуйтесь глобальным или локальным именем пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1810:
	{
		MessageBox(NULL, (error_info + L"Указанное имя или идентификатор защиты (SID) домена несовместимы со сведениями, полученными о домене через отношения доверенности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1811:
	{
		MessageBox(NULL, (error_info + L"Сервер используется и не может быть выгружен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1812:
	{
		MessageBox(NULL, (error_info + L"Указанный файл образа не содержит секции ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1813:
	{
		MessageBox(NULL, (error_info + L"Указанный тип ресурса в файле образа отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1814:
	{
		MessageBox(NULL, (error_info + L"Указанное имя ресурса не найдено в файле образа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1815:
	{
		MessageBox(NULL, (error_info + L"Код языка для ресурсов в файле образа не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1816:
	{
		MessageBox(NULL, (error_info + L"Недостаточно квот для обработки команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1817:
	{
		MessageBox(NULL, (error_info + L"Ни один интерфейс не зарегистрирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1818:
	{
		MessageBox(NULL, (error_info + L"Удаленный вызов процедуры был отменен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1819:
	{
		MessageBox(NULL, (error_info + L"Дескриптор привязки не содержит всей необходимой информации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1820:
	{
		MessageBox(NULL, (error_info + L"Ошибка при обмене данными во время удаленного вызова процедуры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1821:
	{
		MessageBox(NULL, (error_info + L"Запрошенный уровень проверки подлинности не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1822:
	{
		MessageBox(NULL, (error_info + L"Ни одно основное имя не зарегистрировано.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1823:
	{
		MessageBox(NULL, (error_info + L"Указан неверный код ошибки RPC Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1824:
	{
		MessageBox(NULL, (error_info + L"Был создан идентификатор UUID, который подходит только для этого компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1825:
	{
		MessageBox(NULL, (error_info + L"Ошибка в пакете безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1826:
	{
		MessageBox(NULL, (error_info + L"Поток команд не прерван.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1827:
	{
		MessageBox(NULL, (error_info + L"Недопустимая операция для дескриптора шифрования/расшифровки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1828:
	{
		MessageBox(NULL, (error_info + L"Несовместимая версия пакета сериализации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1829:
	{
		MessageBox(NULL, (error_info + L"Несовместимая версия заглушки RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1830:
	{
		MessageBox(NULL, (error_info + L"Недопустимый или поврежденный объект канала RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1831:
	{
		MessageBox(NULL, (error_info + L"Недопустимая операция для объекта канала RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1832:
	{
		MessageBox(NULL, (error_info + L"Версия канала RPC не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1898:
	{
		MessageBox(NULL, (error_info + L"Не найден член группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1899:
	{
		MessageBox(NULL, (error_info + L"Не удалось создать элемент базы данных системы отображения конечных точек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1900:
	{
		MessageBox(NULL, (error_info + L"Универсальный уникальный идентификатор объекта (UUID) имеет пустое значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1901:
	{
		MessageBox(NULL, (error_info + L"Время задано некорректно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1902:
	{
		MessageBox(NULL, (error_info + L"Задано неправильное имя формы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1903:
	{
		MessageBox(NULL, (error_info + L"Задан неправильный размер формы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1904:
	{
		MessageBox(NULL, (error_info + L"Указанный дескриптор принтера уже ожидается —").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1905:
	{
		MessageBox(NULL, (error_info + L"Указанный принтер был удален").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1906:
	{
		MessageBox(NULL, (error_info + L"Некорректное состояние принтера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1907:
	{
		MessageBox(NULL, (error_info + L"Перед первым входом в систему пользователь должен сменить свой пароль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1908:
	{
		MessageBox(NULL, (error_info + L"Не удается найти контроллер этого домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1909:
	{
		MessageBox(NULL, (error_info + L"Учетная запись пользователя заблокирована и не может быть использована для входа в сеть.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1910:
	{
		MessageBox(NULL, (error_info + L"Не найден указанный источник экспорта объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1911:
	{
		MessageBox(NULL, (error_info + L"Указанный объект не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1912:
	{
		MessageBox(NULL, (error_info + L"Не найден указанный набор системы разрешений объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1913:
	{
		MessageBox(NULL, (error_info + L"В буфере запроса остались данные для отправки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1914:
	{
		MessageBox(NULL, (error_info + L"Недопустимый обработчик вызова удаленной асинхронной процедуры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1915:
	{
		MessageBox(NULL, (error_info + L"Недопустимый обработчик вызова асинхронной RPC для этой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1916:
	{
		MessageBox(NULL, (error_info + L"Канальный RPC-объект уже закрыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1917:
	{
		MessageBox(NULL, (error_info + L"Вызов RPC завершен до обработки всех каналов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1918:
	{
		MessageBox(NULL, (error_info + L"Больше нет доступных данных из канала RPC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1919:
	{
		MessageBox(NULL, (error_info + L"Для этого компьютера недоступно ни одного имени сайта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1920:
	{
		MessageBox(NULL, (error_info + L"Доступ к этому файлу из системы отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1921:
	{
		MessageBox(NULL, (error_info + L"Имя этого файла не может быть разрешено системой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1922:
	{
		MessageBox(NULL, (error_info + L"Этот элемент не того типа, что ожидался.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1923:
	{
		MessageBox(NULL, (error_info + L"Не все из UUID объекта могут быть экспортированы в указанный элемент.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1924:
	{
		MessageBox(NULL, (error_info + L"Невозможно экспортировать интерфейс в указанный элемент.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1925:
	{
		MessageBox(NULL, (error_info + L"Нельзя добавить указанную копию профиля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1926:
	{
		MessageBox(NULL, (error_info + L"Нельзя добавить указанный элемент копии профиля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1927:
	{
		MessageBox(NULL, (error_info + L"Нельзя удалить указанный элемент копии профиля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1928:
	{
		MessageBox(NULL, (error_info + L"Нельзя добавить элемент группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1929:
	{
		MessageBox(NULL, (error_info + L"Нельзя удалить элемент группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1930:
	{
		MessageBox(NULL, (error_info + L"Драйвер принтера несовместим с политикой, блокирующей драйверы NT 4.0.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1931:
	{
		MessageBox(NULL, (error_info + L"Срок действия контекста истек и его использование не допускается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2000:
	{
		MessageBox(NULL, (error_info + L"Неверный формат пиксела.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2001:
	{
		MessageBox(NULL, (error_info + L"Выбран неверный драйвер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2002:
	{
		MessageBox(NULL, (error_info + L"Тип или атрибут класса окна задан неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2003:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция для метафайлов не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2004:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция преобразования не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2005:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция обрезания рисунка не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2010:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый модуль управления цветом .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2011:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый цифровой профиль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2012:
	{
		MessageBox(NULL, (error_info + L"Указанный тег не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2013:
	{
		MessageBox(NULL, (error_info + L"Требуемый тег отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2014:
	{
		MessageBox(NULL, (error_info + L"Указанный тег уже присутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2015:
	{
		MessageBox(NULL, (error_info + L"Указанный цветовой профиль не сопоставлен ни с одним из устройств.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2016:
	{
		MessageBox(NULL, (error_info + L"Указанный цветовой профиль не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2017:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый цветовой профиль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2018:
	{
		MessageBox(NULL, (error_info + L"Управление цветовой палитрой изображений не включено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2019:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка при удалении преобразования цвета.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2020:
	{
		MessageBox(NULL, (error_info + L"Указано недопустимое преобразование цвета.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2021:
	{
		MessageBox(NULL, (error_info + L"Указанное преобразование не соответствует цветовой палитре точечного рисунка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2022:
	{
		MessageBox(NULL, (error_info + L"Указанное имя индекса цвета отсутствует в профиле.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2102:
	{
		MessageBox(NULL, (error_info + L"Драйвер рабочей станции не установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2103:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти сервер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2104:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка. Сеть не может получить доступ к общему сегменту памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2105:
	{
		MessageBox(NULL, (error_info + L"Недостаточно сетевых ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2106:
	{
		MessageBox(NULL, (error_info + L"Данная операция не поддерживается на рабочих станциях.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2107:
	{
		MessageBox(NULL, (error_info + L"Устройство не подключено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2108:
	{
		MessageBox(NULL, (error_info + L"Сетевое подключение осуществлено успешно, но у пользователя будет запрошен иной пароль, отличающийся от ранее введенного .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2109:
	{
		MessageBox(NULL, (error_info + L"Сетевое соединение успешно установлено с помощью реквизитов, использованных по умолчанию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2114:
	{
		MessageBox(NULL, (error_info + L"Не запущена служба сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2115:
	{
		MessageBox(NULL, (error_info + L"Очередь пуста.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2116:
	{
		MessageBox(NULL, (error_info + L"Устройство или каталог не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2117:
	{
		MessageBox(NULL, (error_info + L"Операция является незаконной для перенаправляемого ресурса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2118:
	{
		MessageBox(NULL, (error_info + L"Общий доступ к этому имени уже открыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2119:
	{
		MessageBox(NULL, (error_info + L"Запрошенный ресурс в настоящее время у сервера отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2121:
	{
		MessageBox(NULL, (error_info + L"Требуемое число добавляемых элементов превышает максимально допустимое.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2122:
	{
		MessageBox(NULL, (error_info + L"Служба одноранговой сети поддерживает только двух пользователей одновременно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2123:
	{
		MessageBox(NULL, (error_info + L"Буфер возврата API слишком мал.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2127:
	{
		MessageBox(NULL, (error_info + L"Удаленная ошибка API.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2131:
	{
		MessageBox(NULL, (error_info + L"Ошибка при открытии или чтении файла конфигурации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2136:
	{
		MessageBox(NULL, (error_info + L"Общая ошибка сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2137:
	{
		MessageBox(NULL, (error_info + L"Служба рабочей станции находится в нерабочем состоянии. Перезагрузите компьютер и снова запустите службу рабочей станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2138:
	{
		MessageBox(NULL, (error_info + L"Служба рабочей станции не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2139:
	{
		MessageBox(NULL, (error_info + L"Запрошенная информация недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2140:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка Windows 2000.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2141:
	{
		MessageBox(NULL, (error_info + L"Сервер не настроен на выполнение транзакций.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2142:
	{
		MessageBox(NULL, (error_info + L"Затребованный API не поддерживается на удаленном сервере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2143:
	{
		MessageBox(NULL, (error_info + L"Недопустимое имя события.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2144:
	{
		MessageBox(NULL, (error_info + L"Имя компьютера уже существует в сети. Измените имя и перезагрузите компьютер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2146:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти указанный компонент в сведениях о настройке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2147:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти указанный параметр в сведениях о настройке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2149:
	{
		MessageBox(NULL, (error_info + L"Слишком длинная строка в файле настройки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2150:
	{
		MessageBox(NULL, (error_info + L"Принтер не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2151:
	{
		MessageBox(NULL, (error_info + L"Задание печати не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2152:
	{
		MessageBox(NULL, (error_info + L"Адрес принтера не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2153:
	{
		MessageBox(NULL, (error_info + L"Адрес принтера уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2154:
	{
		MessageBox(NULL, (error_info + L"Очередь принтера уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2155:
	{
		MessageBox(NULL, (error_info + L"Добавление принтеров невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2156:
	{
		MessageBox(NULL, (error_info + L"Добавление заданий печати невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2157:
	{
		MessageBox(NULL, (error_info + L"Добавление адресов принтеров невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2158:
	{
		MessageBox(NULL, (error_info + L"Принтер находится в состоянии простоя и не может принимать управляющие команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2159:
	{
		MessageBox(NULL, (error_info + L"Запрос на назначение принтера содержит неправильную управляющую функцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2160:
	{
		MessageBox(NULL, (error_info + L"Обработчик заданий печати не отвечает.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2161:
	{
		MessageBox(NULL, (error_info + L"Диспетчер очереди не выполняется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2162:
	{
		MessageBox(NULL, (error_info + L"Операция не может быть выполнена при текущем состоянии принтера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2163:
	{
		MessageBox(NULL, (error_info + L"Операция не может быть выполнена при текущем состоянии очереди печати.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2164:
	{
		MessageBox(NULL, (error_info + L"Операция не может быть выполнена при текущем состоянии задания печати.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2165:
	{
		MessageBox(NULL, (error_info + L"Ошибка при выделении памяти диспетчером очереди.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2166:
	{
		MessageBox(NULL, (error_info + L"Отсутствует драйвер устройства.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2167:
	{
		MessageBox(NULL, (error_info + L"Тип данных не поддерживается обработчиком заданий печати.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2168:
	{
		MessageBox(NULL, (error_info + L"Обработчик заданий печати не установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2180:
	{
		MessageBox(NULL, (error_info + L"База данных службы заблокирована.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2181:
	{
		MessageBox(NULL, (error_info + L"Таблица службы заполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2182:
	{
		MessageBox(NULL, (error_info + L"Затребованная служба уже запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2183:
	{
		MessageBox(NULL, (error_info + L"Служба не реагирует на управляющие действия.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2184:
	{
		MessageBox(NULL, (error_info + L"Служба не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2185:
	{
		MessageBox(NULL, (error_info + L"Неправильное имя службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2186:
	{
		MessageBox(NULL, (error_info + L"Служба не реагирует на управляющие функции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2187:
	{
		MessageBox(NULL, (error_info + L"Механизм управления службой занят.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2188:
	{
		MessageBox(NULL, (error_info + L"Файл настройки содержит неправильное имя программы службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2189:
	{
		MessageBox(NULL, (error_info + L"В текущем состоянии службы управление службой невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2190:
	{
		MessageBox(NULL, (error_info + L"Нештатное завершение службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2191:
	{
		MessageBox(NULL, (error_info + L"Затребованная пауза или останов службы невозможны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2192:
	{
		MessageBox(NULL, (error_info + L"Доставщик Service Control Dispatcher не может найти имя службы в таблице доставки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2193:
	{
		MessageBox(NULL, (error_info + L"Ошибка при чтении канала доставщика Service Control Dispatcher").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2194:
	{
		MessageBox(NULL, (error_info + L"Не удалось создать поток команд для новой службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2200:
	{
		MessageBox(NULL, (error_info + L"Рабочая станция уже включена в локальную сеть.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2201:
	{
		MessageBox(NULL, (error_info + L"Рабочая станция не включена в локальную сеть.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2202:
	{
		MessageBox(NULL, (error_info + L"Имя пользователя задано неверно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2203:
	{
		MessageBox(NULL, (error_info + L"Неправильный параметр пароля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2204:
	{
		MessageBox(NULL, (error_info + L"Обработчик входа не добавил псевдоним сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2205:
	{
		MessageBox(NULL, (error_info + L"Обработчик входа не добавил псевдоним сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2206:
	{
		MessageBox(NULL, (error_info + L"Обработчик выхода не удалил псевдоним сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2207:
	{
		MessageBox(NULL, (error_info + L"Обработчик выхода не удалил псевдоним сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2209:
	{
		MessageBox(NULL, (error_info + L"Входы в сеть приостановлены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2210:
	{
		MessageBox(NULL, (error_info + L"Конфликт на сервере, производящем регистрацию в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2211:
	{
		MessageBox(NULL, (error_info + L"При настройке сервера не указан допустимый путь пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2212:
	{
		MessageBox(NULL, (error_info + L"Ошибка при загрузке или обработке сценария входа в систему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2214:
	{
		MessageBox(NULL, (error_info + L"Не указан сервер для обработки входа в сеть. Компьютер будет зарегистрирован как изолированный (STANDALONE).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2215:
	{
		MessageBox(NULL, (error_info + L"Не найден сервер для проверки пароля входа в сеть.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2216:
	{
		MessageBox(NULL, (error_info + L"Домен для входа компьютера в сеть уже выбран.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2217:
	{
		MessageBox(NULL, (error_info + L"Сервер не может опознать пароль входа в сеть.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2219:
	{
		MessageBox(NULL, (error_info + L"Не найдена база данных защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2220:
	{
		MessageBox(NULL, (error_info + L"Не найдено имя группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2221:
	{
		MessageBox(NULL, (error_info + L"Не найдено имя пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2222:
	{
		MessageBox(NULL, (error_info + L"Не найдено имя ресурса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2223:
	{
		MessageBox(NULL, (error_info + L"Группа уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2224:
	{
		MessageBox(NULL, (error_info + L"Учетная запись уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2225:
	{
		MessageBox(NULL, (error_info + L"Список разрешений для ресурса уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2226:
	{
		MessageBox(NULL, (error_info + L"Данная операция разрешена только для основного контроллера домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2227:
	{
		MessageBox(NULL, (error_info + L"База данных защиты не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2228:
	{
		MessageBox(NULL, (error_info + L"База данных учетных записей пользователей содержит слишком много имен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2229:
	{
		MessageBox(NULL, (error_info + L"Ошибка ввода/вывода для диска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2230:
	{
		MessageBox(NULL, (error_info + L"Превышен предел 64 элементов на один ресурс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2231:
	{
		MessageBox(NULL, (error_info + L"Удаления пользователя с сеансом не допускается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2232:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти родительский каталог").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2233:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить добавление в сегмент буфера сеанса базы данных защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2234:
	{
		MessageBox(NULL, (error_info + L"Эта операция не разрешена для данной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2235:
	{
		MessageBox(NULL, (error_info + L"Данный пользователь не помещен в буфера сеанса базы данных учетных записей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2236:
	{
		MessageBox(NULL, (error_info + L"Пользователь уже включен в данную группу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2237:
	{
		MessageBox(NULL, (error_info + L"Пользователь не включен в данную группу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2238:
	{
		MessageBox(NULL, (error_info + L"Учетная запись пользователя не определена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2239:
	{
		MessageBox(NULL, (error_info + L"Срок действия учетной записи пользователя истек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2240:
	{
		MessageBox(NULL, (error_info + L"Не разрешен вход пользователя с данной рабочей станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2241:
	{
		MessageBox(NULL, (error_info + L"Не разрешен вход пользователя в данное время.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2242:
	{
		MessageBox(NULL, (error_info + L"Пароль данного пользователя просрочен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2243:
	{
		MessageBox(NULL, (error_info + L"Нельзя изменить пароль данного пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2244:
	{
		MessageBox(NULL, (error_info + L"Этот пароль сейчас не действует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2245:
	{
		MessageBox(NULL, (error_info + L"Пароль не отвечает требованиям политики. Проверьте минимальную длину пароля, его сложность, отличие от ранее использованных паролей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2246:
	{
		MessageBox(NULL, (error_info + L"Пароль данного пользователя был установлен недавно и его нельзя изменить.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2247:
	{
		MessageBox(NULL, (error_info + L"База данных защиты повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2248:
	{
		MessageBox(NULL, (error_info + L"Данная реплицированная сетевая/локальная база данных защиты не требует обновления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2249:
	{
		MessageBox(NULL, (error_info + L"Реплицированная база данных устарела; требуется синхронизация.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2250:
	{
		MessageBox(NULL, (error_info + L"Сетевое подключение не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2251:
	{
		MessageBox(NULL, (error_info + L"Неправильный тип asg_type.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2252:
	{
		MessageBox(NULL, (error_info + L"Данное устройство сейчас является общим.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2270:
	{
		MessageBox(NULL, (error_info + L"Нельзя вводить имя компьютера как псевдоним сообщений. Имя может уже использоваться в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2271:
	{
		MessageBox(NULL, (error_info + L"Служба сообщений уже запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2272:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске службы сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2273:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти псевдоним сообщений в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2274:
	{
		MessageBox(NULL, (error_info + L"Псевдоним сообщений уже был направлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2275:
	{
		MessageBox(NULL, (error_info + L"Псевдоним сообщений уже добавлен, но ждет направления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2276:
	{
		MessageBox(NULL, (error_info + L"Псевдоним сообщений уже существует на локальном уровне.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2277:
	{
		MessageBox(NULL, (error_info + L"Превышено максимальное число добавленных псевдонимов сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2278:
	{
		MessageBox(NULL, (error_info + L"Нельзя удалять имя компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2279:
	{
		MessageBox(NULL, (error_info + L"Нельзя направлять сообщения на исходную рабочую станцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2280:
	{
		MessageBox(NULL, (error_info + L"Ошибка в обработчике сообщений домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2281:
	{
		MessageBox(NULL, (error_info + L"Сообщение отослано, но адресат временно отключил службу сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2282:
	{
		MessageBox(NULL, (error_info + L"Сообщение отослано, но не принято.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2283:
	{
		MessageBox(NULL, (error_info + L"Псевдоним сообщений занят. Повторите попытку позже.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2284:
	{
		MessageBox(NULL, (error_info + L"Служба сообщений не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2285:
	{
		MessageBox(NULL, (error_info + L"Имя не находится на локальном компьютере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2286:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти в сети псевдоним направленного сообщения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2287:
	{
		MessageBox(NULL, (error_info + L"Таблица псевдонимов сообщений на удаленной станции заполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2288:
	{
		MessageBox(NULL, (error_info + L"Сообщения с данным псевдонимом в настоящее время не направляются.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2289:
	{
		MessageBox(NULL, (error_info + L"Переданное широковещательное сообщение усечено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2294:
	{
		MessageBox(NULL, (error_info + L"Неправильное имя устройства.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2295:
	{
		MessageBox(NULL, (error_info + L"Ошибка при записи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2297:
	{
		MessageBox(NULL, (error_info + L"В сети существует повторяющийся псевдоним сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2298:
	{
		MessageBox(NULL, (error_info + L"Данный псевдоним сообщений будет удален позже.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2299:
	{
		MessageBox(NULL, (error_info + L"Псевдоним сообщений не был успешно удален из всех сетей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2300:
	{
		MessageBox(NULL, (error_info + L"Данная операция не поддерживается для компьютеров, работающих с несколькими сетями.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2310:
	{
		MessageBox(NULL, (error_info + L"Этот общий ресурс не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2311:
	{
		MessageBox(NULL, (error_info + L"К этому устройству общий доступ отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2312:
	{
		MessageBox(NULL, (error_info + L"Сеанс с данным именем компьютера не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2314:
	{
		MessageBox(NULL, (error_info + L"Нет открытого файла с данным идентификационным номером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2315:
	{
		MessageBox(NULL, (error_info + L"Сбой при выполнении удаленной административной команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2316:
	{
		MessageBox(NULL, (error_info + L"Сбой при открытии удаленного временного файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2317:
	{
		MessageBox(NULL, (error_info + L"Данные, возвращаемые удаленной административной командой, были усечены до 64 К.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2318:
	{
		MessageBox(NULL, (error_info + L"Нельзя одновременно определить устройство как общий ресурс с очередью и без.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2319:
	{
		MessageBox(NULL, (error_info + L"Сведения в списке серверов могут быть неточными.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2320:
	{
		MessageBox(NULL, (error_info + L"Компьютер не активизирован в данном домене.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2321:
	{
		MessageBox(NULL, (error_info + L"Перед удалением общий ресурс необходимо вывести из распределенной файловой системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2331:
	{
		MessageBox(NULL, (error_info + L"Недопустимая операция для данного устройства.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2332:
	{
		MessageBox(NULL, (error_info + L"Это устройство нельзя сделать общим.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2333:
	{
		MessageBox(NULL, (error_info + L"Это устройство не было открыто.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2334:
	{
		MessageBox(NULL, (error_info + L"Неправильный список имен устройств.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2335:
	{
		MessageBox(NULL, (error_info + L"Неправильный приоритет в очереди.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2337:
	{
		MessageBox(NULL, (error_info + L"Отсутствуют общие устройства связи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2338:
	{
		MessageBox(NULL, (error_info + L"Указанная очередь не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2340:
	{
		MessageBox(NULL, (error_info + L"Неправильный список устройств.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2341:
	{
		MessageBox(NULL, (error_info + L"Затребовано неправильное устройство.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2342:
	{
		MessageBox(NULL, (error_info + L"Это устройство уже используется диспетчером очереди.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2343:
	{
		MessageBox(NULL, (error_info + L"Это устройство уже используется как устройство связи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2351:
	{
		MessageBox(NULL, (error_info + L"Неправильное имя компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2354:
	{
		MessageBox(NULL, (error_info + L"Указаны слишком длинные строка и префикс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2356:
	{
		MessageBox(NULL, (error_info + L"Недопустимый компонент пути.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2357:
	{
		MessageBox(NULL, (error_info + L"Не удалось определить тип ввода.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2362:
	{
		MessageBox(NULL, (error_info + L"Буфер для типов недостаточно велик.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2370:
	{
		MessageBox(NULL, (error_info + L"Размер файлов конфигурации не может превышать 64 К.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2371:
	{
		MessageBox(NULL, (error_info + L"Смещение начальной инструкции вне допустимого диапазона.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2372:
	{
		MessageBox(NULL, (error_info + L"Система не может удалить текущие подключения к сетевым ресурсам.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2373:
	{
		MessageBox(NULL, (error_info + L"Система не может обработать командную строку в данном файле.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2374:
	{
		MessageBox(NULL, (error_info + L"Ошибка при загрузке файла конфигурации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2375:
	{
		MessageBox(NULL, (error_info + L"Ошибка при сохранении файла конфигурации. Конфигурация сохранена частично.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2377:
	{
		MessageBox(NULL, (error_info + L"Файл журнала %1 заполнен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2378:
	{
		MessageBox(NULL, (error_info + L"Файл журнала был изменен в интервале между двумя операциями чтения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2379:
	{
		MessageBox(NULL, (error_info + L"Файл журнала %1 поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2380:
	{
		MessageBox(NULL, (error_info + L"Нельзя задавать каталог как исходный путь.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2381:
	{
		MessageBox(NULL, (error_info + L"Неправильный исходный путь.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2382:
	{
		MessageBox(NULL, (error_info + L"Неправильный путь назначения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2383:
	{
		MessageBox(NULL, (error_info + L"Исходный путь и путь назначения находятся на разных серверах.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2385:
	{
		MessageBox(NULL, (error_info + L"Затребованный сервер выполнения не активен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2389:
	{
		MessageBox(NULL, (error_info + L"Ошибка при связи с сервером выполнения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2391:
	{
		MessageBox(NULL, (error_info + L"Ошибка при запуске фонового процесса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2392:
	{
		MessageBox(NULL, (error_info + L"Не найден подключенный общий ресурс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2400:
	{
		MessageBox(NULL, (error_info + L"Недопустимый номер сетевой платы локальной сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2401:
	{
		MessageBox(NULL, (error_info + L"На подключенном устройстве имеются открытые файлы или запросы, ждущие обработки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2402:
	{
		MessageBox(NULL, (error_info + L"Некоторые подключения все еще активны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2403:
	{
		MessageBox(NULL, (error_info + L"Неправильное сетевое имя или пароль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2404:
	{
		MessageBox(NULL, (error_info + L"Устройство используется одним из активных процессов и не может быть отключено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2405:
	{
		MessageBox(NULL, (error_info + L"Эта буква диска уже используется на локальном уровне.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2430:
	{
		MessageBox(NULL, (error_info + L"Указанный клиент уже зарегистрирован для данного события.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2431:
	{
		MessageBox(NULL, (error_info + L"Таблица предупреждений заполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2432:
	{
		MessageBox(NULL, (error_info + L"Использовано недопустимое или не существующее имя предупреждения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2433:
	{
		MessageBox(NULL, (error_info + L"Неправильный получатель предупреждения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2434:
	{
		MessageBox(NULL, (error_info + L"Сеанс пользователя с данным сервером был удален,так как часы входа пользователя стали недействительными.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2440:
	{
		MessageBox(NULL, (error_info + L"Файл журнала не содержит запись с указанным номером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2450:
	{
		MessageBox(NULL, (error_info + L"Неправильная конфигурация базы данных учетных записей пользователей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2451:
	{
		MessageBox(NULL, (error_info + L"Данная операция не разрешена во время выполнения службы Netlogon.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2452:
	{
		MessageBox(NULL, (error_info + L"Данную операцию нельзя выполнять над последней учетной записью администратора.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2453:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти контроллер домена для данного домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2454:
	{
		MessageBox(NULL, (error_info + L"Не удалось задать сведения о входе для данного пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2455:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2456:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить добавление в базу данных учетных записей пользователей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2457:
	{
		MessageBox(NULL, (error_info + L"Часы данного сервера не синхронизованы с часами основного контроллера домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2458:
	{
		MessageBox(NULL, (error_info + L"Обнаружено несоответствие паролей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2460:
	{
		MessageBox(NULL, (error_info + L"Идентификация сервера не определяет допустимый сервер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2461:
	{
		MessageBox(NULL, (error_info + L"Идентификация сеанса не определяет допустимый сеанс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2462:
	{
		MessageBox(NULL, (error_info + L"Идентификация подключения не определяет допустимое подключение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2463:
	{
		MessageBox(NULL, (error_info + L"В таблице доступных серверов нет места для добавления записей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2464:
	{
		MessageBox(NULL, (error_info + L"Для сервера достигнуто максимально возможное число активных сеансов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2465:
	{
		MessageBox(NULL, (error_info + L"Для сервера достигнуто максимально возможное число подключений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2466:
	{
		MessageBox(NULL, (error_info + L"Для сервера достигнуто максимально возможное число открытых файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2467:
	{
		MessageBox(NULL, (error_info + L"Для данного сервера не зарегистрированы альтернативные серверы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2470:
	{
		MessageBox(NULL, (error_info + L"Попробуйте использовать версию API нижнего уровня (удаленный административный протокол).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2480:
	{
		MessageBox(NULL, (error_info + L"Служба UPS не может получить доступ к драйверу UPS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2481:
	{
		MessageBox(NULL, (error_info + L"Неправильная конфигурация службы UPS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2482:
	{
		MessageBox(NULL, (error_info + L"Служба UPS не может получить доступ к последовательному порту.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2483:
	{
		MessageBox(NULL, (error_info + L"UPS указывает обрыв на линии или недостаточную зарядку аккумуляторов. Служба не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2484:
	{
		MessageBox(NULL, (error_info + L"Служба UPS не смогла выполнить отключение системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2500:
	{
		MessageBox(NULL, (error_info + L"Следующая программа возвращает код ошибки MS-DOS:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2501:
	{
		MessageBox(NULL, (error_info + L"Для следующей программы требуется больше памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2502:
	{
		MessageBox(NULL, (error_info + L"Следующая программа вызывает не поддерживаемую функцию MS-DOS:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2503:
	{
		MessageBox(NULL, (error_info + L"Сбой при загрузке рабочей станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2504:
	{
		MessageBox(NULL, (error_info + L"Следующий файл поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2505:
	{
		MessageBox(NULL, (error_info + L"В файле, определяющем блок загрузки, не указан загрузчик.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2506:
	{
		MessageBox(NULL, (error_info + L"NetBIOS возвращает ошибку: Выполнено копирование блоков NCB и SMB.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2507:
	{
		MessageBox(NULL, (error_info + L"Ошибка ввода/вывода для диска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2508:
	{
		MessageBox(NULL, (error_info + L"Сбой при подстановке параметра изображения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2509:
	{
		MessageBox(NULL, (error_info + L"Слишком большое число параметров изображения привело к выходу за границы диска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2510:
	{
		MessageBox(NULL, (error_info + L"Изображение не было создано с дискеты MS-DOS, отформатированной с ключом /S.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2511:
	{
		MessageBox(NULL, (error_info + L"Загрузка с сервера будет возобновлена позже.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2512:
	{
		MessageBox(NULL, (error_info + L"Сбой при вызове сервера загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2513:
	{
		MessageBox(NULL, (error_info + L"Не удалось подключиться к серверу загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2514:
	{
		MessageBox(NULL, (error_info + L"Не удалось открыть файл изображения на сервере загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2515:
	{
		MessageBox(NULL, (error_info + L"Выполняется подключение к серверу загрузки…").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2516:
	{
		MessageBox(NULL, (error_info + L"Выполняется подключение к серверу загрузки…").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2517:
	{
		MessageBox(NULL, (error_info + L"Служба загрузки с сервера остановлена; проверьте причину по журналу ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2518:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске загрузки с сервера; проверьте причину по журналу ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2519:
	{
		MessageBox(NULL, (error_info + L"Второе подключение к ресурсу удаленной загрузки не допускается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2550:
	{
		MessageBox(NULL, (error_info + L"Для службы поиска задана конфигурация с параметром MaintainServerList=No.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2610:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске службы, поскольку не была запущена ни одна из сетевых плат.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2611:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске службы из-за неправильной информации о запуске в реестре.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2612:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске службы, так как ее база данных отсутствует или повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2613:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске службы из-за отсутствия общего ресурса RPLFILES.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2614:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске службы из-за отсутствия группы RPLUSER.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2615:
	{
		MessageBox(NULL, (error_info + L"Не удалось перечислить записи службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2616:
	{
		MessageBox(NULL, (error_info + L"Запись рабочей станции повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2617:
	{
		MessageBox(NULL, (error_info + L"Запись рабочей станции не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2618:
	{
		MessageBox(NULL, (error_info + L"Имя рабочей станции используется другой рабочей станцией.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2619:
	{
		MessageBox(NULL, (error_info + L"Запись конфигурации повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2620:
	{
		MessageBox(NULL, (error_info + L"Запись конфигурации не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2621:
	{
		MessageBox(NULL, (error_info + L"Имя конфигурации используется другой конфигурацией.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2622:
	{
		MessageBox(NULL, (error_info + L"Имеются рабочие станции, использующие данную конфигурацию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2623:
	{
		MessageBox(NULL, (error_info + L"Повреждение данных в записи настройки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2624:
	{
		MessageBox(NULL, (error_info + L"Запись настройки не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2625:
	{
		MessageBox(NULL, (error_info + L"Повреждение данных в записи идентификатора платы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2626:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2627:
	{
		MessageBox(NULL, (error_info + L"Запись с кодом поставщика повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2628:
	{
		MessageBox(NULL, (error_info + L"Запись блока загрузки повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2629:
	{
		MessageBox(NULL, (error_info + L"Для данной записи рабочей станции нет учетной записи пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2630:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти локальную группу RPLUSER.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2631:
	{
		MessageBox(NULL, (error_info + L"Не найдена запись блока загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2632:
	{
		MessageBox(NULL, (error_info + L"Выбранная конфигурация несовместима с данной рабочей станцией.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2633:
	{
		MessageBox(NULL, (error_info + L"Выбранный идентификатор сетевой платы используется другой рабочей станцией.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2634:
	{
		MessageBox(NULL, (error_info + L"Существуют конфигурации, использующие данную настройку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2635:
	{
		MessageBox(NULL, (error_info + L"Существуют рабочие станции, конфигурации или настройки, использующие данный блок загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2636:
	{
		MessageBox(NULL, (error_info + L"Служба не смогла выполнить резервирование базы данных удаленной загрузки с сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2637:
	{
		MessageBox(NULL, (error_info + L"Запись адаптера не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2638:
	{
		MessageBox(NULL, (error_info + L"Запись поставщика не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2639:
	{
		MessageBox(NULL, (error_info + L"Имя поставщика используется в другой записи поставщика.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2640:
	{
		MessageBox(NULL, (error_info + L"(имя загрузки, код поставщика) используется в другой записи блока загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2641:
	{
		MessageBox(NULL, (error_info + L"Имя конфигурации уже используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2660:
	{
		MessageBox(NULL, (error_info + L"Внутренняя база данных службы распределенной файловой системы DFS повреждена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2661:
	{
		MessageBox(NULL, (error_info + L"Одна из записей внутренней базы данных службы DFS повреждена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2662:
	{
		MessageBox(NULL, (error_info + L"Указанному пути входа не соответствует ни одного DFS-имени").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2663:
	{
		MessageBox(NULL, (error_info + L"Корень или ссылка с указанным именем уже существует").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2664:
	{
		MessageBox(NULL, (error_info + L"Указанный общий ресурс сервера уже включен в распределенную файловую систему DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2665:
	{
		MessageBox(NULL, (error_info + L"Указанный общий ресурс сервера не поддерживает указанное пространство имен DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2666:
	{
		MessageBox(NULL, (error_info + L"Эта операция не применима в этой части пространства имен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2667:
	{
		MessageBox(NULL, (error_info + L"Эта операция не применима в этой части пространства имен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2668:
	{
		MessageBox(NULL, (error_info + L"Операция неоднозначна, так как для этой ссылки имеется несколько серверов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2669:
	{
		MessageBox(NULL, (error_info + L"Не удалось создать ссылку").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2670:
	{
		MessageBox(NULL, (error_info + L"Сервер не поддерживает распределенную файловую систему DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2671:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый конечный путь для переименования").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2672:
	{
		MessageBox(NULL, (error_info + L"Указанная ссылка DFS отключена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2673:
	{
		MessageBox(NULL, (error_info + L"Выбранный сервер не является сервером для данной ссылки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2674:
	{
		MessageBox(NULL, (error_info + L"Обнаружена циклическая ссылка в имени DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2675:
	{
		MessageBox(NULL, (error_info + L"Операция не поддерживается для распределенной файловой системы DFS на сервере").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2676:
	{
		MessageBox(NULL, (error_info + L"Эта ссылка уже поддерживается указанным сервером-ресурсом").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2677:
	{
		MessageBox(NULL, (error_info + L"Невозможно удалить последний сервер-ресурс, поддерживающий этот корень или ссылку").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2678:
	{
		MessageBox(NULL, (error_info + L"Эта операция не поддерживается для ссылок между DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2679:
	{
		MessageBox(NULL, (error_info + L"Внутреннее состояние службы DFS стало противоречивым").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2680:
	{
		MessageBox(NULL, (error_info + L"Служба DFS установлена на указанном сервере").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2681:
	{
		MessageBox(NULL, (error_info + L"Данные DFS, для которых выполняется согласование, идентичны").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2682:
	{
		MessageBox(NULL, (error_info + L"Корень DFS не может быть удален — требуется отмена установки DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2683:
	{
		MessageBox(NULL, (error_info + L"Дочерняя или родительская папка этого общего ресурса уже содержится в DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2690:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка распределенной файловой системы DFS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2691:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер уже присоединен к домену.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2692:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер в данный момент не присоединен к домену.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2693:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер является контроллером домена и не может быть исключен из домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2694:
	{
		MessageBox(NULL, (error_info + L"Конечный контроллер домена не поддерживает создания учетных записей компьютеров в подразделениях.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2695:
	{
		MessageBox(NULL, (error_info + L"Указанное имя рабочей группы недопустимо.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2696:
	{
		MessageBox(NULL, (error_info + L"Указанное имя компьютера несовместимо с языком системы, используемым контроллером домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2697:
	{
		MessageBox(NULL, (error_info + L"Указанная учетная запись компьютера не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2698:
	{
		MessageBox(NULL, (error_info + L"Компьютер с этой версией Windows не может быть присоединен к домену.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2999:
	{
		MessageBox(NULL, (error_info + L"Это последняя ошибка в диапазоне NERR.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3000:
	{
		MessageBox(NULL, (error_info + L"Указан неизвестный монитор печати.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3001:
	{
		MessageBox(NULL, (error_info + L"Указанный драйвер принтера занят.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3002:
	{
		MessageBox(NULL, (error_info + L"Не найден файл диспетчера очереди.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3003:
	{
		MessageBox(NULL, (error_info + L"Не был произведен вызов StartDocPrinter.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3004:
	{
		MessageBox(NULL, (error_info + L"Не был произведен вызов AddJob.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3005:
	{
		MessageBox(NULL, (error_info + L"Указанный процессор печати уже установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3006:
	{
		MessageBox(NULL, (error_info + L"Указанный монитор печати уже установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3007:
	{
		MessageBox(NULL, (error_info + L"Указанный монитор печати не имеет требуемых функций.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3008:
	{
		MessageBox(NULL, (error_info + L"Указанный монитор печати сейчас уже используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3009:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция не разрешена, если другие задания ждут очереди на печать.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3010:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция выполнена успешно. Чтобы сделанные изменения вступили в силу, следует перезагрузить систему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3011:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция выполнена успешно. Чтобы сделанные изменения вступили в силу, следует перезагрузить компьютер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3012:
	{
		MessageBox(NULL, (error_info + L"Не найдено ни одного принтера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3013:
	{
		MessageBox(NULL, (error_info + L"Есть сведения о ненадежности работы драйвера принтера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3014:
	{
		MessageBox(NULL, (error_info + L"Есть сведения о вреде, который наносит системе работа драйвера принтера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3020:
	{
		MessageBox(NULL, (error_info + L"Сбой питания для %1. Работа сервера приостановлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3021:
	{
		MessageBox(NULL, (error_info + L"Восстановлено питание для %1. Работа сервера возобновлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3022:
	{
		MessageBox(NULL, (error_info + L"Служба бесперебойного питания начала отключение %1 из-за разрядки аккумуляторов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3023:
	{
		MessageBox(NULL, (error_info + L"Имеется проблема с настройкой указанного пользователемкомандного файла отключения. Тем не менее, служба UPS запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3025:
	{
		MessageBox(NULL, (error_info + L"Поврежденный сектор на диске %1 заменен (восстановлен).Данные не потеряны. Необходимо срочно выполнить CHKDSK для полноговосстановления быстродействия и пополнения банка запасных секторов для тома.Восстановление выполнено при обработке удаленного запроса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3026:
	{
		MessageBox(NULL, (error_info + L"Ошибка на диске для тома HPFS на диске %1.Ошибка возникла при обработке удаленного запроса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3027:
	{
		MessageBox(NULL, (error_info + L"База данных учетных записей пользователей (NET.ACC) повреждена.Локальная система защиты заменяет базу данных NET.ACC на резервнуюкопию, сохраненную на %1 в %2.Любые обновления базы данных после этого времени потеряны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3028:
	{
		MessageBox(NULL, (error_info + L"База данных учетных записей пользователей (NET.ACC) отсутствует.Локальная система защиты восстанавливает резервную базу данных,сохраненную на %1 в %2.Любые обновления базы данных после этого времени потеряны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3029:
	{
		MessageBox(NULL, (error_info + L"Невозможно запустить локальную систему защиты, так как база данныхучетных записей пользователей (NET.ACC) отсутствует или повреждена и нетгодной для использования резервной базы данных.СИСТЕМА НЕ ЗАЩИЩЕНА.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3030:
	{
		MessageBox(NULL, (error_info + L"Сервер не может экспортировать каталог %1 клиенту %2.Каталог экспортируется с другого сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3031:
	{
		MessageBox(NULL, (error_info + L"Сервер репликации не может обновить каталог %2 по источникуна %3 из-за ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3032:
	{
		MessageBox(NULL, (error_info + L"Основная реплика %1 не посылала для каталога %2 уведомленияоб обновлении в ожидаемое время.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3033:
	{
		MessageBox(NULL, (error_info + L"Пользователь %1 превысил ограничение учетной записи %2 на сервере %3.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3034:
	{
		MessageBox(NULL, (error_info + L"Сбой основного контроллера домена для домена %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3035:
	{
		MessageBox(NULL, (error_info + L"Сбой при проверке имени на %2, контроллере домена Windows NT или Windows 2000для домена %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3036:
	{
		MessageBox(NULL, (error_info + L"Сбой при попытке регистрации службы репликации на %2 как %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3037:
	{
		MessageBox(NULL, (error_info + L"@I *ЧАСЫ ВХОДА").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3038:
	{
		MessageBox(NULL, (error_info + L"Служба репликации не может получить доступ к %2на %3 из-за системной ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3039:
	{
		MessageBox(NULL, (error_info + L"Превышен предел службы репликации на число файлов в каталоге.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3040:
	{
		MessageBox(NULL, (error_info + L"Превышен предел службы репликации на глубину дерева.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3041:
	{
		MessageBox(NULL, (error_info + L"Служба репликации не может обновить каталог %1. Он имеетусловие целостности дерева и является текущим для процесса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3042:
	{
		MessageBox(NULL, (error_info + L"Сетевая ошибка %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3045:
	{
		MessageBox(NULL, (error_info + L"Системная ошибка %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3046:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить вход. Пользователь уже вошели аргумент TRYUSER имеет значение NO.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3047:
	{
		MessageBox(NULL, (error_info + L"Путь импорта %1 не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3048:
	{
		MessageBox(NULL, (error_info + L"Путь экспорта %1 не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3049:
	{
		MessageBox(NULL, (error_info + L"Реплицированные данные изменены в каталоге %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3050:
	{
		MessageBox(NULL, (error_info + L"Служба репликации не может обновить сигнальный файл в каталоге %2из-за системной ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3051:
	{
		MessageBox(NULL, (error_info + L"Реестр или введенные данные содержат недопустимоезначение для «%1».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3052:
	{
		MessageBox(NULL, (error_info + L"Требуемый параметр не был задан в команднойстроке или в файле настройки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3053:
	{
		MessageBox(NULL, (error_info + L"Диспетчер LAN не распознает «%1» как допустимый параметр.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3054:
	{
		MessageBox(NULL, (error_info + L"Невозможно удовлетворить запрос на ресурсы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3055:
	{
		MessageBox(NULL, (error_info + L"Проблема с системной настройкой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3056:
	{
		MessageBox(NULL, (error_info + L"Системная ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3057:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка согласования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3058:
	{
		MessageBox(NULL, (error_info + L"Неизвестный параметр в файле настройки или в командной строке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3059:
	{
		MessageBox(NULL, (error_info + L"Повторяющийся параметр в файле настройки или в командной строке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3060:
	{
		MessageBox(NULL, (error_info + L"Служба не реагирует на команды управления и остановленас помощью функции DosKillProc.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3061:
	{
		MessageBox(NULL, (error_info + L"Ошибка при попытке запуска программы службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3062:
	{
		MessageBox(NULL, (error_info + L"Сбой при запуске подчиненной службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3063:
	{
		MessageBox(NULL, (error_info + L"Конфликт в значениях или при использовании параметров: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3064:
	{
		MessageBox(NULL, (error_info + L"Проблемы с файлом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3070:
	{
		MessageBox(NULL, (error_info + L"память").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3071:
	{
		MessageBox(NULL, (error_info + L"место на диске").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3072:
	{
		MessageBox(NULL, (error_info + L"поток").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3073:
	{
		MessageBox(NULL, (error_info + L"процесс").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3074:
	{
		MessageBox(NULL, (error_info + L"Ошибка безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3075:
	{
		MessageBox(NULL, (error_info + L"Неправильный или отсутствующий корневой каталог диспетчера LAN.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3076:
	{
		MessageBox(NULL, (error_info + L"Сетевое программное обеспечение не установлено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3077:
	{
		MessageBox(NULL, (error_info + L"Сервер не запущен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3078:
	{
		MessageBox(NULL, (error_info + L"Нет доступа с сервера к базе данных учетных записей (NET.ACC).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3079:
	{
		MessageBox(NULL, (error_info + L"В дереве LANMAN установлены несовместимые файлы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3080:
	{
		MessageBox(NULL, (error_info + L"Неправильный каталог LANMAN\\LOGS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3081:
	{
		MessageBox(NULL, (error_info + L"Невозможно использовать указанный домен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3082:
	{
		MessageBox(NULL, (error_info + L"Имя компьютера используется как псевдоним сообщений на другом компьютере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3083:
	{
		MessageBox(NULL, (error_info + L"Сбой при объявлении имени сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3084:
	{
		MessageBox(NULL, (error_info + L"Неправильная конфигурация базы данных учетных записей пользователей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3085:
	{
		MessageBox(NULL, (error_info + L"Сервер не запущен с защитой на уровне пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3087:
	{
		MessageBox(NULL, (error_info + L"Неправильная конфигурация рабочей станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3088:
	{
		MessageBox(NULL, (error_info + L"Подробности см. в журнале ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3089:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить запись в файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3090:
	{
		MessageBox(NULL, (error_info + L"Файл ADDPAK поврежден. Удалите LANMAN\\NETPROG\\ADDPAK.SERи вновь примените все ADDPAK.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3091:
	{
		MessageBox(NULL, (error_info + L"Невозможно запустить сервер LM386, так как не выполняется программа CACHE.EXE.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3092:
	{
		MessageBox(NULL, (error_info + L"Нет записи для данного компьютера в базе данных защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3093:
	{
		MessageBox(NULL, (error_info + L"Данный компьютер не является членом группы SERVERS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3094:
	{
		MessageBox(NULL, (error_info + L"В базе данных локальной защиты нет группы SERVERS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3095:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер является членом рабочей группы, а не домена. В данном случае нет необходимости запускать службу Netlogon.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3096:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти основной контроллер домена для данного домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3097:
	{
		MessageBox(NULL, (error_info + L"Основной контроллер домена уже выполняется в данном домене.Тем не менее, компьютер %1выдал требование на роль основного контроллера доме в данном домене.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3098:
	{
		MessageBox(NULL, (error_info + L"Служба не смогла выполнить проверку имени на основном контроллере домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3099:
	{
		MessageBox(NULL, (error_info + L"Ошибочные дата создания или серийный номер базы данных защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3100:
	{
		MessageBox(NULL, (error_info + L"Сбой в операции из-за ошибки сетевой программы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3101:
	{
		MessageBox(NULL, (error_info + L"В системе исчерпан ресурс, управляемый параметром %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3102:
	{
		MessageBox(NULL, (error_info + L"Служба не может наложить долговременную блокировку на сегментсетевых управляющих блоков (NCB). Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3103:
	{
		MessageBox(NULL, (error_info + L"Служба не может снять долговременную блокировку сегментасетевых управляющих блоков (NCB). Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3104:
	{
		MessageBox(NULL, (error_info + L"Ошибка при остановке службы %1.Данные содержат код ошибки от NetServiceControl.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3105:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации из-за ошибки при выполнении системы на пути%1. Данные содержат код системной ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3106:
	{
		MessageBox(NULL, (error_info + L"Принят неизвестный сетевой управляющий блок (NCB). Данные содержат NCB.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3107:
	{
		MessageBox(NULL, (error_info + L"Сеть не запущена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3108:
	{
		MessageBox(NULL, (error_info + L"Сбой при обращении DosDevIoctl или DosFsCtl к NETWKSTA.SYS.Данные представлены в следующем формате:DWORD ~ CS:IP вызова ioctl или fsctlWORD код ошибкиWORD номер ioctl или fsctl").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3109:
	{
		MessageBox(NULL, (error_info + L"Не удалось создать или открыть системный семафор %1.Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3110:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации из-за ошибки при открытии/созданиифайла %1. Код системной ошибки представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3111:
	{
		MessageBox(NULL, (error_info + L"Неизвестная ошибка NetBIOS.Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3112:
	{
		MessageBox(NULL, (error_info + L"Принят неправильный блок сообщений сервера (SMB).Данные содержат SMB.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3113:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации, так как затребованную службу %1запустить невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3114:
	{
		MessageBox(NULL, (error_info + L"Некоторые элементы в журнале ошибок были потеряныиз-за переполнения буфера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3120:
	{
		MessageBox(NULL, (error_info + L"Параметры инициализации, управляющие использованием всех ресурсов,кроме буферов сети, имеют размеры, требующие слишком много памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3121:
	{
		MessageBox(NULL, (error_info + L"Сервер не может увеличить размер сегмента памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3122:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации, так как файл учетных записей %1 не веренили отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3123:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации, так как сеть %1 не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3124:
	{
		MessageBox(NULL, (error_info + L"Сервер не запустился. Все три параметра chdevдолжны одновременно иметь нулевое или ненулевое значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3125:
	{
		MessageBox(NULL, (error_info + L"Удаленный запрос API остановлен из-за следующейнеправильной строки описания: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3126:
	{
		MessageBox(NULL, (error_info + L"В сети %1 исчерпаны сетевые управляющие блоки (NCB). Требуется увеличить число NCBдля этой сети. Следующие сведения включаютчисло NCB, представленных сервером при возникновении данной ошибки:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3127:
	{
		MessageBox(NULL, (error_info + L"Сервер не может создать слот сообщений %1, требуемый для отправкиоповещения ReleaseMemory. Принята ошибка:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3128:
	{
		MessageBox(NULL, (error_info + L"Сервер не смог зарегистрировать оповещение ReleaseMemoryс получателем %1. Данные содержаткод ошибки от NetAlertStart.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3129:
	{
		MessageBox(NULL, (error_info + L"Сервер не может обновить файл расписания AT. Файлповрежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3130:
	{
		MessageBox(NULL, (error_info + L"Сервер обнаружил ошибку при вызовеNetIMakeLMFileName. Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3131:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации из-за системной ошибки при выполнениина пути %1. Не хватает памяти для запуска процесса.Данные содержат код системной ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3132:
	{
		MessageBox(NULL, (error_info + L"Сбой при долговременной блокировке буферов сервера.Проверьте свободный объем на диске подкачки и перезагрузите систему для запуска сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3140:
	{
		MessageBox(NULL, (error_info + L"Служба остановлена из-за последовательно повторяющихсяошибок сетевого управляющего блока NCB. За последним поврежденным NCBследуют необработанные данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3141:
	{
		MessageBox(NULL, (error_info + L"Сервер сообщений остановлен из-за блокировкисегмента общих данных на сервере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3150:
	{
		MessageBox(NULL, (error_info + L"Ошибка файловой системы при открытии или записив журнал системных сообщений %1. Регистрация сообщенийотключена из-за ошибки. Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3151:
	{
		MessageBox(NULL, (error_info + L"Не удалось вывести сообщение POPUP из-за системной ошибки вызова VIO.Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3152:
	{
		MessageBox(NULL, (error_info + L"Принят неправильный блок сообщений сервера (SMB). Данные содержат SMB.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3160:
	{
		MessageBox(NULL, (error_info + L"Размер сегмента сведений о рабочей станции превышает 64 К.Размер представлен в формате DWORD:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3161:
	{
		MessageBox(NULL, (error_info + L"Рабочая станция не смогла получить имя и номер компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3162:
	{
		MessageBox(NULL, (error_info + L"Рабочая станция не смогла инициализировать Async NetBIOS Thread.Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3163:
	{
		MessageBox(NULL, (error_info + L"Рабочая станция не смогла открыть начальный общий сегмент.Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3164:
	{
		MessageBox(NULL, (error_info + L"Таблица обслуживающего компьютера рабочей станции заполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3165:
	{
		MessageBox(NULL, (error_info + L"Принят блок сообщений сервера (SMB) с неправильным слотом сообщений. SMB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3166:
	{
		MessageBox(NULL, (error_info + L"Ошибка при запуске базы данных учетных записей пользователей с рабочей станции.Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3167:
	{
		MessageBox(NULL, (error_info + L"Ошибка при ответе рабочей станции на запрос на подтверждение SSI.Данные содержат код функции и код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3170:
	{
		MessageBox(NULL, (error_info + L"Ошибка в службе оповещений при создании спискаполучателей оповещения. Код ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3171:
	{
		MessageBox(NULL, (error_info + L"Ошибка при раскрытии %1 как имени группы. Попытайтесьразбить группу на две или несколько меньших групп.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3172:
	{
		MessageBox(NULL, (error_info + L"Ошибка при передаче %2 оповещения -(%3 )Код ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3173:
	{
		MessageBox(NULL, (error_info + L"Ошибка при создании или чтении слота сообщений оповещателя.Код ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3174:
	{
		MessageBox(NULL, (error_info + L"Сервер не может прочитать файл расписания AT.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3175:
	{
		MessageBox(NULL, (error_info + L"Сервер обнаружил неправильную запись расписания AT.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3176:
	{
		MessageBox(NULL, (error_info + L"Сервер не смог найти файл расписания AT и создал новый.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3177:
	{
		MessageBox(NULL, (error_info + L"Сервер не может получить доступ к сети %1 с NetBiosOpen.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3178:
	{
		MessageBox(NULL, (error_info + L"Обработчик команд AT не может выполнить %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3180:
	{
		MessageBox(NULL, (error_info + L"ПРЕДУПРЕЖДЕНИЕ. Из-за ошибки отложенной записи диск %1 теперьсодержит поврежденные данные. Буферизация остановлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3181:
	{
		MessageBox(NULL, (error_info + L"Поврежденный сектор на диске %1 заменен (восстановлен).Данные не потеряны. Необходимо срочно выполнить CHKDSK для полноговосстановления быстродействия и пополнения банка запасных секторов для тома.Восстановление выполнено при обработке удаленного запроса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3182:
	{
		MessageBox(NULL, (error_info + L"Ошибка на диске для тома HPFS на диске %1.Ошибка возникла при обработке удаленного запроса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3183:
	{
		MessageBox(NULL, (error_info + L"База данных учетных записей пользователей (NET.ACC) повреждена.Локальная система защиты заменяет поврежденную NET.ACCна резервную копию от %1.Любые обновления базы данных после этого времени потеряны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3184:
	{
		MessageBox(NULL, (error_info + L"База данных учетных записей пользователей (NET.ACC) отсутствует.Локальная система защиты восстанавливаетрезервную копию от %1.Любые обновления базы данных после этого времени потеряны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3185:
	{
		MessageBox(NULL, (error_info + L"Невозможно запустить локальную систему защиты, так как база данныхучетных записей пользователей (NET.ACC) отсутствует или повреждена и нетгодной для использования резервной базы данных.СИСТЕМА НЕ ЗАЩИЩЕНА.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3186:
	{
		MessageBox(NULL, (error_info + L"Невозможно запустить локальную систему защиты из-за ошибкипри инициализации. Возращен код ошибки %1.СИСТЕМА НЕ ЗАЩИЩЕНА.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3190:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка NetWksta:%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3191:
	{
		MessageBox(NULL, (error_info + L"Исчерпан ресурс системы перенаправления: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3192:
	{
		MessageBox(NULL, (error_info + L"Ошибка блока сообщений сервера (SMB) для подключения к %1.Заголовок SMB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3193:
	{
		MessageBox(NULL, (error_info + L"Ошибка виртуальной линии связи в сеансе с %1.Данные содержат команду и возвращаемый код сетевого управляющего блока (NCB).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3194:
	{
		MessageBox(NULL, (error_info + L"Окончание задержанного сеанса с %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3195:
	{
		MessageBox(NULL, (error_info + L"Ошибка (%1) сетевого управляющего блока (NCB).NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3196:
	{
		MessageBox(NULL, (error_info + L"Сбой при записи в %1.Возможна потеря данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3197:
	{
		MessageBox(NULL, (error_info + L"При восстановлении драйвера %1 не завершен сетевой управляющий блок (NCB).NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3198:
	{
		MessageBox(NULL, (error_info + L"Затребованный объем ресурса %1 превышаетмаксимальный. Выделен максимальный объем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3204:
	{
		MessageBox(NULL, (error_info + L"Сервер не может создать поток команд.Необходимо увеличить параметр THREADS в файле CONFIG.SYS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3205:
	{
		MessageBox(NULL, (error_info + L"Сервер не может закрыть %1.Вероятно, файл поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3206:
	{
		MessageBox(NULL, (error_info + L"Служба репликации не может обновить каталог %1. Он имеетусловие целостности дерева и является текущим для процесса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3207:
	{
		MessageBox(NULL, (error_info + L"Сервер не может экспортировать каталог %1 клиенту %2.Каталог экспортируется с другого сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3208:
	{
		MessageBox(NULL, (error_info + L"Сервер репликации не может обновить каталог %2 по источникуна %3 из-за ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3209:
	{
		MessageBox(NULL, (error_info + L"Основная реплика %1 не посылала для каталога %2 уведомленияоб обновлении в ожидаемое время.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3210:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка при проверке имени этого компьютера на контроллере %2,являющимся контроллером домена Windows для домена %1, и в результате этот компьютер может отвергать попытки входа в систему. Неспособность проверитьимя может быть вызвана наличием в этой сети другого компьютера с таким жеименем или тем, что не опознан пароль для этой учетной записи компьютера.Если это сообщение повторяется, обратитесь к сетевому администратору.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3211:
	{
		MessageBox(NULL, (error_info + L"Сбой при попытке регистрации службы репликации на %2 как %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3212:
	{
		MessageBox(NULL, (error_info + L"Сетевая ошибка %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3213:
	{
		MessageBox(NULL, (error_info + L"Превышен предел службы репликации на число файлов в каталоге.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3214:
	{
		MessageBox(NULL, (error_info + L"Превышен предел службы репликации на глубину дерева.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3215:
	{
		MessageBox(NULL, (error_info + L"В слот сообщений принято неопознанное сообщение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3216:
	{
		MessageBox(NULL, (error_info + L"Системная ошибка %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3217:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить вход. Пользователь уже вошели аргумент TRYUSER имеет значение NO.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3218:
	{
		MessageBox(NULL, (error_info + L"Путь импорта %1 не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3219:
	{
		MessageBox(NULL, (error_info + L"Путь экспорта %1 не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3220:
	{
		MessageBox(NULL, (error_info + L"Служба репликации не может обновить сигнальный файл в каталоге %2из-за системной ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3221:
	{
		MessageBox(NULL, (error_info + L"Ошибка отказоустойчивости диска%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3222:
	{
		MessageBox(NULL, (error_info + L"Служба репликации не может получить доступ к %2на %3 из-за системной ошибки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3223:
	{
		MessageBox(NULL, (error_info + L"Вероятный сбой основного контроллера домена для домена %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3224:
	{
		MessageBox(NULL, (error_info + L"Сбой при изменении пароля учетной записи %1 на машинес ошибкой: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3225:
	{
		MessageBox(NULL, (error_info + L"Ошибка при обновлении сведений о входе или выходе для %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3226:
	{
		MessageBox(NULL, (error_info + L"Ошибка при синхронизации с основным контроллером домена %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3227:
	{
		MessageBox(NULL, (error_info + L"Установка сеанса к %1, контроллеру домена Windows NT или Windows 2000 для домена %2не выполнена, поскольку %1 не поддерживает подписывание или запечатываниесеанса Netlogon.Следует либо обновить контроллер домена, либо установить элемент реестраRequireSignOrSeal для этого компьютера равным 0.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3230:
	{
		MessageBox(NULL, (error_info + L"Сбой питания на сервере.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3231:
	{
		MessageBox(NULL, (error_info + L"Сервер выключен службой UPS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3232:
	{
		MessageBox(NULL, (error_info + L"Служба UPS не завершила выполнение указанногопользователем командного файла выключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3233:
	{
		MessageBox(NULL, (error_info + L"Не удалось открыть драйвер UPS. Код ошибкипредставляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3234:
	{
		MessageBox(NULL, (error_info + L"Питание восстановлено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3235:
	{
		MessageBox(NULL, (error_info + L"Неправильная конфигурация указанного пользователемкомандного файла выключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3236:
	{
		MessageBox(NULL, (error_info + L"Служба UPS не завершила выполнение указанного пользователемкомандного файла выключения %1. Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3250:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации из-за неправильного или отсутствующегопараметра в файле настройки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3251:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации из-за неправильной строки в файленастройки %1. Неправильная строка представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3252:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации из-за ошибкив файле настройки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3253:
	{
		MessageBox(NULL, (error_info + L"Файл %1 был изменен после инициализации.Загрузка блока загрузки временно прекращена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3254:
	{
		MessageBox(NULL, (error_info + L"Файлы не соответствуют блоку загрузки в файленастройки %1. Измените описания BASE и ORG илипорядок файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3255:
	{
		MessageBox(NULL, (error_info + L"Сбой при инициализации, так как возвращеннеправильный номер версии библиотеки %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3256:
	{
		MessageBox(NULL, (error_info + L"Непоправимая ошибка в библиотеке динамическойкомпоновки службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3257:
	{
		MessageBox(NULL, (error_info + L"Система возвращает неизвестный код ошибки.Данные содержат код ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3258:
	{
		MessageBox(NULL, (error_info + L"Файл журнала ошибок отказоустойчивости, LANROOT\\LOGS\\FT.LOG,имеет размер более 64 К.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3259:
	{
		MessageBox(NULL, (error_info + L"В файле журнала ошибок отказоустойчивости, LANROOT\\LOGS\\FT.LOG,при открытии установлен бит выполняющегося обновления. Это означает, чтобыл обнаружен фатальный сбой системы при работе с журналом ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3260:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер был успешно присоединен к %1 ‘%2\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3299:
	{
		MessageBox(NULL, (error_info + L"%1 %2 %3 %4 %5 %6 %7 %8 %9.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3301:
	{
		MessageBox(NULL, (error_info + L"Удаленный IPC").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3302:
	{
		MessageBox(NULL, (error_info + L"Удаленный Admin").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3303:
	{
		MessageBox(NULL, (error_info + L"Общий сервер входа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3304:
	{
		MessageBox(NULL, (error_info + L"Ошибка в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3400:
	{
		MessageBox(NULL, (error_info + L"Недостаточно памяти для запуска службы рабочей станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3401:
	{
		MessageBox(NULL, (error_info + L"Ошибка при чтении элемента NETWORKS в файле LANMAN.INI.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3402:
	{
		MessageBox(NULL, (error_info + L"Недопустимый аргумент: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3403:
	{
		MessageBox(NULL, (error_info + L"Элемент %1 NETWORKS в файле LANMAN.INI содержитошибку синтаксиса и будет игнорироваться.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3404:
	{
		MessageBox(NULL, (error_info + L"Слишком много элементов NETWORKS в файле LANMAN.INI.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3406:
	{
		MessageBox(NULL, (error_info + L"Ошибка при открытии драйвера сетевогоустройства %1 = %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3407:
	{
		MessageBox(NULL, (error_info + L"Драйвер устройства %1 посылает неправильный отклик BiosLinkage.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3408:
	{
		MessageBox(NULL, (error_info + L"Программа не может использоваться с данной операционной системой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3409:
	{
		MessageBox(NULL, (error_info + L"Перенаправитель уже установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3410:
	{
		MessageBox(NULL, (error_info + L"Устанавливается NETWKSTA.SYS Версия %1.%2.%3 (%4)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3411:
	{
		MessageBox(NULL, (error_info + L"Ошибка при установке NETWKSTA.SYS.Для продолжения нажмите клавишу ENTER.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3412:
	{
		MessageBox(NULL, (error_info + L"Ошибка в системе разрешения конфликтов связи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3413:
	{
		MessageBox(NULL, (error_info + L"Ваше время входа на %1 заканчивается в %2.Пожалуйста, выполните очистку и выход.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3414:
	{
		MessageBox(NULL, (error_info + L"Вы будете автоматически отключены в %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3415:
	{
		MessageBox(NULL, (error_info + L"Ваше время входа на %1 закончилось.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3416:
	{
		MessageBox(NULL, (error_info + L"Ваше время входа на %1 закончилось в %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3417:
	{
		MessageBox(NULL, (error_info + L"ПРЕДУПРЕЖДЕНИЕ: необходимо выйти до %1. Если не осуществитьвыход своевременно, сеанс будет отключени любые открытые вами файлы или устройствамогут потерять данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3418:
	{
		MessageBox(NULL, (error_info + L"ПРЕДУПРЕЖДЕНИЕ: необходимо немедленно выйти из %1.У вас осталось 2 минуты на выход до отключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3419:
	{
		MessageBox(NULL, (error_info + L"У вас имеются открытые файлы или устройства и принудительноеотключение может привести к потере данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3420:
	{
		MessageBox(NULL, (error_info + L"Общий ресурс по умолчанию для внутреннего использования").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3421:
	{
		MessageBox(NULL, (error_info + L"Служба сообщений").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3500:
	{
		MessageBox(NULL, (error_info + L"Команда выполнена успешно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3501:
	{
		MessageBox(NULL, (error_info + L"Использован недопустимый параметр.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3502:
	{
		MessageBox(NULL, (error_info + L"Системная ошибка %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3503:
	{
		MessageBox(NULL, (error_info + L"Неправильное число аргументов команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3504:
	{
		MessageBox(NULL, (error_info + L"Команда выполнена с одной или несколькими ошибками.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3505:
	{
		MessageBox(NULL, (error_info + L"Использован параметр с недопустимым значением.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3506:
	{
		MessageBox(NULL, (error_info + L"Неизвестный параметр %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3507:
	{
		MessageBox(NULL, (error_info + L"Непонятный параметр %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3510:
	{
		MessageBox(NULL, (error_info + L"Используется команда с конфликтующими ключами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3511:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти подпрограмму %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3512:
	{
		MessageBox(NULL, (error_info + L"Для программы требуется более поздняя версияоперационной системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3513:
	{
		MessageBox(NULL, (error_info + L"Имеется больше данных, чем может возвратить Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3514:
	{
		MessageBox(NULL, (error_info + L"Для вызова дополнительной справки наберите NET HELPMSG %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3515:
	{
		MessageBox(NULL, (error_info + L"Эта команда может использоваться только для контроллера домена Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3516:
	{
		MessageBox(NULL, (error_info + L"Эта команда не может использоваться для контроллера домена Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3520:
	{
		MessageBox(NULL, (error_info + L"Запущены следующие службы Windows:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3521:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3522:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» запускается").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3523:
	{
		MessageBox(NULL, (error_info + L"Не удалось запустить службу «%1».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3524:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» успешно запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3525:
	{
		MessageBox(NULL, (error_info + L"Останов службы рабочей станции приведет также к останову службы сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3526:
	{
		MessageBox(NULL, (error_info + L"На рабочей станции имеются открытые файлы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3527:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» останавливается").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3528:
	{
		MessageBox(NULL, (error_info + L"Не удалось остановить службу «%1».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3529:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» успешно остановлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3530:
	{
		MessageBox(NULL, (error_info + L"Следующие службы являются зависимыми от службы «%1».Останов службы «%1» приведет также к останову этих служб.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3533:
	{
		MessageBox(NULL, (error_info + L"Служба запускается или останавливается. Повторите попытку позже.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3534:
	{
		MessageBox(NULL, (error_info + L"Служба не сообщает об ошибке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3535:
	{
		MessageBox(NULL, (error_info + L"Ошибка при управлении устройством.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3536:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» успешно возобновлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3537:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» успешно приостановлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3538:
	{
		MessageBox(NULL, (error_info + L"Не удалось возобновить службу «%1».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3539:
	{
		MessageBox(NULL, (error_info + L"Не удалось приостановить службу «%1».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3540:
	{
		MessageBox(NULL, (error_info + L"Ожидается возобновление службы «%1»").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3541:
	{
		MessageBox(NULL, (error_info + L"Ожидается приостановка службы «%1»").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3542:
	{
		MessageBox(NULL, (error_info + L"«%1» успешно возобновлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3543:
	{
		MessageBox(NULL, (error_info + L"«%1» успешно приостановлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3544:
	{
		MessageBox(NULL, (error_info + L"Служба «%1» запущена другим процессом и находится в состоянии ожидания.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3547:
	{
		MessageBox(NULL, (error_info + L"Специфическая ошибка службы: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3660:
	{
		MessageBox(NULL, (error_info + L"Следующие рабочие станции имеют сеансы на сервере:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3661:
	{
		MessageBox(NULL, (error_info + L"Следующие рабочие станции имеют на сервере сеансы с открытыми файлами:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3666:
	{
		MessageBox(NULL, (error_info + L"Направлен псевдоним сообщений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3670:
	{
		MessageBox(NULL, (error_info + L"Имеются следующие удаленные подключения:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3671:
	{
		MessageBox(NULL, (error_info + L"Продолжение приведет к отмене подключений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3675:
	{
		MessageBox(NULL, (error_info + L"В сеансе от %1 имеются открытые файлы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3676:
	{
		MessageBox(NULL, (error_info + L"Новые подключения будут запомнены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3677:
	{
		MessageBox(NULL, (error_info + L"Новые подключения не будут запомнены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3678:
	{
		MessageBox(NULL, (error_info + L"Ошибка при сохранении конфигурации. Запоминаемые подключения не были изменены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3679:
	{
		MessageBox(NULL, (error_info + L"Ошибка при чтении конфигурации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3680:
	{
		MessageBox(NULL, (error_info + L"Ошибка при восстановлении подключения к %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3682:
	{
		MessageBox(NULL, (error_info + L"Сетевые службы не запущены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3683:
	{
		MessageBox(NULL, (error_info + L"В списке нет элементов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3688:
	{
		MessageBox(NULL, (error_info + L"Пользователи имеют на %1 открытые файлы. Продолжение операции приведет к закрытию файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3689:
	{
		MessageBox(NULL, (error_info + L"Служба рабочей станции уже запущена. Windows будет игнорировать командные параметры для рабочей станции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3691:
	{
		MessageBox(NULL, (error_info + L"В подключения к %1 имеются открытые файлы и/или незавершенные операции поиска в каталогах.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3693:
	{
		MessageBox(NULL, (error_info + L"Этот запрос будет обрабатываться контроллером домена %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3694:
	{
		MessageBox(NULL, (error_info + L"Невозможно удалить очередь общего доступа, содержащую задание печати.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3695:
	{
		MessageBox(NULL, (error_info + L"%1 имеет запоминаемое подключение к %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3710:
	{
		MessageBox(NULL, (error_info + L"Ошибка при открытии файла справки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3711:
	{
		MessageBox(NULL, (error_info + L"Файл справки пуст.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3712:
	{
		MessageBox(NULL, (error_info + L"Файл справки поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3713:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти контроллер домена для домена %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3714:
	{
		MessageBox(NULL, (error_info + L"Эта операция является привилегированной на системахс ранней версией программного обеспечения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3716:
	{
		MessageBox(NULL, (error_info + L"Неизвестный тип устройства.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3717:
	{
		MessageBox(NULL, (error_info + L"Файл журнала поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3718:
	{
		MessageBox(NULL, (error_info + L"Имена программных файлов должны иметь окончание .EXE.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3719:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти соответствующий общий ресурс. Удаление не выполнено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3720:
	{
		MessageBox(NULL, (error_info + L"Неправильное значение в поле числа единиц за неделю в записи пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3721:
	{
		MessageBox(NULL, (error_info + L"Недействительный пароль для %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3722:
	{
		MessageBox(NULL, (error_info + L"Ошибка при передаче сообщения на %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3723:
	{
		MessageBox(NULL, (error_info + L"Недействительные пароль или имя пользователя для %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3725:
	{
		MessageBox(NULL, (error_info + L"Ошибка при удалении общего ресурса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3726:
	{
		MessageBox(NULL, (error_info + L"Недействительное имя пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3727:
	{
		MessageBox(NULL, (error_info + L"Недействительный пароль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3728:
	{
		MessageBox(NULL, (error_info + L"Пароли не совпадают.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3729:
	{
		MessageBox(NULL, (error_info + L"Не восстановлены все постоянные подключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3730:
	{
		MessageBox(NULL, (error_info + L"Имя не является правильным именем компьютера или домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3732:
	{
		MessageBox(NULL, (error_info + L"Для данного ресурса не могут быть заданы стандартные разрешения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3734:
	{
		MessageBox(NULL, (error_info + L"Не был введен действительный пароль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3735:
	{
		MessageBox(NULL, (error_info + L"Не было введено действительное имя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3736:
	{
		MessageBox(NULL, (error_info + L"Этот ресурс нельзя сделать общим.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3737:
	{
		MessageBox(NULL, (error_info + L"Строка разрешений содержит неправильные значения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3738:
	{
		MessageBox(NULL, (error_info + L"Данная операция выполняется только для принтеров или устройств связи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3742:
	{
		MessageBox(NULL, (error_info + L"%1 представляет недействительное имя пользователя или группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3743:
	{
		MessageBox(NULL, (error_info + L"Сервер не настроен для удаленного администрирования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3752:
	{
		MessageBox(NULL, (error_info + L"Нет пользователей, имеющих сеансы с данным сервером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3753:
	{
		MessageBox(NULL, (error_info + L"Пользователь %1 не входит в группу %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3754:
	{
		MessageBox(NULL, (error_info + L"Пользователь %1 уже включен в группу %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3755:
	{
		MessageBox(NULL, (error_info + L"Такого пользователя нет: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3756:
	{
		MessageBox(NULL, (error_info + L"Неправильный отклик.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3757:
	{
		MessageBox(NULL, (error_info + L"Не был получен допустимый отклик.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3758:
	{
		MessageBox(NULL, (error_info + L"Представленный список назначений не совпадает со списком назначений очереди принтера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3759:
	{
		MessageBox(NULL, (error_info + L"Ваш пароль не может быть изменен до %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3760:
	{
		MessageBox(NULL, (error_info + L"%1 не распознается как день недели.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3761:
	{
		MessageBox(NULL, (error_info + L"Указанный временной интервал заканчивается раньше, чем начинается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3762:
	{
		MessageBox(NULL, (error_info + L"%1 не распознается как час.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3763:
	{
		MessageBox(NULL, (error_info + L"%1 не является допустимой спецификацией минут.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3764:
	{
		MessageBox(NULL, (error_info + L"Неполный час в указанном времени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3765:
	{
		MessageBox(NULL, (error_info + L"Нельзя смешивать12- и 24-часовой форматы времени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3766:
	{
		MessageBox(NULL, (error_info + L"%1 не является допустимым суффиксом 12-часового формата.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3767:
	{
		MessageBox(NULL, (error_info + L"Введен недопустимый формат даты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3768:
	{
		MessageBox(NULL, (error_info + L"Введен недопустимый диапазон дней.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3769:
	{
		MessageBox(NULL, (error_info + L"Введен недопустимый диапазон времени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3770:
	{
		MessageBox(NULL, (error_info + L"Недопустимые аргументы NET USER. Проверьте минимальнуюдлину пароля и/или указанные аргументы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3771:
	{
		MessageBox(NULL, (error_info + L"Для ENABLESCRIPT требуется значение YES.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3773:
	{
		MessageBox(NULL, (error_info + L"Введен неправильный код страны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3774:
	{
		MessageBox(NULL, (error_info + L"Пользователь был успешно создан, но не добавленв локальную группу USERS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3775:
	{
		MessageBox(NULL, (error_info + L"Представлен неправильный контекст для пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3776:
	{
		MessageBox(NULL, (error_info + L"Невозможность загрузки библиотеки динамической компоновки %1или ошибка при попытке ее использования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3777:
	{
		MessageBox(NULL, (error_info + L"Отправка файлов более не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3778:
	{
		MessageBox(NULL, (error_info + L"Возможно, не указаны пути для общих ресурсов ADMIN$ и IPC$.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3779:
	{
		MessageBox(NULL, (error_info + L"Пользователь или группа %1 уже является членом локальной группы %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3780:
	{
		MessageBox(NULL, (error_info + L"Несуществующий пользователь или группа: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3781:
	{
		MessageBox(NULL, (error_info + L"Несуществующий компьютер: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3782:
	{
		MessageBox(NULL, (error_info + L"Компьютер %1 уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3783:
	{
		MessageBox(NULL, (error_info + L"Несуществующий глобальный пользователь или группа: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3784:
	{
		MessageBox(NULL, (error_info + L"Только дисковые общие ресурсы могут быть помечены как кэшируемые").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3790:
	{
		MessageBox(NULL, (error_info + L"Система не может найти сообщение: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3802:
	{
		MessageBox(NULL, (error_info + L"Неправильная дата в расписании.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3803:
	{
		MessageBox(NULL, (error_info + L"Корневой каталог LANMAN недоступен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3804:
	{
		MessageBox(NULL, (error_info + L"Не удалось открыть файл SCHED.LOG.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3805:
	{
		MessageBox(NULL, (error_info + L"Служба сервера не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3806:
	{
		MessageBox(NULL, (error_info + L"Идентификатор задания AT не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3807:
	{
		MessageBox(NULL, (error_info + L"Файл расписания AT поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3808:
	{
		MessageBox(NULL, (error_info + L"Сбой при удалении из-за ошибки в файле расписания AT.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3809:
	{
		MessageBox(NULL, (error_info + L"Длина командной строки не может превышать 259 символов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3810:
	{
		MessageBox(NULL, (error_info + L"Невозможно обновить файл расписания AT, так как диск заполнен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3812:
	{
		MessageBox(NULL, (error_info + L"Неправильный файл расписания AT. Удалите этот файл и создайте новый.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3813:
	{
		MessageBox(NULL, (error_info + L"Файл расписания AT был удален.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3814:
	{
		MessageBox(NULL, (error_info + L"Синтаксис данной команды:AT [код] [/DELETE]AT время [/EVERY:дата | /NEXT:дата] командаКоманда AT устанавливает расписание запуска программной командыс более поздней датой и временем на сервере. Кроме того, онавыводит список стоящих в расписании выполняемых программ и команд.День можно указать как Пн,Вт,Ср,Чт,Пт,Сб,Вс или 1-31.Время можно указать в 24-часовом формате ЧЧ:ММ.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3815:
	{
		MessageBox(NULL, (error_info + L"Истек интервал ожидания команды AT.Повторите попытку позже.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3816:
	{
		MessageBox(NULL, (error_info + L"Минимальный срок действия пароля учетной записи пользователяне может превышать максимальный срок действия пароля.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3817:
	{
		MessageBox(NULL, (error_info + L"Указанное значение несовместимо с серверамис программами нижнего уровня. Укажите меньшее значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3870:
	{
		MessageBox(NULL, (error_info + L"%1 не является допустимым именем компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3871:
	{
		MessageBox(NULL, (error_info + L"%1 не является допустимым номером сетевого сообщения Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3900:
	{
		MessageBox(NULL, (error_info + L"Сообщение от %1 для %2 на %3").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3901:
	{
		MessageBox(NULL, (error_info + L"****").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3902:
	{
		MessageBox(NULL, (error_info + L"**** неожиданный конец сообщения ****").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3905:
	{
		MessageBox(NULL, (error_info + L"Нажмите ESC для выхода").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3906:
	{
		MessageBox(NULL, (error_info + L"…").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3910:
	{
		MessageBox(NULL, (error_info + L"Текущее время на %1 равно %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3911:
	{
		MessageBox(NULL, (error_info + L"Текущие локальные часы %1Установить для локального компьютера время, совпадающеес временем на %2? %3:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3912:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти сервер времени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3913:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти контроллер домена для домена %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3914:
	{
		MessageBox(NULL, (error_info + L"Местное время (GMT%3) на %1 — %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3915:
	{
		MessageBox(NULL, (error_info + L"Не удалось определить основной каталог пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3916:
	{
		MessageBox(NULL, (error_info + L"Не был указан основной каталог пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3917:
	{
		MessageBox(NULL, (error_info + L"Указанное имя основного каталога пользователя (%1) не является универсальным именем UNC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3918:
	{
		MessageBox(NULL, (error_info + L"Диск %1 сейчас подключен к %2. Ваш основной каталог %3\\%4.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3919:
	{
		MessageBox(NULL, (error_info + L"Диск %1 сейчас подключен к %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3920:
	{
		MessageBox(NULL, (error_info + L"Не осталось свободных букв диска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3932:
	{
		MessageBox(NULL, (error_info + L"%1 не является допустимым именем домена или рабочей группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3935:
	{
		MessageBox(NULL, (error_info + L"Текущее значение SNTP: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3936:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер в данный момент не настроен на использование конкретного SNTP-сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3937:
	{
		MessageBox(NULL, (error_info + L"Текущее автоматически выбранное значение SNTP: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3951:
	{
		MessageBox(NULL, (error_info + L"Для параметра %1 указано слишком много значений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3952:
	{
		MessageBox(NULL, (error_info + L"Для параметра %1 введено недопустимое значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3953:
	{
		MessageBox(NULL, (error_info + L"Неправильный синтаксис.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3960:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый номер файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3961:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый номер задания печати.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3963:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти указанную учетную запись пользователя или группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3965:
	{
		MessageBox(NULL, (error_info + L"Пользователь был добавлен, но не удалось разрешить пользованиеслужбой доступа к файлам и принтерам NetWare.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3966:
	{
		MessageBox(NULL, (error_info + L"Служба доступа к файлам и принтерам NetWare не установлена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3967:
	{
		MessageBox(NULL, (error_info + L"Не удалось задать свойства пользователя для службы доступа к файлам и принтерам NetWare.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3968:
	{
		MessageBox(NULL, (error_info + L"Пароль для %1 имеет вид: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3969:
	{
		MessageBox(NULL, (error_info + L"NetWare-совместимый вход").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4000:
	{
		MessageBox(NULL, (error_info + L"Ошибка WINS при обработке команды.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4001:
	{
		MessageBox(NULL, (error_info + L"Нельзя удалить локальную часть WINS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4002:
	{
		MessageBox(NULL, (error_info + L"Ошибка при импорте из файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4003:
	{
		MessageBox(NULL, (error_info + L"Ошибка при архивации данных. Производилась ли ранее полная архивация?").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4004:
	{
		MessageBox(NULL, (error_info + L"Ошибка при архивации данных. Проверьте папку, в которую производится архивация базы данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4005:
	{
		MessageBox(NULL, (error_info + L"Имя не существует в базе данных WINS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4006:
	{
		MessageBox(NULL, (error_info + L"Репликация невозможна без предварительной настройки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4100:
	{
		MessageBox(NULL, (error_info + L"DHCP-клиент запросил IP-адрес, который уже используется в сети. Локальный интерфейс будет отключен до тех пор, пока DHCP-клиент сможет получить новый адрес.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4200:
	{
		MessageBox(NULL, (error_info + L"Переданный GUID не был распознан поставщиком данных WMI как правильный GUID.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4201:
	{
		MessageBox(NULL, (error_info + L"Переданное имя копии не было распознано поставщиком данных WMI как допустимое имя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4202:
	{
		MessageBox(NULL, (error_info + L"Переданный идентификатор данных не был распознан поставщиком данных WMI как допустимый.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4203:
	{
		MessageBox(NULL, (error_info + L"Не удается завершить запрос WMI. Запрос нужно повторить.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4204:
	{
		MessageBox(NULL, (error_info + L"Не удается найти поставщика данных WMI.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4205:
	{
		MessageBox(NULL, (error_info + L"Поставщик данных WMI ссылается на незарегистрированный элемент .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4206:
	{
		MessageBox(NULL, (error_info + L"Блок данных WMI или оповещение о событиях уже включено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4207:
	{
		MessageBox(NULL, (error_info + L"Блок данных WMI более недоступен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4208:
	{
		MessageBox(NULL, (error_info + L"Служба данных WMI более недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4209:
	{
		MessageBox(NULL, (error_info + L"Поставщик данных WMI не смог выполнить запрос.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4210:
	{
		MessageBox(NULL, (error_info + L"Информация WMI MOF неверна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4211:
	{
		MessageBox(NULL, (error_info + L"Регистрационная информация WMI неверна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4212:
	{
		MessageBox(NULL, (error_info + L"Блок данных WMI или оповещение о событиях уже отключено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4213:
	{
		MessageBox(NULL, (error_info + L"Элемент данных или блок данных WMI предназначен только для чтения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4214:
	{
		MessageBox(NULL, (error_info + L"Нельзя изменить элемент данных или блок данных WMI.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4300:
	{
		MessageBox(NULL, (error_info + L"Идентификатор носителя не представляет правильный носитель.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4301:
	{
		MessageBox(NULL, (error_info + L"Идентификатор библиотеки не представляет правильной библиотеки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4302:
	{
		MessageBox(NULL, (error_info + L"Идентификатор пула носителей не представляет правильный пул.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4303:
	{
		MessageBox(NULL, (error_info + L"Дисковод и носитель несовместимы или принадлежат разным библиотекам.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4304:
	{
		MessageBox(NULL, (error_info + L"Этот носитель сейчас находится в автономном режиме. Для выполнения операции его надо подключить.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4305:
	{
		MessageBox(NULL, (error_info + L"Эту операцию выполнить нельзя выполнить на автономной библиотеке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4306:
	{
		MessageBox(NULL, (error_info + L"Библиотека, дисковод или носитель пусты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4307:
	{
		MessageBox(NULL, (error_info + L"Библиотека, дисковод или носитель должны быть пусты для выполнения этой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4308:
	{
		MessageBox(NULL, (error_info + L"Отсутствует носитель в библиотеке или пуле.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4309:
	{
		MessageBox(NULL, (error_info + L"Ресурс, требуемый для этой операции, отключен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4310:
	{
		MessageBox(NULL, (error_info + L"Идентификатор носителя представляет неверный носитель.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4311:
	{
		MessageBox(NULL, (error_info + L"Очистка диска невозможна или этот диск ее не поддерживает.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4312:
	{
		MessageBox(NULL, (error_info + L"Идентификатор объекта представляет неверный объект.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4313:
	{
		MessageBox(NULL, (error_info + L"Чтение и запись в базу данных невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4314:
	{
		MessageBox(NULL, (error_info + L"База данных заполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4315:
	{
		MessageBox(NULL, (error_info + L"Носитель несовместим с устройством или пулом носителей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4316:
	{
		MessageBox(NULL, (error_info + L"Ресурс, требуемый для осуществления операции, не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4317:
	{
		MessageBox(NULL, (error_info + L"Неверный идентификатор операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4318:
	{
		MessageBox(NULL, (error_info + L"Носитель не смонтирован или не готов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4319:
	{
		MessageBox(NULL, (error_info + L"Устройство не готово.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4320:
	{
		MessageBox(NULL, (error_info + L"Оператор или администратор отклонили запрос.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4321:
	{
		MessageBox(NULL, (error_info + L"Идентификатор диска представляет неверный диск.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4322:
	{
		MessageBox(NULL, (error_info + L"Библиотека заполнена. Свободные гнезда отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4323:
	{
		MessageBox(NULL, (error_info + L"Этот транспорт не может получить доступ к носителю.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4324:
	{
		MessageBox(NULL, (error_info + L"Не удается загрузить носитель в устройство.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4325:
	{
		MessageBox(NULL, (error_info + L"Информация о статусе устройства недоступна .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4326:
	{
		MessageBox(NULL, (error_info + L"Невозможно получить информацию о состоянии гнезда.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4327:
	{
		MessageBox(NULL, (error_info + L"Невозможно получить информацию о состоянии гнезда.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4328:
	{
		MessageBox(NULL, (error_info + L"Невозможно использовать этот транспорт, т.к. он уже используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4329:
	{
		MessageBox(NULL, (error_info + L"Не удается открыть или закрыть порт вставки/извлечения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4330:
	{
		MessageBox(NULL, (error_info + L"Не удается извлечь носитель, т.к. он находится в устройстве.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4331:
	{
		MessageBox(NULL, (error_info + L"Гнездо очистителя уже зарезервировано.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4332:
	{
		MessageBox(NULL, (error_info + L"Гнездо очистителя не зарезервировано.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4333:
	{
		MessageBox(NULL, (error_info + L"Чистящий картридж выполнил наибольшее из возможных число чисток диска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4334:
	{
		MessageBox(NULL, (error_info + L"Непредвиденный идентификатор на носителе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4335:
	{
		MessageBox(NULL, (error_info + L"Невозможно удалить последний из оставшихся элементов группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4336:
	{
		MessageBox(NULL, (error_info + L"В полученном сообщении превышен наибольший размер, допустимый для данного параметра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4337:
	{
		MessageBox(NULL, (error_info + L"Том содержит системные файлы или файлы подкачки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4338:
	{
		MessageBox(NULL, (error_info + L"Этот тип носителя нельзя удалить из библиотеки, т.к. по меньшей мере один из дисков библиотеки подтверждает возможность поддержки этого типа носителя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4339:
	{
		MessageBox(NULL, (error_info + L"Этот автономный носитель не может быть подключен к системе, т.к. отсутствуют работающие диски, которые можно использовать.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4340:
	{
		MessageBox(NULL, (error_info + L"В ленточной библиотеке установлен чистящий картридж.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4341:
	{
		MessageBox(NULL, (error_info + L"(Y-да/N-нет) [N]").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4342:
	{
		MessageBox(NULL, (error_info + L"Ошибка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4343:
	{
		MessageBox(NULL, (error_info + L"OK").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4344:
	{
		MessageBox(NULL, (error_info + L"Y").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4345:
	{
		MessageBox(NULL, (error_info + L"N").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4346:
	{
		MessageBox(NULL, (error_info + L"Любой").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4347:
	{
		MessageBox(NULL, (error_info + L"A").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4348:
	{
		MessageBox(NULL, (error_info + L"P").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4349:
	{
		MessageBox(NULL, (error_info + L"(не найден)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4350:
	{
		MessageBox(NULL, (error_info + L"Служба удаленного хранилища не смогла отозвать файл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4351:
	{
		MessageBox(NULL, (error_info + L"Служба съемных носителей сейчас неработоспособна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4352:
	{
		MessageBox(NULL, (error_info + L"Служба съемных носителей обнаружила ошибку на носителе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4354:
	{
		MessageBox(NULL, (error_info + L"Введите пароль:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4357:
	{
		MessageBox(NULL, (error_info + L"Введите пароль для %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4358:
	{
		MessageBox(NULL, (error_info + L"Введите пароль для пользователя:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4359:
	{
		MessageBox(NULL, (error_info + L"Введите пароль для общего ресурса:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4360:
	{
		MessageBox(NULL, (error_info + L"Введите ваш пароль:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4361:
	{
		MessageBox(NULL, (error_info + L"Повторите ввод пароля для подтверждения:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4362:
	{
		MessageBox(NULL, (error_info + L"Введите старый пароль пользователя:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4363:
	{
		MessageBox(NULL, (error_info + L"Введите новый пароль пользователя:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4364:
	{
		MessageBox(NULL, (error_info + L"Введите ваш новый пароль:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4365:
	{
		MessageBox(NULL, (error_info + L"Введите пароль службы Replicator:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4366:
	{
		MessageBox(NULL, (error_info + L"Введите ваше имя пользователя или нажмите клавишу ВВОД, если это имя %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4367:
	{
		MessageBox(NULL, (error_info + L"Введите имя домена или сервера, на котором меняется пароль, илинажмите ENTER, если это домен %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4368:
	{
		MessageBox(NULL, (error_info + L"Введите ваше имя пользователя:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4369:
	{
		MessageBox(NULL, (error_info + L"Статистика сети для \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4370:
	{
		MessageBox(NULL, (error_info + L"Параметры печати для %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4371:
	{
		MessageBox(NULL, (error_info + L"Доступ для очередей устройства связи %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4372:
	{
		MessageBox(NULL, (error_info + L"Сведения о задании печати").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4373:
	{
		MessageBox(NULL, (error_info + L"Очереди устройства связи на \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4374:
	{
		MessageBox(NULL, (error_info + L"Принтеры на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4375:
	{
		MessageBox(NULL, (error_info + L"Доступ для принтеров %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4376:
	{
		MessageBox(NULL, (error_info + L"Задания печати для %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4377:
	{
		MessageBox(NULL, (error_info + L"Общие ресурсы на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4378:
	{
		MessageBox(NULL, (error_info + L"Допускается управление следующими выполняющимися службами:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4379:
	{
		MessageBox(NULL, (error_info + L"Доступна статистика для следующих выполняющихся служб:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4380:
	{
		MessageBox(NULL, (error_info + L"Учетные записи пользователей для \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4381:
	{
		MessageBox(NULL, (error_info + L"Синтаксис данной команды:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4382:
	{
		MessageBox(NULL, (error_info + L"Параметры данной команды:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4383:
	{
		MessageBox(NULL, (error_info + L"Введите имя основного контроллера домена:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4384:
	{
		MessageBox(NULL, (error_info + L"Введена слишком длинная строка. Максимальнаядлина %1. Повторите ввод.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4385:
	{
		MessageBox(NULL, (error_info + L"Воскресенье").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4386:
	{
		MessageBox(NULL, (error_info + L"Понедельник").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4387:
	{
		MessageBox(NULL, (error_info + L"Вторник").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4388:
	{
		MessageBox(NULL, (error_info + L"Среда").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4389:
	{
		MessageBox(NULL, (error_info + L"Четверг").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4390:
	{
		MessageBox(NULL, (error_info + L"Этот файл или папка не являются точкой повторной обработки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4391:
	{
		MessageBox(NULL, (error_info + L"Нельзя установить атрибут точки повторной обработки, т.к. он конфликтует с существующим атрибутом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4392:
	{
		MessageBox(NULL, (error_info + L"Данные в буфере точки повторной обработки являются недопустимыми.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4393:
	{
		MessageBox(NULL, (error_info + L"Тег в буфере точки повторной обработки являются недопустимыми.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4394:
	{
		MessageBox(NULL, (error_info + L"Имеется несовпадение между тегом, указанном в запросе, и теге в буфере точки повторной обработки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4395:
	{
		MessageBox(NULL, (error_info + L"Ср").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4396:
	{
		MessageBox(NULL, (error_info + L"Чт").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4397:
	{
		MessageBox(NULL, (error_info + L"Пт").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4398:
	{
		MessageBox(NULL, (error_info + L"Сб").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4399:
	{
		MessageBox(NULL, (error_info + L"Сб").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4400:
	{
		MessageBox(NULL, (error_info + L"Учетные записи групп для \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4401:
	{
		MessageBox(NULL, (error_info + L"Имя группы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4402:
	{
		MessageBox(NULL, (error_info + L"Комментарий").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4403:
	{
		MessageBox(NULL, (error_info + L"Члены").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4405:
	{
		MessageBox(NULL, (error_info + L"Псевдонимы для \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4406:
	{
		MessageBox(NULL, (error_info + L"Имя псевдонима").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4407:
	{
		MessageBox(NULL, (error_info + L"Комментарий").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4408:
	{
		MessageBox(NULL, (error_info + L"Члены").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4410:
	{
		MessageBox(NULL, (error_info + L"Учетные записи пользователей для \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4411:
	{
		MessageBox(NULL, (error_info + L"Имя пользователя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4412:
	{
		MessageBox(NULL, (error_info + L"Полное имя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4413:
	{
		MessageBox(NULL, (error_info + L"Комментарий").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4414:
	{
		MessageBox(NULL, (error_info + L"Комментарий пользователя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4415:
	{
		MessageBox(NULL, (error_info + L"Параметры").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4416:
	{
		MessageBox(NULL, (error_info + L"Код страны").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4417:
	{
		MessageBox(NULL, (error_info + L"Уровень привилегий").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4418:
	{
		MessageBox(NULL, (error_info + L"Привилегии оператора").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4419:
	{
		MessageBox(NULL, (error_info + L"Учетная запись активна").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4420:
	{
		MessageBox(NULL, (error_info + L"Учетная запись просрочена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4421:
	{
		MessageBox(NULL, (error_info + L"Последний пароль задан").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4422:
	{
		MessageBox(NULL, (error_info + L"Действие пароля завершается").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4423:
	{
		MessageBox(NULL, (error_info + L"Пароль допускает изменение").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4424:
	{
		MessageBox(NULL, (error_info + L"Разрешенные рабочие станции").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4425:
	{
		MessageBox(NULL, (error_info + L"Максимальный объем диска").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4426:
	{
		MessageBox(NULL, (error_info + L"Без ограничений").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4427:
	{
		MessageBox(NULL, (error_info + L"Членство в локальных группах").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4428:
	{
		MessageBox(NULL, (error_info + L"Контроллер домена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4429:
	{
		MessageBox(NULL, (error_info + L"Сценарий входа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4430:
	{
		MessageBox(NULL, (error_info + L"Последний вход").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4431:
	{
		MessageBox(NULL, (error_info + L"Членство в глобальных группах").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4432:
	{
		MessageBox(NULL, (error_info + L"Разрешенные часы входа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4433:
	{
		MessageBox(NULL, (error_info + L"Все").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4434:
	{
		MessageBox(NULL, (error_info + L"Нет").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4435:
	{
		MessageBox(NULL, (error_info + L"Ежедневно %1 — %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4436:
	{
		MessageBox(NULL, (error_info + L"Основной каталог").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4437:
	{
		MessageBox(NULL, (error_info + L"Требуется пароль").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4438:
	{
		MessageBox(NULL, (error_info + L"Пользователь может изменить пароль").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4439:
	{
		MessageBox(NULL, (error_info + L"Конфигурация пользователя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4440:
	{
		MessageBox(NULL, (error_info + L"Блокировка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4450:
	{
		MessageBox(NULL, (error_info + L"Имя компьютера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4451:
	{
		MessageBox(NULL, (error_info + L"Имя пользователя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4452:
	{
		MessageBox(NULL, (error_info + L"Версия программы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4453:
	{
		MessageBox(NULL, (error_info + L"Активная рабочая станция на").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4454:
	{
		MessageBox(NULL, (error_info + L"Корневой каталог Windows NT").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4455:
	{
		MessageBox(NULL, (error_info + L"Домен рабочей станции").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4456:
	{
		MessageBox(NULL, (error_info + L"Домен входа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4457:
	{
		MessageBox(NULL, (error_info + L"Другие домены").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4458:
	{
		MessageBox(NULL, (error_info + L"Интервал ожидания открытия COM-порта (с)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4459:
	{
		MessageBox(NULL, (error_info + L"Отсчет передачи COM-порта (байт)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4460:
	{
		MessageBox(NULL, (error_info + L"Таймаут передачи COM-порта (мс)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4461:
	{
		MessageBox(NULL, (error_info + L"Таймаут печати сеанса DOS (с)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4462:
	{
		MessageBox(NULL, (error_info + L"Максимальный размер журнала ошибок (К)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4463:
	{
		MessageBox(NULL, (error_info + L"Максимальный размер временного буфера (К)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4464:
	{
		MessageBox(NULL, (error_info + L"Число сетевых буферов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4465:
	{
		MessageBox(NULL, (error_info + L"Число символьных буферов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4466:
	{
		MessageBox(NULL, (error_info + L"Размер сетевых буферов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4467:
	{
		MessageBox(NULL, (error_info + L"Размер символьных буферов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4468:
	{
		MessageBox(NULL, (error_info + L"Полное имя компьютера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4469:
	{
		MessageBox(NULL, (error_info + L"DNS-имя домена рабочей станции").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4470:
	{
		MessageBox(NULL, (error_info + L"Windows 2002").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4481:
	{
		MessageBox(NULL, (error_info + L"Имя сервера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4482:
	{
		MessageBox(NULL, (error_info + L"Комментарий для сервера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4483:
	{
		MessageBox(NULL, (error_info + L"Отправка административных оповещений").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4484:
	{
		MessageBox(NULL, (error_info + L"Версия программы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4485:
	{
		MessageBox(NULL, (error_info + L"Сервер одноранговой сети").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4486:
	{
		MessageBox(NULL, (error_info + L"Windows NT").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4487:
	{
		MessageBox(NULL, (error_info + L"Уровень сервера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4488:
	{
		MessageBox(NULL, (error_info + L"Windows NT для сервера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4489:
	{
		MessageBox(NULL, (error_info + L"Активный сервер на").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4492:
	{
		MessageBox(NULL, (error_info + L"Скрытый сервер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4500:
	{
		MessageBox(NULL, (error_info + L"Хранилище единственных копий на этом томе недоступно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4506:
	{
		MessageBox(NULL, (error_info + L"Максимальное число пользователей").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4507:
	{
		MessageBox(NULL, (error_info + L"Максимальное число работающих администраторов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4508:
	{
		MessageBox(NULL, (error_info + L"Максимальное число общих ресурсов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4509:
	{
		MessageBox(NULL, (error_info + L"Максимальное число подключений к ресурсам").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4510:
	{
		MessageBox(NULL, (error_info + L"Максимальное число открытых файлов на сервере").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4511:
	{
		MessageBox(NULL, (error_info + L"Максимальное число открытых файлов в сеансе").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4512:
	{
		MessageBox(NULL, (error_info + L"Максимальное число блокировок файлов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4520:
	{
		MessageBox(NULL, (error_info + L"Время холостого хода сеанса (мин)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4526:
	{
		MessageBox(NULL, (error_info + L"Общий уровень").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4527:
	{
		MessageBox(NULL, (error_info + L"Уровень пользователя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4530:
	{
		MessageBox(NULL, (error_info + L"Неограниченный сервер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4570:
	{
		MessageBox(NULL, (error_info + L"Принудительный выход по истечении времени через:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4571:
	{
		MessageBox(NULL, (error_info + L"Блокировка учетной записи после ввода ошибочных паролей:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4572:
	{
		MessageBox(NULL, (error_info + L"Минимальный срок действия пароля (дней):").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4573:
	{
		MessageBox(NULL, (error_info + L"Максимальный срок действия пароля (дней):").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4574:
	{
		MessageBox(NULL, (error_info + L"Минимальная длина пароля:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4575:
	{
		MessageBox(NULL, (error_info + L"Хранение неповторяющихся паролей:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4576:
	{
		MessageBox(NULL, (error_info + L"Роль компьютера:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4577:
	{
		MessageBox(NULL, (error_info + L"Основной контроллер для домена рабочей станции:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4578:
	{
		MessageBox(NULL, (error_info + L"Блокировка после ошибок ввода пароля:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4579:
	{
		MessageBox(NULL, (error_info + L"Длительность блокировки (минут):").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4580:
	{
		MessageBox(NULL, (error_info + L"Сброс счетчика блокировок через (минут):").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4600:
	{
		MessageBox(NULL, (error_info + L"Статистика после").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4601:
	{
		MessageBox(NULL, (error_info + L"Принятые сеансы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4602:
	{
		MessageBox(NULL, (error_info + L"Сеансы с истекшим интервалом").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4603:
	{
		MessageBox(NULL, (error_info + L"Сеансы с ошибками").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4604:
	{
		MessageBox(NULL, (error_info + L"Послано КБ").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4605:
	{
		MessageBox(NULL, (error_info + L"Принято КБ").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4606:
	{
		MessageBox(NULL, (error_info + L"Среднее время отклика (мс)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4607:
	{
		MessageBox(NULL, (error_info + L"Ошибки сети").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4608:
	{
		MessageBox(NULL, (error_info + L"Доступ к файлам").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4609:
	{
		MessageBox(NULL, (error_info + L"Задания печати в очереди").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4610:
	{
		MessageBox(NULL, (error_info + L"Системные ошибки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4611:
	{
		MessageBox(NULL, (error_info + L"Нарушение паролей").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4612:
	{
		MessageBox(NULL, (error_info + L"Нарушение разрешений").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4613:
	{
		MessageBox(NULL, (error_info + L"Доступ к устройствам связи").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4614:
	{
		MessageBox(NULL, (error_info + L"Запущенные сеансы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4615:
	{
		MessageBox(NULL, (error_info + L"Переключенные сеансы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4616:
	{
		MessageBox(NULL, (error_info + L"Сбои при запуске сеансов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4617:
	{
		MessageBox(NULL, (error_info + L"Отключенные сеансы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4618:
	{
		MessageBox(NULL, (error_info + L"Сетевые операции ввода/вывода").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4619:
	{
		MessageBox(NULL, (error_info + L"Доступ к файлам и каналам").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4620:
	{
		MessageBox(NULL, (error_info + L"Исчерпанные буферы времени").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4621:
	{
		MessageBox(NULL, (error_info + L"Большие буферы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4622:
	{
		MessageBox(NULL, (error_info + L"Затребованные буферы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4623:
	{
		MessageBox(NULL, (error_info + L"Статистика рабочей станции для \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4624:
	{
		MessageBox(NULL, (error_info + L"Статистика сервера для \\\\%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4625:
	{
		MessageBox(NULL, (error_info + L"Статистика после %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4626:
	{
		MessageBox(NULL, (error_info + L"Выполненные подключения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4627:
	{
		MessageBox(NULL, (error_info + L"Неудачные подключения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4630:
	{
		MessageBox(NULL, (error_info + L"Получено байт").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4631:
	{
		MessageBox(NULL, (error_info + L"Принятые блоки сообщений сервера SMB").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4632:
	{
		MessageBox(NULL, (error_info + L"Передано байт").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4633:
	{
		MessageBox(NULL, (error_info + L"Переданные блоки сообщений сервера SMB").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4634:
	{
		MessageBox(NULL, (error_info + L"Операции чтения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4635:
	{
		MessageBox(NULL, (error_info + L"Операции записи").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4636:
	{
		MessageBox(NULL, (error_info + L"Отказано в чтении").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4637:
	{
		MessageBox(NULL, (error_info + L"Отказано в записи").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4638:
	{
		MessageBox(NULL, (error_info + L"Ошибки сети").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4639:
	{
		MessageBox(NULL, (error_info + L"Выполненные подключения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4640:
	{
		MessageBox(NULL, (error_info + L"Повторные подключения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4641:
	{
		MessageBox(NULL, (error_info + L"Отключений от сервера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4642:
	{
		MessageBox(NULL, (error_info + L"Запущенные сеансы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4643:
	{
		MessageBox(NULL, (error_info + L"Зависание сеансов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4644:
	{
		MessageBox(NULL, (error_info + L"Сбои в сеансах").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4645:
	{
		MessageBox(NULL, (error_info + L"Сбои в операциях").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4646:
	{
		MessageBox(NULL, (error_info + L"Счетчик использования").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4647:
	{
		MessageBox(NULL, (error_info + L"Счетчик сбоев при использовании").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4650:
	{
		MessageBox(NULL, (error_info + L"%1 успешно удален.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4651:
	{
		MessageBox(NULL, (error_info + L"%1 успешно использован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4652:
	{
		MessageBox(NULL, (error_info + L"Сообщение успешно отправлено %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4653:
	{
		MessageBox(NULL, (error_info + L"Имя сообщения %1 успешно направлено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4654:
	{
		MessageBox(NULL, (error_info + L"Имя сообщения %1 успешно добавлено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4655:
	{
		MessageBox(NULL, (error_info + L"Направление имени сообщения успешно отменено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4656:
	{
		MessageBox(NULL, (error_info + L"%1 успешно назначен общим.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4657:
	{
		MessageBox(NULL, (error_info + L"Вход на сервер %1 под именем %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4658:
	{
		MessageBox(NULL, (error_info + L"Для %1 успешно выполнен выход.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4659:
	{
		MessageBox(NULL, (error_info + L"%1 успешно удален из списка общих ресурсов, создаваемых серверомпри запуске.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4661:
	{
		MessageBox(NULL, (error_info + L"Пароль успешно изменен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4662:
	{
		MessageBox(NULL, (error_info + L"Скопировано файлов: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4663:
	{
		MessageBox(NULL, (error_info + L"Перемещено файлов: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4664:
	{
		MessageBox(NULL, (error_info + L"Сообщение успешно отослано всем пользователям в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4665:
	{
		MessageBox(NULL, (error_info + L"Сообщение успешно отослано в домен %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4666:
	{
		MessageBox(NULL, (error_info + L"Сообщение успешно отослано всем пользователям данного сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4667:
	{
		MessageBox(NULL, (error_info + L"Сообщение успешно отослано группе*%1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4695:
	{
		MessageBox(NULL, (error_info + L"Microsoft LAN Manager, версия %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4696:
	{
		MessageBox(NULL, (error_info + L"Windows NT Server").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4697:
	{
		MessageBox(NULL, (error_info + L"Windows NT Workstation").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4698:
	{
		MessageBox(NULL, (error_info + L"Рабочая станция MS-DOS").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4699:
	{
		MessageBox(NULL, (error_info + L"Создан в %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4700:
	{
		MessageBox(NULL, (error_info + L"Имя сервера Заметки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4702:
	{
		MessageBox(NULL, (error_info + L"(UNC)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4703:
	{
		MessageBox(NULL, (error_info + L"…").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4704:
	{
		MessageBox(NULL, (error_info + L"Домен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4705:
	{
		MessageBox(NULL, (error_info + L"Ресурсы на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4706:
	{
		MessageBox(NULL, (error_info + L"Неправильный поставщик сетевых услуг. Доступные сети:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4710:
	{
		MessageBox(NULL, (error_info + L"Диск").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4711:
	{
		MessageBox(NULL, (error_info + L"Печать").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4712:
	{
		MessageBox(NULL, (error_info + L"Порт").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4713:
	{
		MessageBox(NULL, (error_info + L"IPC").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4714:
	{
		MessageBox(NULL, (error_info + L"Состояние Локальный Удаленный Сеть").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4715:
	{
		MessageBox(NULL, (error_info + L"OK").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4716:
	{
		MessageBox(NULL, (error_info + L"Ожидание").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4717:
	{
		MessageBox(NULL, (error_info + L"Пауза").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4718:
	{
		MessageBox(NULL, (error_info + L"Отсоединен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4719:
	{
		MessageBox(NULL, (error_info + L"Ошибка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4720:
	{
		MessageBox(NULL, (error_info + L"Подключение").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4721:
	{
		MessageBox(NULL, (error_info + L"Переподключение").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4722:
	{
		MessageBox(NULL, (error_info + L"Состояние").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4723:
	{
		MessageBox(NULL, (error_info + L"Локальное имя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4724:
	{
		MessageBox(NULL, (error_info + L"Удаленное имя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4725:
	{
		MessageBox(NULL, (error_info + L"Тип ресурса").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4726:
	{
		MessageBox(NULL, (error_info + L"Открыто").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4727:
	{
		MessageBox(NULL, (error_info + L"Подключено").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4728:
	{
		MessageBox(NULL, (error_info + L"Нет доступа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4730:
	{
		MessageBox(NULL, (error_info + L"Общее имя Ресурс Заметки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4731:
	{
		MessageBox(NULL, (error_info + L"Имя общего ресурса").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4732:
	{
		MessageBox(NULL, (error_info + L"Ресурс").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4733:
	{
		MessageBox(NULL, (error_info + L"Очередь").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4734:
	{
		MessageBox(NULL, (error_info + L"Разрешение").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4735:
	{
		MessageBox(NULL, (error_info + L"Макс. число пользователей").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4736:
	{
		MessageBox(NULL, (error_info + L"Не ограничен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4737:
	{
		MessageBox(NULL, (error_info + L"Пользователи").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4738:
	{
		MessageBox(NULL, (error_info + L"Введенное сетевое имя может оказаться недоступным для некоторых рабочих станций MS-DOS.Использовать данное сетевое имя? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4739:
	{
		MessageBox(NULL, (error_info + L"Кэширование").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4740:
	{
		MessageBox(NULL, (error_info + L"Код Путь Пользователь # блокировок").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4741:
	{
		MessageBox(NULL, (error_info + L"Идентификатор файла").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4742:
	{
		MessageBox(NULL, (error_info + L"Блокировки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4743:
	{
		MessageBox(NULL, (error_info + L"Разрешения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4744:
	{
		MessageBox(NULL, (error_info + L"Имя общего ресурса").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4745:
	{
		MessageBox(NULL, (error_info + L"Тип").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4746:
	{
		MessageBox(NULL, (error_info + L"Используется как").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4747:
	{
		MessageBox(NULL, (error_info + L"Комментарий").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4750:
	{
		MessageBox(NULL, (error_info + L"Компьютер Пользователь Тип клиента Ожидание открытия").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4751:
	{
		MessageBox(NULL, (error_info + L"Компьютер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4752:
	{
		MessageBox(NULL, (error_info + L"Время сеанса").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4753:
	{
		MessageBox(NULL, (error_info + L"Время простоя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4754:
	{
		MessageBox(NULL, (error_info + L"Сетевое имя Тип Открыто").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4755:
	{
		MessageBox(NULL, (error_info + L"Тип клиента").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4756:
	{
		MessageBox(NULL, (error_info + L"Вход гостя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4770:
	{
		MessageBox(NULL, (error_info + L"Документы кэшируются вручную").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4771:
	{
		MessageBox(NULL, (error_info + L"Документы кэшируются автоматически").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4772:
	{
		MessageBox(NULL, (error_info + L"Программы и документы кэшируются автоматически").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4773:
	{
		MessageBox(NULL, (error_info + L"Кэширование отключено").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4774:
	{
		MessageBox(NULL, (error_info + L"Автоматически").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4775:
	{
		MessageBox(NULL, (error_info + L"Вручную").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4776:
	{
		MessageBox(NULL, (error_info + L"Документы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4777:
	{
		MessageBox(NULL, (error_info + L"Программы").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4778:
	{
		MessageBox(NULL, (error_info + L"Отсутствует").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4800:
	{
		MessageBox(NULL, (error_info + L"Имя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4801:
	{
		MessageBox(NULL, (error_info + L"Направлен на").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4802:
	{
		MessageBox(NULL, (error_info + L"Направлен вам от").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4803:
	{
		MessageBox(NULL, (error_info + L"Пользователи данного сервера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4804:
	{
		MessageBox(NULL, (error_info + L"Операция Net Send прервана нажатием клавиш Ctrl+Break пользователем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4810:
	{
		MessageBox(NULL, (error_info + L"Имя Задание # Размер Состояние").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4811:
	{
		MessageBox(NULL, (error_info + L"задания").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4812:
	{
		MessageBox(NULL, (error_info + L"Печать").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4813:
	{
		MessageBox(NULL, (error_info + L"Имя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4814:
	{
		MessageBox(NULL, (error_info + L"Задание №").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4815:
	{
		MessageBox(NULL, (error_info + L"Размер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4816:
	{
		MessageBox(NULL, (error_info + L"Состояние").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4817:
	{
		MessageBox(NULL, (error_info + L"Файл разделителя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4818:
	{
		MessageBox(NULL, (error_info + L"Комментарий").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4819:
	{
		MessageBox(NULL, (error_info + L"Приоритет").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4820:
	{
		MessageBox(NULL, (error_info + L"Печать после").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4821:
	{
		MessageBox(NULL, (error_info + L"Печать до").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4822:
	{
		MessageBox(NULL, (error_info + L"Обработчик заданий печати").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4823:
	{
		MessageBox(NULL, (error_info + L"Дополнительные сведения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4824:
	{
		MessageBox(NULL, (error_info + L"Параметры").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4825:
	{
		MessageBox(NULL, (error_info + L"Устройства печати").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4826:
	{
		MessageBox(NULL, (error_info + L"Активный принтер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4827:
	{
		MessageBox(NULL, (error_info + L"Задержанный принтер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4828:
	{
		MessageBox(NULL, (error_info + L"Ошибка принтера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4829:
	{
		MessageBox(NULL, (error_info + L"Принтер был удален").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4830:
	{
		MessageBox(NULL, (error_info + L"Состояние принтера неизвестно").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4840:
	{
		MessageBox(NULL, (error_info + L"Задержан до %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4841:
	{
		MessageBox(NULL, (error_info + L"Задание №").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4842:
	{
		MessageBox(NULL, (error_info + L"Получено от пользователя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4843:
	{
		MessageBox(NULL, (error_info + L"Уведомить").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4844:
	{
		MessageBox(NULL, (error_info + L"Тип данных задания").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4845:
	{
		MessageBox(NULL, (error_info + L"Параметры задания").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4846:
	{
		MessageBox(NULL, (error_info + L"Ожидание").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4847:
	{
		MessageBox(NULL, (error_info + L"Содержится в очереди").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4848:
	{
		MessageBox(NULL, (error_info + L"Постановка в очередь").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4849:
	{
		MessageBox(NULL, (error_info + L"Пауза").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4850:
	{
		MessageBox(NULL, (error_info + L"Отключение").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4851:
	{
		MessageBox(NULL, (error_info + L"Ошибка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4852:
	{
		MessageBox(NULL, (error_info + L"Нет бумаги").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4853:
	{
		MessageBox(NULL, (error_info + L"Требуется вмешательство").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4854:
	{
		MessageBox(NULL, (error_info + L"Идет печать").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4855:
	{
		MessageBox(NULL, (error_info + L"на").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4856:
	{
		MessageBox(NULL, (error_info + L"Пауза на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4857:
	{
		MessageBox(NULL, (error_info + L"Отключение на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4858:
	{
		MessageBox(NULL, (error_info + L"Ошибка на%1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4859:
	{
		MessageBox(NULL, (error_info + L"Нет бумаги на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4860:
	{
		MessageBox(NULL, (error_info + L"Проверка принтера на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4861:
	{
		MessageBox(NULL, (error_info + L"Печатается на %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4862:
	{
		MessageBox(NULL, (error_info + L"Драйвер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4930:
	{
		MessageBox(NULL, (error_info + L"Пользователь Тип Дата").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4931:
	{
		MessageBox(NULL, (error_info + L"Взаимоблокировка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4932:
	{
		MessageBox(NULL, (error_info + L"Служба").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4933:
	{
		MessageBox(NULL, (error_info + L"Сервер").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4934:
	{
		MessageBox(NULL, (error_info + L"Сервер запущен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4935:
	{
		MessageBox(NULL, (error_info + L"Пауза на сервере").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4936:
	{
		MessageBox(NULL, (error_info + L"Продолжение работы сервера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4937:
	{
		MessageBox(NULL, (error_info + L"Сервер остановлен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4938:
	{
		MessageBox(NULL, (error_info + L"Сеанс").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4939:
	{
		MessageBox(NULL, (error_info + L"Вход гостя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4940:
	{
		MessageBox(NULL, (error_info + L"Вход пользователя").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4941:
	{
		MessageBox(NULL, (error_info + L"Вход администратора").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4942:
	{
		MessageBox(NULL, (error_info + L"Обычный выход").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4943:
	{
		MessageBox(NULL, (error_info + L"Вход").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4944:
	{
		MessageBox(NULL, (error_info + L"Ошибка при выходе").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4945:
	{
		MessageBox(NULL, (error_info + L"Автоотключение при выходе").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4946:
	{
		MessageBox(NULL, (error_info + L"Отключение администратором при выходе").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4947:
	{
		MessageBox(NULL, (error_info + L"Выход из-за ограничений на число входов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4948:
	{
		MessageBox(NULL, (error_info + L"Служба").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4949:
	{
		MessageBox(NULL, (error_info + L"%1 установлена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4950:
	{
		MessageBox(NULL, (error_info + L"%1: ожидается установка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4951:
	{
		MessageBox(NULL, (error_info + L"%1 приостановлена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4952:
	{
		MessageBox(NULL, (error_info + L"%1: ожидается приостановка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4953:
	{
		MessageBox(NULL, (error_info + L"%1 продолжается").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4954:
	{
		MessageBox(NULL, (error_info + L"%1 ожидает продолжения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4955:
	{
		MessageBox(NULL, (error_info + L"%1 остановлена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4956:
	{
		MessageBox(NULL, (error_info + L"%1 ожидает остановки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4957:
	{
		MessageBox(NULL, (error_info + L"Учетная запись").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4958:
	{
		MessageBox(NULL, (error_info + L"Учетная запись пользователя %1 была изменена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4959:
	{
		MessageBox(NULL, (error_info + L"Учетная запись группы %1 была изменена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4960:
	{
		MessageBox(NULL, (error_info + L"Учетная запись пользователя %1 была удалена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4961:
	{
		MessageBox(NULL, (error_info + L"Учетная запись группы %1 была удалена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4962:
	{
		MessageBox(NULL, (error_info + L"Учетная запись пользователя %1 была добавлена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4963:
	{
		MessageBox(NULL, (error_info + L"Учетная запись группы %1 была добавлена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4964:
	{
		MessageBox(NULL, (error_info + L"Системные параметры записи были изменены").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4965:
	{
		MessageBox(NULL, (error_info + L"Ограничения на вход").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4966:
	{
		MessageBox(NULL, (error_info + L"Превышен предел: НЕИЗВЕСТНЫЙ").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4967:
	{
		MessageBox(NULL, (error_info + L"Превышен предел: Часы входа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4968:
	{
		MessageBox(NULL, (error_info + L"Превышен предел: Учетная запись просрочена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4969:
	{
		MessageBox(NULL, (error_info + L"Превышен предел: Неправильный код рабочей станции").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4970:
	{
		MessageBox(NULL, (error_info + L"Превышен предел: Учетная запись отключена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4971:
	{
		MessageBox(NULL, (error_info + L"Превышен предел: Учетная запись удалена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4972:
	{
		MessageBox(NULL, (error_info + L"Общий ресурс").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4973:
	{
		MessageBox(NULL, (error_info + L"Используется %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4974:
	{
		MessageBox(NULL, (error_info + L"Не используется %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4975:
	{
		MessageBox(NULL, (error_info + L"Отключение сеансов пользователя %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4976:
	{
		MessageBox(NULL, (error_info + L"Общее использование ресурса %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4977:
	{
		MessageBox(NULL, (error_info + L"Пользователем достигнут предел для %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4978:
	{
		MessageBox(NULL, (error_info + L"Неправильный пароль").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4979:
	{
		MessageBox(NULL, (error_info + L"Требуется привилегия администратора").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4980:
	{
		MessageBox(NULL, (error_info + L"Доступ").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4981:
	{
		MessageBox(NULL, (error_info + L"Добавлено разрешений: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4982:
	{
		MessageBox(NULL, (error_info + L"Изменено разрешений: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4983:
	{
		MessageBox(NULL, (error_info + L"Удалено разрешений: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4984:
	{
		MessageBox(NULL, (error_info + L"Отказано в доступе").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4985:
	{
		MessageBox(NULL, (error_info + L"Неизвестный").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4986:
	{
		MessageBox(NULL, (error_info + L"Другой").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4987:
	{
		MessageBox(NULL, (error_info + L"Длительность:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4988:
	{
		MessageBox(NULL, (error_info + L"Длительность: нет доступа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4989:
	{
		MessageBox(NULL, (error_info + L"Длительность: менее одной секунды").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4990:
	{
		MessageBox(NULL, (error_info + L"(отсутствует)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4991:
	{
		MessageBox(NULL, (error_info + L"Закрыт %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4992:
	{
		MessageBox(NULL, (error_info + L"Закрыт %1 (отключен)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4993:
	{
		MessageBox(NULL, (error_info + L"Администратор закрыл %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4994:
	{
		MessageBox(NULL, (error_info + L"Доступ закончен").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4995:
	{
		MessageBox(NULL, (error_info + L"Вход в сеть").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4996:
	{
		MessageBox(NULL, (error_info + L"Отказано во входе").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4997:
	{
		MessageBox(NULL, (error_info + L"Программа Сообщение Время").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4998:
	{
		MessageBox(NULL, (error_info + L"Учетная запись блокирована из-за %1 неправильных паролей").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4999:
	{
		MessageBox(NULL, (error_info + L"Учетная запись разблокирована администратором").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5000:
	{
		MessageBox(NULL, (error_info + L"Выход из сети").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5001:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера не может быть перемещен в другую групп, т.к. от него зависят другие ресурсы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5002:
	{
		MessageBox(NULL, (error_info + L"Не удается найти зависимость ресурса кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5003:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера нельзя сделать зависимым от указанного ресурса, т.к. он уже является зависимым.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5004:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера находится в автономном режиме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5005:
	{
		MessageBox(NULL, (error_info + L"Узел кластера недоступен для этой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5006:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера недоступен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5007:
	{
		MessageBox(NULL, (error_info + L"Не удается найти ресурс кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5008:
	{
		MessageBox(NULL, (error_info + L"Кластер отключен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5009:
	{
		MessageBox(NULL, (error_info + L"Узел кластера нельзя отделить от кластера, пока узел не будет отключен, или пока этот узел не является последним.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5010:
	{
		MessageBox(NULL, (error_info + L"Этот объект уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5011:
	{
		MessageBox(NULL, (error_info + L"Этот объект уже присутствует в списке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5012:
	{
		MessageBox(NULL, (error_info + L"Группа кластеров недоступна для новых запросов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5013:
	{
		MessageBox(NULL, (error_info + L"Не удается найти группу кластеров.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5014:
	{
		MessageBox(NULL, (error_info + L"Невозможно завершить эту операцию, т.к. группа кластеров недоступна по сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5015:
	{
		MessageBox(NULL, (error_info + L"Узел кластера не является владельцем этого ресурса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5016:
	{
		MessageBox(NULL, (error_info + L"Узел кластера не является владельцем этой группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5017:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера не может быть создан в указанном мониторе ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5018:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера не может быть подключен по сети с помощью монитора ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5019:
	{
		MessageBox(NULL, (error_info + L"Невозможно завершить эту операцию, т.к. ресурс кластера подключен по сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5020:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера не может быть удален или переведен в автономный режим, т.к. это ресурс кворума.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5021:
	{
		MessageBox(NULL, (error_info + L"Кластер не может сделать выбранный ресурс как ресурс кворума, т.к. у нет соответствующих характеристик.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5022:
	{
		MessageBox(NULL, (error_info + L"Идет завершение работы программного обеспечения кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5023:
	{
		MessageBox(NULL, (error_info + L"Группа или ресурс не находятся в нужном состоянии для выполнения требуемой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5024:
	{
		MessageBox(NULL, (error_info + L"Свойства были сохранены, но не все изменения смогут вступить в силу до тех пор, пока ресурс окажется в сети следующий раз.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5025:
	{
		MessageBox(NULL, (error_info + L"Кластер не может сделать существующий ресурс ресурсом кворума, т.к. это он не соответствует классу общего хранилища.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5026:
	{
		MessageBox(NULL, (error_info + L"Ресурс кластера не может быть удален, т.к. является ресурсом ядра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5027:
	{
		MessageBox(NULL, (error_info + L"Не удалось подключить к сети ресурс кворума.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5028:
	{
		MessageBox(NULL, (error_info + L"Не удается создать или подключить журнал кворума.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5029:
	{
		MessageBox(NULL, (error_info + L"Журнал кворума поврежден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5030:
	{
		MessageBox(NULL, (error_info + L"Эту запись сделать в журнале нельзя, т.к. превышен максимальный размер записи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5031:
	{
		MessageBox(NULL, (error_info + L"Размер журнал превысил максимально допустимое значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5032:
	{
		MessageBox(NULL, (error_info + L"В журнале кластера не найдено записи контрольной точки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5033:
	{
		MessageBox(NULL, (error_info + L"На диске отсутствует даже минимально необходимое место для размещения журнала.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5034:
	{
		MessageBox(NULL, (error_info + L"Узел кластера не смог взять управление над ресурсом кворума, т.к. этот ресурс принадлежит другому активному узлу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5035:
	{
		MessageBox(NULL, (error_info + L"Сеть кластеров недоступна для этой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5036:
	{
		MessageBox(NULL, (error_info + L"Узел кластера недоступен для этой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5037:
	{
		MessageBox(NULL, (error_info + L"Узлы кластеров должны быть во включенном состоянии для выполнения этой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5038:
	{
		MessageBox(NULL, (error_info + L"Ошибка ресурса кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5039:
	{
		MessageBox(NULL, (error_info + L"Недопустимый ресурс кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5040:
	{
		MessageBox(NULL, (error_info + L"Узел кластера уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5041:
	{
		MessageBox(NULL, (error_info + L"Идет процесс присоединения узла к кластеру.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5042:
	{
		MessageBox(NULL, (error_info + L"Узел кластера не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5043:
	{
		MessageBox(NULL, (error_info + L"Информация о локальном узле кластера не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5044:
	{
		MessageBox(NULL, (error_info + L"Сеть кластеров уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5045:
	{
		MessageBox(NULL, (error_info + L"Сеть кластеров не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5046:
	{
		MessageBox(NULL, (error_info + L"Интерфейс сети кластеров уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5047:
	{
		MessageBox(NULL, (error_info + L"Интерфейс сети кластеров не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5048:
	{
		MessageBox(NULL, (error_info + L"Недопустимый запрос от кластера к этому объекту.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5049:
	{
		MessageBox(NULL, (error_info + L"Недопустимый поставщик сетевого кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5050:
	{
		MessageBox(NULL, (error_info + L"Узел кластера отключен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5051:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к узлу кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5052:
	{
		MessageBox(NULL, (error_info + L"Этот узел кластера не входит в состав кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5053:
	{
		MessageBox(NULL, (error_info + L"Операция присоединения к кластеру не запущена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5054:
	{
		MessageBox(NULL, (error_info + L"Недопустимая сеть кластеров.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5055:
	{
		MessageBox(NULL, (error_info + L"Мар").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5056:
	{
		MessageBox(NULL, (error_info + L"Узел кластера включен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5057:
	{
		MessageBox(NULL, (error_info + L"IP-адрес кластера уже используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5058:
	{
		MessageBox(NULL, (error_info + L"Узел кластера не приостановлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5059:
	{
		MessageBox(NULL, (error_info + L"Контекст безопасности кластера недоступен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5060:
	{
		MessageBox(NULL, (error_info + L"Сеть кластеров не настроена для передачи данных внутри кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5061:
	{
		MessageBox(NULL, (error_info + L"Узел кластера уже включен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5062:
	{
		MessageBox(NULL, (error_info + L"Узел кластера уже отключен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5063:
	{
		MessageBox(NULL, (error_info + L"Сеть кластеров уже подключена по сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5064:
	{
		MessageBox(NULL, (error_info + L"Сеть кластеров уже находится в автономном режиме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5065:
	{
		MessageBox(NULL, (error_info + L"Этот узел кластера уже является членом кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5066:
	{
		MessageBox(NULL, (error_info + L"Только сеть кластеров настроена для взаимодействия между двумя или более активными узлами кластеров. Возможность внутренней связи между узлами не может быть удалена (из сети).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5067:
	{
		MessageBox(NULL, (error_info + L"Один или несколько ресурсов кластера используют сеть для работы клиентских служб. Нельзя удалить функцию доступа клиентов по сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5068:
	{
		MessageBox(NULL, (error_info + L"Данная операция не может быть выполнена на ресурсе кластера, т.к. это ресурс кворума. Нельзя переключить ресурс кворума в автономный режим или изменить его список возможных владельцев.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5069:
	{
		MessageBox(NULL, (error_info + L"Ресурс кворума кластера не может иметь никаких зависимых отношений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5070:
	{
		MessageBox(NULL, (error_info + L"Узел кластера приостановлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5071:
	{
		MessageBox(NULL, (error_info + L"Не удалось подключить ресурс кластера по сети. Узел владельца не может запустить этот ресурс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5072:
	{
		MessageBox(NULL, (error_info + L"Узел кластера не готов для выполнения запрошенной операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5073:
	{
		MessageBox(NULL, (error_info + L"Идет отключение узла кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5074:
	{
		MessageBox(NULL, (error_info + L"Операция присоединения к кластеру была прервана.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5075:
	{
		MessageBox(NULL, (error_info + L"Сбой операции присоединения к кластеру вследствие несовместимости версий программ между присоединяемым узлом и его спонсором.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5076:
	{
		MessageBox(NULL, (error_info + L"Невозможно создать ресурс, т.к. для кластера достигнут предел числа контролируемых ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5077:
	{
		MessageBox(NULL, (error_info + L"Конфигурация системы изменилась в течение операции формирования или присоединения к домену. Операция формирования или присоединения прервана.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5078:
	{
		MessageBox(NULL, (error_info + L"Указанный тип ресурса не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5079:
	{
		MessageBox(NULL, (error_info + L"Указанный узел не поддерживает ресурс такого типа. Это может быть вследствие несовпадения версий или отсутствия библиотеки ресурсов (DLL) на этом узле.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5080:
	{
		MessageBox(NULL, (error_info + L"Указанное имя ресурса не поддерживается этой библиотекой ресурсов (DLL). Это м.б. вследствие неверного (или поврежденного) имени, полученного библиотекой ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5081:
	{
		MessageBox(NULL, (error_info + L"Для RPC-сервера нельзя зарегистрировать пакеты проверки подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5082:
	{
		MessageBox(NULL, (error_info + L"Эту группу нельзя подключить по сети, т.к. владелец группы не находится в списке предпочтений группы. Чтобы изменить узел владельца для группы, переместите группу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5083:
	{
		MessageBox(NULL, (error_info + L"Сбой операции присоединения вследствие того, что номер последовательности базы данных кластера изменился или несовместим с узлом блокиратора.Это могло случиться в течение операции присоединения, если база данных кластера была изменена в тот момент.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5084:
	{
		MessageBox(NULL, (error_info + L"Монитор ресурсов не позволит выполнить ошибочную операци, пока ресурс находится в своем текущем состоянии. Это может случиться, если ресурс находится в состоянии ожидания.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5085:
	{
		MessageBox(NULL, (error_info + L"Код, не принадлежащий блокиратору, получил запрос на резервирование блока для проведения общего обновления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5086:
	{
		MessageBox(NULL, (error_info + L"Служба кластера не может найти диск кворума.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5087:
	{
		MessageBox(NULL, (error_info + L"Возможно, резервная копия базы данных кластера повреждена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5088:
	{
		MessageBox(NULL, (error_info + L"Корень DFS уже существует в этом узле кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5089:
	{
		MessageBox(NULL, (error_info + L"Не удалась попытка изменить свойство ресурса, т.к. имеется конфликт с другим существующим свойством.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5090:
	{
		MessageBox(NULL, (error_info + L"Испания").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5091:
	{
		MessageBox(NULL, (error_info + L"Дания").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5092:
	{
		MessageBox(NULL, (error_info + L"Швеция").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5093:
	{
		MessageBox(NULL, (error_info + L"Норвегия").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5094:
	{
		MessageBox(NULL, (error_info + L"Германия").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5095:
	{
		MessageBox(NULL, (error_info + L"Австралия").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5096:
	{
		MessageBox(NULL, (error_info + L"Япония").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5097:
	{
		MessageBox(NULL, (error_info + L"Корея").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5098:
	{
		MessageBox(NULL, (error_info + L"Китай (КНР)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5099:
	{
		MessageBox(NULL, (error_info + L"Тайвань").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5100:
	{
		MessageBox(NULL, (error_info + L"Азия").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5101:
	{
		MessageBox(NULL, (error_info + L"Португалия").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5102:
	{
		MessageBox(NULL, (error_info + L"Финляндия").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5103:
	{
		MessageBox(NULL, (error_info + L"Арабский").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5104:
	{
		MessageBox(NULL, (error_info + L"Иврит").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5150:
	{
		MessageBox(NULL, (error_info + L"Сбой питания на %1. Прекратите все действия с этим сервером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5151:
	{
		MessageBox(NULL, (error_info + L"Питание восстановлено на %1. Возобновлены нормальные операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5152:
	{
		MessageBox(NULL, (error_info + L"Служба UPS начинает отключение %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5153:
	{
		MessageBox(NULL, (error_info + L"Служба UPS приступает к окончательному отключению.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5170:
	{
		MessageBox(NULL, (error_info + L"Для запуска рабочей станции необходима команда NET START.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5175:
	{
		MessageBox(NULL, (error_info + L"Удаленный IPC").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5176:
	{
		MessageBox(NULL, (error_info + L"Удаленный Admin").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5177:
	{
		MessageBox(NULL, (error_info + L"Стандартный общий ресурс").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5280:
	{
		MessageBox(NULL, (error_info + L"Введенный пароль длиннее 14 символов. Компьютеры с версиейWindows, предшествующей Windows 2000, не смогут использовать эту учетную запись. Продолжить эту операцию? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5281:
	{
		MessageBox(NULL, (error_info + L"%1 имеет запоминаемое подключение к %2.Переписать запоминаемое подключение? %3:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5282:
	{
		MessageBox(NULL, (error_info + L"Возобновить загрузку конфигурации? Команда, вызвавшая ошибку,будет игнорироваться. %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5284:
	{
		MessageBox(NULL, (error_info + L"Продолжить операцию? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5285:
	{
		MessageBox(NULL, (error_info + L"Добавить следующее? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5286:
	{
		MessageBox(NULL, (error_info + L"Продолжить операцию? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5287:
	{
		MessageBox(NULL, (error_info + L"Запустить? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5288:
	{
		MessageBox(NULL, (error_info + L"Запустить службу рабочей станции? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5289:
	{
		MessageBox(NULL, (error_info + L"Продолжить отключение и закрыть? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5290:
	{
		MessageBox(NULL, (error_info + L"Принтер не существует. Создать? %1:").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5291:
	{
		MessageBox(NULL, (error_info + L"Никогда").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5292:
	{
		MessageBox(NULL, (error_info + L"Никогда").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5293:
	{
		MessageBox(NULL, (error_info + L"Никогда").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5295:
	{
		MessageBox(NULL, (error_info + L"NET.HLP").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5296:
	{
		MessageBox(NULL, (error_info + L"NET.HLP").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5300:
	{
		MessageBox(NULL, (error_info + L"Запрос сетевого управляющего блока (NCB) успешно завершен.Данные содержат NCB.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5301:
	{
		MessageBox(NULL, (error_info + L"Недопустимый размер буфера сетевого управляющего блока (NCB) на SEND DATAGRAM,SEND BROADCAST, ADAPTER STATUS или SESSION STATUS.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5302:
	{
		MessageBox(NULL, (error_info + L"В сетевом управляющем блоке (NCB) указан недопустимый массив дескрипторовданных. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5303:
	{
		MessageBox(NULL, (error_info + L"В сетевом управляющем блоке (NCB) указана недопустимая команда.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5304:
	{
		MessageBox(NULL, (error_info + L"В сетевом управляющем блоке (NCB) указан недопустимый корреляторсообщений. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5305:
	{
		MessageBox(NULL, (error_info + L"Истек интервал ожидания команды сетевого управляющего блока (NCB). Возможноаномальное завершение сеанса. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5306:
	{
		MessageBox(NULL, (error_info + L"Получено неполное сообщение сетевого управляющего блока (NCB).NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5307:
	{
		MessageBox(NULL, (error_info + L"В сетевом управляющем блоке (NCB) указан недопустимый адрес буфера.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5308:
	{
		MessageBox(NULL, (error_info + L"Сеанс с номером, указанным в сетевом управляющем блоке (NCB), не активен.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5309:
	{
		MessageBox(NULL, (error_info + L"Нет ресурса, доступного для сетевой платы.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5310:
	{
		MessageBox(NULL, (error_info + L"Сеанс, указанный в сетевом управляющем блоке (NCB), был закрыт.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5311:
	{
		MessageBox(NULL, (error_info + L"Команда сетевого управляющего блока (NCB) была отменена.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5312:
	{
		MessageBox(NULL, (error_info + L"Сегмент сообщения, указанный в сетевом управляющем блоке (NCB),не имеет смысла. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5313:
	{
		MessageBox(NULL, (error_info + L"Имя уже существует в локальной таблице имен адаптеров.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5314:
	{
		MessageBox(NULL, (error_info + L"Таблиц имен сетевых адаптеров заполнена.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5315:
	{
		MessageBox(NULL, (error_info + L"Для сетевого имени имеются активные сеансы. Выполняется отключение.Выполнение команды сетевого управляющего блока (NCB) завершено. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5316:
	{
		MessageBox(NULL, (error_info + L"Ранее полученная команда Receive Lookahead активнав данном сеансе. Команде сетевого управляющего блока (NCB) отказано в выполнении.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5317:
	{
		MessageBox(NULL, (error_info + L"Таблица локальных сеансов заполнена. Отказ на запрос сетевого управляющего блока (NCB).NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5318:
	{
		MessageBox(NULL, (error_info + L"Отказ в открытии сеанса сетевого управляющего блока (NCB). Нет команд LISTENна удаленном компьютере. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5319:
	{
		MessageBox(NULL, (error_info + L"В сетевом управляющем блоке (NCB) указан недопустимый номер имени.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5320:
	{
		MessageBox(NULL, (error_info + L"Вызываемое имя, указанное в сетевом управляющем блоке (NCB), не найденоили не отвечает. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5321:
	{
		MessageBox(NULL, (error_info + L"Имя, указанное в сетевом управляющем блоке (NCB), не найдено. Нельзя включать ‘*\\' или00h в имя в NCB. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5322:
	{
		MessageBox(NULL, (error_info + L"Имя, указанное в сетевом управляющем блоке (NCB), используется удаленным адаптером.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5323:
	{
		MessageBox(NULL, (error_info + L"Имя, указанное в сетевом управляющем блоке (NCB), было удалено.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5324:
	{
		MessageBox(NULL, (error_info + L"Аномальное завершение сеанса, указанного в сетевом управляющем блоке (NCB).NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5325:
	{
		MessageBox(NULL, (error_info + L"Сетевой протокол удалил два или несколько одинаковыхимен в сети.	Сетевой управляющий блок (NCB) представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5326:
	{
		MessageBox(NULL, (error_info + L"Принят неправильный пакет протокола. Возможно, существуетнесовместимое удаленное устройство. Сетевой управляющий блок (NCB) представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5333:
	{
		MessageBox(NULL, (error_info + L"Интерфейс NetBIOS занят.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5334:
	{
		MessageBox(NULL, (error_info + L"Слишком много ожидающих команд в сетевом управляющем блоке (NCB).Отказ на запрос (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5335:
	{
		MessageBox(NULL, (error_info + L"В сетевом управляющем блоке (NCB) указан неправильный номер платы.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5336:
	{
		MessageBox(NULL, (error_info + L"Команда сетевого управляющего блока (NCB) была завершена в момент команды отмены.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5337:
	{
		MessageBox(NULL, (error_info + L"Имя, указанное в сетевом управляющем блоке (NCB), зарезервировано.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5338:
	{
		MessageBox(NULL, (error_info + L"Команда сетевого управляющего блока (NCB) не допускает отмены.NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5351:
	{
		MessageBox(NULL, (error_info + L"Имеется несколько запросов сетевых управляющих блоков (NCB) на один сеанс.Отказ на запрос NCB. NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5352:
	{
		MessageBox(NULL, (error_info + L"Ошибка сетевой платы. Единственной допустимой командой NetBIOSявляется команда NCB RESET. Сетевой управляющий блок (NCB) представляетданные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5354:
	{
		MessageBox(NULL, (error_info + L"Превышено максимальное число приложений.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5356:
	{
		MessageBox(NULL, (error_info + L"Затребованные ресурсы недоступны.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5364:
	{
		MessageBox(NULL, (error_info + L"Системная ошибка.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5365:
	{
		MessageBox(NULL, (error_info + L"Сбой контрольной суммы ROM.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5366:
	{
		MessageBox(NULL, (error_info + L"Сбой при проверке RAM.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5367:
	{
		MessageBox(NULL, (error_info + L"Ошибка цифрового сигнала замыкания на себя.Отказ на запрос сетевого управляющего блока (NCB). NCB представлен в данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5368:
	{
		MessageBox(NULL, (error_info + L"Ошибка аналогового сигнала замыкания на себя.Отказ на запрос сетевого управляющего блока (NCB). NCB представлен в данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5369:
	{
		MessageBox(NULL, (error_info + L"Сбой интерфейса.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5370:
	{
		MessageBox(NULL, (error_info + L"Возвращен нераспознаваемый код сетевого управляющего блока (NCB).NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5380:
	{
		MessageBox(NULL, (error_info + L"Неисправность сетевой платы.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5381:
	{
		MessageBox(NULL, (error_info + L"Ожидается команда сетевого управляющего блока (NCB).NCB представляет данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5500:
	{
		MessageBox(NULL, (error_info + L"Журнал обновлений на %1 заполнен более чем на 80%%. Основнойконтроллер домена %2 прекратил загрузку обновлений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5501:
	{
		MessageBox(NULL, (error_info + L"Журнал обновлений на %1 заполнен. Добавление обновленийневозможно, пока основной контроллер домена %2загружает обновления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5502:
	{
		MessageBox(NULL, (error_info + L"Разница во времени с основным контроллером домена %1превышает максимальный сдвиг в %2 с.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5503:
	{
		MessageBox(NULL, (error_info + L"Учетная запись пользователя %1 заблокирована на %2из-за %3 попыток с неправильным паролем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5504:
	{
		MessageBox(NULL, (error_info + L"Не удалось открыть файл журнала %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5505:
	{
		MessageBox(NULL, (error_info + L"Файл журнала %1 поврежден и будет очищен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5506:
	{
		MessageBox(NULL, (error_info + L"Не удается открыть файл журнала приложений. «%1» будет использоваться как файл журнала по умолчанию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5507:
	{
		MessageBox(NULL, (error_info + L"Журнал %1 заполнен. Если это сообщение появляется в первый раз, выполнитеследующие действия:Пуск, Настройка, Панель управления, Администрирование, Просмотр событийВыберите журнал %1, в меню «Действие» выберите «Стереть все события»,и откажитесь от сохранения.Если сообщение продолжает появляться, обратитесь к системному администратору.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5508:
	{
		MessageBox(NULL, (error_info + L"Сервер %1 начал полную синхронизацию базы данных защиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5509:
	{
		MessageBox(NULL, (error_info + L"Невозможно запустить Windows 2000 в текущей конфигурации.Использована предыдущая рабочая конфигурация.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5510:
	{
		MessageBox(NULL, (error_info + L"Ошибка 0x%1 в приложении %2 в позиции 0x%3.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5511:
	{
		MessageBox(NULL, (error_info + L"Серверы %1 и %3 одновременно претендуют на роль контроллера домена NTдля домена %2. Необходимо удалить из домена один из серверов,поскольку эти серверы имеют разные идентификаторы системы защиты(SID).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5512:
	{
		MessageBox(NULL, (error_info + L"Серверы %1 и %2 одновременно претендуют на рольосновного контроллера домена %3. Роль одного из серверов должна бытьпонижена или он должен быть удален из домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5513:
	{
		MessageBox(NULL, (error_info + L"Компьютер %1 пытается подключиться к серверу %2 с использованиемдоверительных отношений, установленных доменом %3.Однако компьютер потерял правильный идентификатор защиты (SID)при изменении конфигурации домена. Восстановитедоверительные отношения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5514:
	{
		MessageBox(NULL, (error_info + L"Компьютер перезагружен после отладки. Отладка:%1.%2Полная копия памяти не сохранена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5515:
	{
		MessageBox(NULL, (error_info + L"Компьютер перезагружен после отладки. Отладка:%1.%2Копия памяти сохранена в: %3.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5516:
	{
		MessageBox(NULL, (error_info + L"Компьютер или домен %1 доверяет домену %2. (Возможны косвенныедоверительные отношения). Однако %1 и %2 имеют одинаковые идентификаторызащиты (SID). Необходимо переустановить NT на %1 или %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5517:
	{
		MessageBox(NULL, (error_info + L"Компьютер или домен %1 доверяет домену %2. (Возможны косвенные доверительныеотношения). Однако %2 не является допустимым именем для доверенного домена.Необходимо изменить имя доверенного домена на допустимое.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5600:
	{
		MessageBox(NULL, (error_info + L"Не удалось сделать общим путь к папкам User или Script.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5601:
	{
		MessageBox(NULL, (error_info + L"Пароль данного компьютера не найден в локальнойбазе данных зашиты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5602:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка при доступе к локальнойили сетевой базе данных защиты компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5700:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon не может успешно инициализировать структурырепликации данных. Служба остановлена.Ошибка: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5701:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon не смогла обновить список доверительных отношений домена.Ошибка: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5702:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon не смогла добавить интерфейс RPC.Служба остановлена. Ошибка: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5703:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon не может прочитать сообщение в слоте от %1из-за ошибки: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5704:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon не может зарегистрировать службув котроллере служб. Служба остановлена.Ошибка: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5705:
	{
		MessageBox(NULL, (error_info + L"Буфер журнала изменений, поддерживаемый службой Netlogonдля изменений базы данных, поврежден. Служба Netlogonвосстанавливает исходное состояние журнала изменений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5706:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon не может создать общий ресурс сервера %1.Ошибка: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5707:
	{
		MessageBox(NULL, (error_info + L"Сбой в запросе нижнего уровня на вход для пользователя %1 от %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5708:
	{
		MessageBox(NULL, (error_info + L"Сбой в запросе нижнего уровня на выход для пользователя %1 от %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5709:
	{
		MessageBox(NULL, (error_info + L"Сбой в запросе на вход в Windows NT или Windows 2000 %1 для пользователя %2\\%3 от %4 (через %5).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5710:
	{
		MessageBox(NULL, (error_info + L"Сбой в запросе на выход из Windows NT или Windows 2000 %1 для пользователя %2\\%3 от %4.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5711:
	{
		MessageBox(NULL, (error_info + L"Запрос на частичную синхронизацию от сервера %1 выполненуспешно. %2 изменений возвращеновызывающему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5712:
	{
		MessageBox(NULL, (error_info + L"Запрос на частичную синхронизацию от сервера %1 не выполнен.Ошибка: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5713:
	{
		MessageBox(NULL, (error_info + L"Запрос на полную синхронизацию от сервера %1 выполненуспешно. %2 объект(ов) возвращеновызывающему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5714:
	{
		MessageBox(NULL, (error_info + L"Запрос на полную синхронизацию от сервера %1 не выполнен.Ошибка: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5715:
	{
		MessageBox(NULL, (error_info + L"Частичная синхронизация реплицированной базы данных %1 основным контроллером домена %2 выполнена успешно. %3 измененийв базе данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5716:
	{
		MessageBox(NULL, (error_info + L"Частичная синхронизация реплицированной базы данных %1 основным контроллером домена %2 не выполнена. Ошибка: %3").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5717:
	{
		MessageBox(NULL, (error_info + L"Полная синхронизация реплицированной базы данных %1 основным контроллером домена %2 выполнена успешно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5718:
	{
		MessageBox(NULL, (error_info + L"Полная синхронизация реплицированной базы данных %1 основным контроллером домена %2 не выполнена. Ошибка: %3").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5719:
	{
		MessageBox(NULL, (error_info + L"Для домена %1 нет доступного контроллера домена. Ошибка: %2.Убедитесь в том, что компьютер подключен к сети и повторите попытку.Если ошибка повторяется, обратитесь к сетевому администратору.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5720:
	{
		MessageBox(NULL, (error_info + L"Установка сеанса к контроллеру домена Windows NT или Windows 2000 %1 для домена %2не выполнена, так как компьютер %3 не имеет учетной записи в локальной базе данных безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5721:
	{
		MessageBox(NULL, (error_info + L"Установка сеанса к контроллеру домена Windows NT или Windows 2000 %1 для домена %2не выполнена, так как контроллер домена не имеет учетнойзаписи для компьютера %3.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5722:
	{
		MessageBox(NULL, (error_info + L"При установке сеанса с компьютера %1 не получено подтверждение имен.В базе данных безопасности содержатся ссылки на учетные записи%2. Ошибка: %3").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5723:
	{
		MessageBox(NULL, (error_info + L"Установка сеанса с компьютера %1 не выполнена, так как для этого компьютерав базе данных защиты нет учетной записи с доверительными отношениями.В базе данных защиты содержится ссылка на учетную запись %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5724:
	{
		MessageBox(NULL, (error_info + L"Не удалось зарегистрировать обработчик команд для контроллера службы %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5725:
	{
		MessageBox(NULL, (error_info + L"Не удалось задать состояние службы в контроллере службы %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5726:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти имя компьютера %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5727:
	{
		MessageBox(NULL, (error_info + L"Не удалось загрузить драйвер устройства %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5728:
	{
		MessageBox(NULL, (error_info + L"Не удалось загрузить ни один транспорт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5729:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 объекта домена «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5730:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 глобальной группы «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5731:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 локальной группы «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5732:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 пользователя «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5733:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 объекта политики «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5734:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 объекта доверенного домена «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5735:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 объекта учетной записи «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5736:
	{
		MessageBox(NULL, (error_info + L"Репликация %1 секрета «%2» основным контроллером домена%3 не выполнена. Ошибка: %4").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5737:
	{
		MessageBox(NULL, (error_info + L"Система возвращает следующий код неизвестной ошибки: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5738:
	{
		MessageBox(NULL, (error_info + L"Служба Netlogon обнаружила две учетные записи машины для сервера «%1».Сервер может быть либо сервером Windows 2000, который является членомдомена, либо сервером диспетчера LAN с учетной записью в глобальнойгруппе SERVERS. Выполнять обе роли одновременно невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5739:
	{
		MessageBox(NULL, (error_info + L"Этот домен содержит больше глобальных групп, чем может быть реплицировано LanManBDC. Либо удалите часть глобальных групп, либо удалите LanManBDC из домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5740:
	{
		MessageBox(NULL, (error_info + L"Драйвер координатора сети возвращает следующую ошибку службе Netlogon: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5741:
	{
		MessageBox(NULL, (error_info + L"Netlogon не может зарегистрировать имя %1<1B> по следующей причине: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5742:
	{
		MessageBox(NULL, (error_info + L"Служба не может загрузить сообщения, требуемые для загрузки клиентов удаленной загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5743:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила серьезную ошибку и не может обеспечить удаленную загрузкудля клиентов 3Com 3Start.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5744:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила серьезную системную ошибку и закрывается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5745:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не подтвердил приемзагрузочных данных. Удаленная загрузка этого клиента не завершена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5746:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен из-за ошибкипри открытии файла %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5747:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен из-за ошибкипри чтении файла %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5748:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен из-за недостаткапамяти на сервере загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5749:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 будет загружен без использования контрольных сумм,так как не удалось найти контрольную сумму для файла %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5750:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен из-за слишкомбольшого числа строк в файле %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5751:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен, так как блок загрузкифайла настройки %2 для данного клиента не содержит строкиблока загрузки и/или строки загрузчика.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5752:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен из-за неправильногоразмера файла %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5753:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен из-за внутреннейошибки сервера загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5754:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен, так как файл %2имеет неправильный загрузочный заголовок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5755:
	{
		MessageBox(NULL, (error_info + L"Клиент с именем компьютера %1 не был загружен из-за ошибки в сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5756:
	{
		MessageBox(NULL, (error_info + L"Клиент с кодом адаптера %1 не был загружен из-за недостатка ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5757:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при копировании файла или каталога %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5758:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при удалении файла или каталога %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5759:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при установке разрешений для файла или каталога %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5760:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при проверке настройки RPL.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5761:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при создании конфигураций RPL для всех настроек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5762:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при доступе к реестру.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5763:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при замене просроченного файла RPLDISK.SYS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5764:
	{
		MessageBox(NULL, (error_info + L"Служба обнаружила ошибку при добавлении учетных записей защиты или установкеразрешений к файлам. Эти записи входят в локальную группу RPLUSERлибо являются записями на отдельных рабочих станциях RPL.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5765:
	{
		MessageBox(NULL, (error_info + L"Служба не смогла выполнить резервирование собственной базы данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5766:
	{
		MessageBox(NULL, (error_info + L"Служба не смогла выполнить инициализацию по своей базе данных. Вероятно,база данных отсутствует или повреждена. Предпринимается попытка восстановитьбазу данных по резервной копии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5767:
	{
		MessageBox(NULL, (error_info + L"Служба не смогла восстановить собственную базу данных по резервной копии.Служба запущена не будет.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5768:
	{
		MessageBox(NULL, (error_info + L"Служба успешно восстановила собственную базу данных по резервной копии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5769:
	{
		MessageBox(NULL, (error_info + L"Служба не смогла выполнить инициализацию по восстановленной базе данных.Служба запущена не будет.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5770:
	{
		MessageBox(NULL, (error_info + L"Установка сеанса к котроллеру домена Windows NT или Windows 2000 %1 с компьютера%2 с помощью учетной записи %4 не выполнена. %2 объявлен резервным контроллером домена %3.Однако, %2 пытается подключиться либо как контроллер в доверенном домене,либо как рабочая станция в домене %3, либо как сервер в домене %3.С помощью диспетчера серверов или программы Active Directory «Пользователи и компьютеры» удалите учетную запись резервного контроллера домена для %2.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5771:
	{
		MessageBox(NULL, (error_info + L"База данных удаленной загрузки с сервера имеет формат NT 3.5 / NT 3.51.NT пытается конвертировать ее в формат NT 4.0. Конвертер JETCONVпосле окончания работы внесет запись в журнал событий приложений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5772:
	{
		MessageBox(NULL, (error_info + L"Непустая глобальная группа SERVERS существует в домене %1.Эта группа определяет резервные контроллеры домена Lan Manager в этом домене.Резервные контроллеры Lan Manager недопустимы в доменах NT.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5773:
	{
		MessageBox(NULL, (error_info + L"DNS-сервер (с IP-адресом %1) для этого контроллера домена не поддерживает динамическую DNS. Добавьте DNS-записи из файла ‘%SystemRoot%\\System32\\Config\\netlogon.dns\\' на DNS-сервер, обслуживающий домен, на который есть ссылка в этом файле. DNS-сервер возвратил код ошибки, указанный в поле данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5774:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить регистрацию DNS-записи ‘%1\\' на DNS-сервере (с IP-адресом %3)из-за следующей ошибки: %2.DNS-сервер возвратил код ошибки, указанный в поле данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5775:
	{
		MessageBox(NULL, (error_info + L"Не удалось отменить регистрацию DNS-записи ‘%1\\' на DNS-сервере (с IP-адресом %3)из-за следующей ошибки: %2.DNS-сервер возвратил код ошибки, указанный в поле данных.Хотя это не является критической ошибкой и не нарушает нормальную работуконтроллера домена, настоятельно рекомендуется удалить эту запись из DNS,чтобы предотвратить лишние подключения к этому компьютеру.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5776:
	{
		MessageBox(NULL, (error_info + L"Не удалось создать или открыть файл %1 из-за следующей ошибки: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5777:
	{
		MessageBox(NULL, (error_info + L"Получена следующая ошибка Netlogon при попытке получения информациисопоставления подсети и сайта из службы каталогов: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5778:
	{
		MessageBox(NULL, (error_info + L"‘%1\\' пытался определить свой сайт, выполняя поиск своего IP-адреса (‘%2\\')в контейнере Configuration\\Sites\\Subnets службы каталогов. Ни одна подсетьне соответствует этому IP-адресу. Возможно, следует добавить объект-подсеть для этого IP-адреса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5779:
	{
		MessageBox(NULL, (error_info + L"Имя сайта для этого компьютера — «%1». Это имя сайта не является допустимым именем сайта. Имя сайта должно быть допустимым именем DNS.Переименуйте этот сайт, дав ему допустимое имя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5780:
	{
		MessageBox(NULL, (error_info + L"Объект подсети «%1» находится в контейнере Configuration\\Sites\\Subnetsв DS. Это имя имеет синтаксическую ошибку. Правильный синтаксис — xx.xx.xx.xx/yy, где xx.xx.xx.xx — это допустимый IP-номер подсети,а yy — это длина в битах для маски подсети.Исправьте имя для объекта подсети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5781:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить динамическую регистрацию или отмену регистрации одной или нескольких DNS-записей, поскольку нет доступных DNS-серверов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5782:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить динамическую регистрацию или отмену регистрации одной или нескольких DNS-записей из-за следующей ошибки: %1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5783:
	{
		MessageBox(NULL, (error_info + L"Установка сеанса к контроллеру домена Windows NT или Windows 2000 %1 для домена %2не отвечает. Текущий вызов RPC от Netlogon на \\\\%3 к %1 отменен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5784:
	{
		MessageBox(NULL, (error_info + L"Сайт ‘%2\\' не имеет контроллеров домена для домена ‘%3\\'.Контроллеры домена сайта ‘%1\\' были автоматически выбраны для обслуживания сайта ‘%2\\' для домена ‘%3\\' на основании настройки параметров стоимостирепликации на сервере каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5785:
	{
		MessageBox(NULL, (error_info + L"Этот контроллер домена больше не будет автоматически обслуживать сайт ‘%1\\' для домена ‘%2\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5786:
	{
		MessageBox(NULL, (error_info + L"Сайт ‘%2\\' не имеет серверов глобального каталога.Серверы глобального каталога сайта ‘%1\\' были автоматически выбраны для обслуживания сайта ‘%2\\' для леса ‘%3\\' на основании настройки параметров стоимостирепликации на сервере каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5787:
	{
		MessageBox(NULL, (error_info + L"Этот сервер глобального каталога больше не будет автоматически обслуживать сайт ‘%1\\' для леса ‘%2\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5788:
	{
		MessageBox(NULL, (error_info + L"Не удалось обновить имена участника службы (SPN) для объекта-компьютера в службе каталогов Active Directory. Обновляемые значения — ‘%1\\' и ‘%2\\'.Произошла следующая ошибка: %3").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5789:
	{
		MessageBox(NULL, (error_info + L"Не удалось обновить имя узла DNS для объекта-компьютера в службе каталогов Active Directory. Обновляемое значение — ‘%1\\'.Произошла следующая ошибка: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5790:
	{
		MessageBox(NULL, (error_info + L"Не найдено подходящего контроллера домена для домена %1. Найден контроллер домена NT4 или более старый, но он не может использоваться для проверки подлинности в домене Windows 2000 или более новом домене, членом которого является этот компьютер. Произошла следующая ошибка:%2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5791:
	{
		MessageBox(NULL, (error_info + L"Домен этого компьютера, %1 был понижен в роли от Windows 2000 или более нового до Windows NT4 или более старого. Этот компьютер более не может использоваться для проверки подлинности. Этот компьютер надо заново присоединить к домену.Произошла следующая ошибка:%2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5792:
	{
		MessageBox(NULL, (error_info + L"Сайт ‘%2\\' не имеет LDAP-серверов для недоменного контекста именования ‘%3\\'.LDAP-серверы в сайте ‘%1\\' были автоматически выбраны для обслуживания сайта ‘%2\\' для недоменного контекста именования ‘%3\\' на основании настройки параметров стоимости репликации на сервере каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5793:
	{
		MessageBox(NULL, (error_info + L"Этот LDAP-сервер больше не будет автоматически обслуживать сайт ‘%1\\' для недоменного контекста именования ‘%2\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5794:
	{
		MessageBox(NULL, (error_info + L"Сайт ‘%2\\' больше не сконфигурирован вручную в реестре как обслуживаемый этим контроллером домена для домена ‘%3\\'. В результате сайт ‘%2\\' больше не имел контроллеров домена для домена ‘%3\\'. Контроллеры домена сайта ‘%1\\' были автоматически выбраны для обслуживания сайта ‘%2\\' для домена ‘%3\\' на основании настройки параметров стоимости репликации на сервере каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5795:
	{
		MessageBox(NULL, (error_info + L"Этот контроллер домена более не охватывает сайт ‘%1′ для домена\\'%2\\' автоматически.Однако, сайт ‘%1\\' все еще охватывается (не автоматически) этим контроллер домена для домена ‘%2\\', поскольку этот сайт был вручную настроен в реестре.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5796:
	{
		MessageBox(NULL, (error_info + L"Сайт ‘%2\\' больше не сконфигурирован вручную в реестре как обслуживаемый этим сервером глобального каталога для леса ‘%3\\'. В результате сайт ‘%2\\' больше не имел серверов глобального каталога для леса ‘%3\\'. Серверы глобального каталога сайта ‘%1\\' были автоматически выбраны для обслуживания сайта ‘%2\\' для леса ‘%3\\' на основании настройки параметров стоимости репликации на сервере каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5797:
	{
		MessageBox(NULL, (error_info + L"Этот сервер глобального каталога более не охватывает сайт ‘%1\\' для леса ‘%2\\' автоматически.However, сайт ‘%1\\' все еще охватывается (не автоматически) этим сервером глобального каталога для леса ‘%2\\', поскольку этот сайт был вручную настроен в реестре.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5798:
	{
		MessageBox(NULL, (error_info + L"Сайт ‘%2\\' больше не сконфигурирован вручную в реестре как обслуживаемый этим LDAP-сервером для недоменного контекста именования ‘%3\\'. В результате сайт ‘%2\\'больше не имел LDAP-серверов для недоменного контекста именования ‘%3\\'. LDAP-серверы в сайте ‘%1\\' были автоматически выбраны для обслуживания сайта ‘%2\\' для недоменного контекста именования ‘%3\\' на основании настройки параметров стоимости репликации на сервере каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5799:
	{
		MessageBox(NULL, (error_info + L"Этот LDAP-сервер более не охватывает сайт ‘%1\\' для недоменного контекста именования ‘%2\\' автоматически. Однако, сайт ‘%1\\' все еще охватывается (не автоматически) этим LDAP-сервером для недоменного контекста именования ‘%2\\', поскольку этот сайт был вручную настроен в реестре.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5800:
	{
		MessageBox(NULL, (error_info + L"Не удалось обновить атрибуты DnsHostName и имени участника службы (SPN) для объекта-компьютера в службе каталогов Active Directory, поскольку контроллер домена ‘%1\\' содержит более одной учетной записи с именем ‘%2\\', соответствующим этому компьютеру.Если SPN останется незарегистрированным, это может привести к ошибкам проверки подлинности для этого компьютера.Обратитесь к сетевому администратору, поскольку может понадобиться устранение конфликта учетных записей вручную.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5801:
	{
		MessageBox(NULL, (error_info + L"Не удалось обновить атрибуты DnsHostName и имени участника службы (SPN) для объекта-компьютера в службе каталогов Active Directory, поскольку учетную запись этого компьютера, ‘%2\\', не удалось сопоставить ни с каким объектом-компьютером на контроллере домена ‘%1\\'.Если SPN останется незарегистрированным, это может привести к ошибкам проверки подлинности для этого компьютера.Обратитесь к сетевому администратору. При этом может оказаться полезной следующая информация для разрешения этой проблемы:Состояние DsCrackNames = 0x%3, ошибка = 0x%4.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5802:
	{
		MessageBox(NULL, (error_info + L"Ни один из IP-адресов (%2) этого контроллера домена не сопоставляется с настроенным сайтом ‘%1\\'.Хотя это может быть временным явлением из-за изменения IP-адреса, рекомендуется,чтобы IP-адрес контроллера домена (доступного для других компьютеров в этомдомене) сопоставлялся с сайтом, который он обслуживает. Если приведенный вышесписок IP-адресов не изменяется, возможно, следует переместить этот сервер в такойсайт (или создать новый, если он не существует), чтобы эти IP-адреса сопоставлялисьвыбранному сайту. Это может потребовать создания нового объекта-подсети (чей диапазонбудет включать указанный IP-адрес), сопоставляемого выбранному объекту-сайту.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5803:
	{
		MessageBox(NULL, (error_info + L"Произошла следующая ошибка при чтении параметра ‘%2\\' в разделе %1 реестра Netlogon:%3").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5804:
	{
		MessageBox(NULL, (error_info + L"Раздел реестра %1 Netlogon содержит недопустимое значение 0x%2 для параметра ‘%3′.Минимальное и максимальное значение, разрешенные для этого параметра, равны 0x%4 и 0x%5, соответственно.Этому параметру присвоено значение 0x%6.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5805:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить проверку подлинности для сеанса компьютера %1.Произошла следующая ошибка: %2").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5807:
	{
		MessageBox(NULL, (error_info + L"За последние %1 часов было зарегистрировано %2 подключений к этому контроллерудомена от клиентских компьютеров, чьи IP-адреса не удалось сопоставить ни содним из существующих сайтов сети предприятия. Эти клиенты, тем самым, не имелиопределенного сайта и могли подключаться к любому контроллеру домена, включая те,которые могли находиться на очень далеком расстоянии от клиента. Сайт клиентаопределяется на основе сопоставления его маски подсети с масками существующихсайтов. Чтобы поместить этих клиентов в один из сайтов, возможно, следует создать новыеобъекты, покрывающие эти IP-адреса и сопоставляемые существующим сайтам. Именаи IP-адреса этих клиентов были записаны на этом компьютере в файле журнала\\'%SystemRoot%\\debug\\netlogon.log\\' или, возможно, в файле журнала\\'%SystemRoot%\\debug\\netlogon.bak\\', создаваемом в том случае, если первыйиз упомянутых журналов оказывается заполненным.Журналы могут содержать другую не связанную с этой проблемой информацию,собираемую для отладки. Чтобы отфильтровать нужные данные, следует выполнитьпоиск строк, содержащих текст ‘NO_CLIENT_SITE:\\'. Первое слово после этойстроки является именем клиента, а второе — его IP-адресом. Максимальныйразмер журналов определяется следующим DWORD-параметром в реестре:\\'HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\Netlogon\\Parameters\\LogFileMaxSize\\';по умолчанию принимается размер %3 байт. Текущий максимальный размер — %4 байт.Чтобы изменить максимальный размер, следует создать вышеупомянутый параметрв реестре и задать желаемый размер в байтах.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5890:
	{
		MessageBox(NULL, (error_info + L"Операция несовместима с текущим состоянием узла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5891:
	{
		MessageBox(NULL, (error_info + L"Ресурс кворума не содержит журнал кворума.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5892:
	{
		MessageBox(NULL, (error_info + L"Отвечающий за членство модуль потребовал закрытия кластерной службы на этом узле.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5893:
	{
		MessageBox(NULL, (error_info + L"Ошибка операции присоединения из-за несоответствия идентификаторов экземпляров кластера присоединяющегося узла и его спонсора.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5894:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти сеть, соответствующую указанному IP-адресу. Укажите маску подсети и кластерную сеть.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5895:
	{
		MessageBox(NULL, (error_info + L"Реальный тип данных свойства не соответствует ожидаемому.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5896:
	{
		MessageBox(NULL, (error_info + L"Узел был успешно исключен из кластера, однако не очищен. Имеются дополнительные сведения о причинах этого.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5897:
	{
		MessageBox(NULL, (error_info + L"Два или более значения, заданных для свойств ресурса, конфликтуют друг с другом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5898:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер нельзя включить в кластер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5899:
	{
		MessageBox(NULL, (error_info + L"Этот компьютер нельзя включить в кластер, так как на нем установлена неверная версия Windows.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5900:
	{
		MessageBox(NULL, (error_info + L"Кластер с указанным именем не может быть создан, поскольку кластер с данным именем уже существует. Укажите другое имя кластера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6000:
	{
		MessageBox(NULL, (error_info + L"Указанный файл не может быть зашифрован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6001:
	{
		MessageBox(NULL, (error_info + L"Указанный файл не может быть расшифрован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6002:
	{
		MessageBox(NULL, (error_info + L"Указанный файл зашифрован и не может быть расшифрован этим пользователем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6003:
	{
		MessageBox(NULL, (error_info + L"Для этой системы отсутствует политика надежного восстановления шифрования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6004:
	{
		MessageBox(NULL, (error_info + L"В системе не загружен требуемый драйвер шифрования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6005:
	{
		MessageBox(NULL, (error_info + L"Этот файл был зашифрован с помощью драйвера иной версии, чем драйвер, загруженный в данный момент.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6006:
	{
		MessageBox(NULL, (error_info + L"Отсутствуют EFS-ключи, определенные для этого пользователя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6007:
	{
		MessageBox(NULL, (error_info + L"Указанный файл не зашифрован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6008:
	{
		MessageBox(NULL, (error_info + L"Указанный файл не имеет определенного формата экспорта EFS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6009:
	{
		MessageBox(NULL, (error_info + L"Указанный файл имеет атрибут «только для чтения».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6010:
	{
		MessageBox(NULL, (error_info + L"Запрещено шифрование этой папки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6011:
	{
		MessageBox(NULL, (error_info + L"Операции удаленного шифрования на этом сервере не имеет достаточно доверия.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6012:
	{
		MessageBox(NULL, (error_info + L"Политика восстановления, заданная для системы, содержит неверный сертификат восстановления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6013:
	{
		MessageBox(NULL, (error_info + L"Алгоритм шифрования, использованный для исходного файла, нуждается в более длинном буфере для ключа, чем у конечного файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6014:
	{
		MessageBox(NULL, (error_info + L"Этот раздел диска не поддерживает шифрование файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6015:
	{
		MessageBox(NULL, (error_info + L"На компьютере отключено шифрование файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6016:
	{
		MessageBox(NULL, (error_info + L"Для расшифровки файла требуется более новая система.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6118:
	{
		MessageBox(NULL, (error_info + L"Недоступен список серверов для этой рабочей группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6200:
	{
		MessageBox(NULL, (error_info + L"Служба планировщика заданий должна запускаться с использованием системной учетной записи. Отдельные задания могут использовать другие учетные записи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7001:
	{
		MessageBox(NULL, (error_info + L"Указано недопустимое имя сеанса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7002:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый драйвер протокола.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7003:
	{
		MessageBox(NULL, (error_info + L"Указанный драйвер протокола не найден в системном пути.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7004:
	{
		MessageBox(NULL, (error_info + L"Указанный драйвер терминального подключения не найден в системном пути.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7005:
	{
		MessageBox(NULL, (error_info + L"Для этого сеанса нельзя создать раздел реестра для записи событий в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7006:
	{
		MessageBox(NULL, (error_info + L"В системе уже существует служба с таким именем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7007:
	{
		MessageBox(NULL, (error_info + L"В сеансе отложена операция закрытия.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7008:
	{
		MessageBox(NULL, (error_info + L"Свободные выходные буферы отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7009:
	{
		MessageBox(NULL, (error_info + L"Не найден файл MODEM.INF.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7010:
	{
		MessageBox(NULL, (error_info + L"В файле MODEM.INF не найдено имя этого модема.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7011:
	{
		MessageBox(NULL, (error_info + L"Модем не принял отправленную ему команду. Проверьте, что имя сконфигурированного модема соответствует подключенному модему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7012:
	{
		MessageBox(NULL, (error_info + L"Модем не отвечает на отправленную ему команду. Проверьте электропитание и правильность подключения к модему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7013:
	{
		MessageBox(NULL, (error_info + L"Несущий сигнал не обнаружен, или он сброшен в результате отключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7014:
	{
		MessageBox(NULL, (error_info + L"Сигнал станции (зуммер) не получен за отведенное время. Проверьте подключение телефонного кабеля и отсутствие его повреждений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7015:
	{
		MessageBox(NULL, (error_info + L"При ответном вызове удаленного компьютера обнаружен сигнал «занято».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7016:
	{
		MessageBox(NULL, (error_info + L"При ответном вызове удаленного компьютера обнаружен ответ голосом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7017:
	{
		MessageBox(NULL, (error_info + L"Ошибка драйвера транспорта").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7022:
	{
		MessageBox(NULL, (error_info + L"Указанный сеанс не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7023:
	{
		MessageBox(NULL, (error_info + L"Введенное имя сеанса уже используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7024:
	{
		MessageBox(NULL, (error_info + L"Не удается завершить требуемую операцию, поскольку терминальное соединение сейчас занято, выполняя операцию одну из операций: подключение, отключение, сброс, удаление.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7025:
	{
		MessageBox(NULL, (error_info + L"Была сделана попытка подключения к сеансу с режимом экрана, не поддерживаемым данным клиентом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7035:
	{
		MessageBox(NULL, (error_info + L"Данное приложение попыталось включить графический режим DOS. Графический режим DOS не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7037:
	{
		MessageBox(NULL, (error_info + L"Интерактивные привилегии входа в систему отключены.Обратитесь за помощью к системному администратору.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7038:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция может быть выполнена только на системной консоли.Это обычно результат того, что драйвер или системная библиотека требуют прямого доступа к консоли.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7040:
	{
		MessageBox(NULL, (error_info + L"Клиент не смог ответить на сообщение сервера о подключении.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7041:
	{
		MessageBox(NULL, (error_info + L"Отключение сеанса консоли не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7042:
	{
		MessageBox(NULL, (error_info + L"Повторное подключение к консоли отключенного сеанса не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7044:
	{
		MessageBox(NULL, (error_info + L"Запрос на удаленное управление другим сеансом отклонен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7045:
	{
		MessageBox(NULL, (error_info + L"Доступ к требуемому сеансу отклонен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7049:
	{
		MessageBox(NULL, (error_info + L"Недопустимый драйвер терминального подключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7050:
	{
		MessageBox(NULL, (error_info + L"Удаленное управление требуемым сеансом невозможно.Возможно, сеанс отключен или в нем отсутствуют работающие пользователи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7051:
	{
		MessageBox(NULL, (error_info + L"Указанный сеанс не настроен для осуществления удаленного управления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7052:
	{
		MessageBox(NULL, (error_info + L"Запрос на подключение к серверу терминалов отклонен. Этот номер клиентской лицензии сервера терминалов используется сейчас другим пользователем.Обратитесь к системному администратору за уникальным номером лицензии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7053:
	{
		MessageBox(NULL, (error_info + L"Запрос на подключение к серверу терминалов отклонен. Этот номер клиентской лицензии сервера терминалов не введен для данной копии клиента.Обратитесь к системному администратору за помощью.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7054:
	{
		MessageBox(NULL, (error_info + L"Достигнут предел числа лицензированных входов в систему.Повторите попытку входа позже.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7055:
	{
		MessageBox(NULL, (error_info + L"Используемый клиент не имеет лицензии для использования этой системы Запрос на вход в систему отклонен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7056:
	{
		MessageBox(NULL, (error_info + L"Срок действия системной лицензии истек. Запрос на вход в систему отклонен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7057:
	{
		MessageBox(NULL, (error_info + L"Нельзя прекратить удаленное управление, так как указанный сеанс не управляется в удаленном режиме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7058:
	{
		MessageBox(NULL, (error_info + L"Удаленное управление консолью прекращено, поскольку изменен режим экрана. Изменение режима отображения в удаленно управляемом сеансе невозможно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8001:
	{
		MessageBox(NULL, (error_info + L"Недопустимый вызов API службы репликации файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8002:
	{
		MessageBox(NULL, (error_info + L"Невозможно запустить службу репликации файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8003:
	{
		MessageBox(NULL, (error_info + L"Невозможно остановить службу репликации файлов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8004:
	{
		MessageBox(NULL, (error_info + L"API службы репликации файлов прервал запрос.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8005:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов прервала запрос.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8006:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к службе репликации файлов.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8007:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может удовлетворить запрос, т.к. у пользователя недостаточно привилегий.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8008:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может удовлетворить запрос, т.к. отсутствует проверенный RPC.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8009:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может удовлетворить запрос, т.к. у пользователя недостаточно привилегий на данном котроллере домена.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8010:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может удовлетворить запрос, т.к. отсутствует проверенный RPC в контроллере домена.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8011:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может взаимодействовать со службой репликации файлов контроллера домена.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8012:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов контроллера домена не может взаимодействовать со службой репликации файлов этого компьютера.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8013:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может заполнить данными системный том вследствие внутренней ошибки.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8014:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может заполнить данными системный том вследствие внутренней ошибки.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8015:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может обработать запрос. Системный том занят на обработке предыдущего запроса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8016:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов не может прервать репликацию системного тома вследствие внутренней ошибки.Более подробные сведения могут находиться в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8017:
	{
		MessageBox(NULL, (error_info + L"Служба репликации файлов обнаружила недопустимый параметр.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8200:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка при установке службы каталогов. Более подробные сведения находятся в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8201:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов проверила принадлежность к группам локально.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8202:
	{
		MessageBox(NULL, (error_info + L"Указанное значение или атрибут службы каталогов не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8203:
	{
		MessageBox(NULL, (error_info + L"Для службы каталогов указан недопустимый синтаксис атрибута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8204:
	{
		MessageBox(NULL, (error_info + L"Для службы каталогов указан неопределенный тип атрибута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8205:
	{
		MessageBox(NULL, (error_info + L"Указанный атрибут или значение службы каталогов уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8206:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов занята.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8207:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8208:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не смогла выделить относительный идентификатор.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8209:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов исчерпала пул относительных идентификаторов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8210:
	{
		MessageBox(NULL, (error_info + L"Невозможно выполнить требуемую операцию, поскольку служба каталогов не является хозяином операций такого типа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8211:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не смогла инициализировать подсистему, которая выделяет относительные идентификаторы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8212:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция не удовлетворяет одному или нескольким ограничениям для объектов этого класса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8213:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов может выполнять эту операцию только на оконечном листовом объекте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8214:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не может выполнить операцию на RDN-атрибуте объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8215:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов обнаружила попытку изменить класс объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8216:
	{
		MessageBox(NULL, (error_info + L"Затребованная операция меж-доменного перемещения не может быть выполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8217:
	{
		MessageBox(NULL, (error_info + L"Не удается установить связь с сервером глобального каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8218:
	{
		MessageBox(NULL, (error_info + L"К объекту политики имеется общий доступ, объект можно изменить только в его корне.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8219:
	{
		MessageBox(NULL, (error_info + L"Объект политики не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8220:
	{
		MessageBox(NULL, (error_info + L"Информация о требуемой политике имеется только в службе каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8221:
	{
		MessageBox(NULL, (error_info + L"Повышение роли контроллера домена сейчас активно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8222:
	{
		MessageBox(NULL, (error_info + L"Повышение роли контроллера домена сейчас не активно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8224:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8225:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка протокола.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8226:
	{
		MessageBox(NULL, (error_info + L"Для этого запроса превышен предел времени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8227:
	{
		MessageBox(NULL, (error_info + L"Для этого запроса превышен предел размера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8228:
	{
		MessageBox(NULL, (error_info + L"Пределы администрирования для этого запроса были превышены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8229:
	{
		MessageBox(NULL, (error_info + L"Отклик сравнения: ложный.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8230:
	{
		MessageBox(NULL, (error_info + L"Отклик сравнения: истинный.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8231:
	{
		MessageBox(NULL, (error_info + L"Требуемый метод проверки подлинности не поддерживается сервером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8232:
	{
		MessageBox(NULL, (error_info + L"Для этого сервера требуется более безопасный метод проверки подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8233:
	{
		MessageBox(NULL, (error_info + L"Недопустимая проверка подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8234:
	{
		MessageBox(NULL, (error_info + L"Неизвестный механизм проверки подлинности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8235:
	{
		MessageBox(NULL, (error_info + L"Сервер возвратил ссылку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8236:
	{
		MessageBox(NULL, (error_info + L"Сервер не поддерживает требуемое критическое расширение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8237:
	{
		MessageBox(NULL, (error_info + L"Этот запрос требует безопасного подключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8238:
	{
		MessageBox(NULL, (error_info + L"Недопустимое соответствие.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8239:
	{
		MessageBox(NULL, (error_info + L"Произошло нарушение ограничения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8240:
	{
		MessageBox(NULL, (error_info + L"Такой объект на сервере отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8241:
	{
		MessageBox(NULL, (error_info + L"Существует проблема с псевдонимом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8242:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый dn-синтаксис.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8243:
	{
		MessageBox(NULL, (error_info + L"Этот объект является оконечным листом дерева.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8244:
	{
		MessageBox(NULL, (error_info + L"Существует проблема разыменования псевдонима.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8245:
	{
		MessageBox(NULL, (error_info + L"Сервер не склонен обработать запрос.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8246:
	{
		MessageBox(NULL, (error_info + L"Обнаружен цикл.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8247:
	{
		MessageBox(NULL, (error_info + L"Произошло нарушение именования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8248:
	{
		MessageBox(NULL, (error_info + L"Слишком большой результат.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8249:
	{
		MessageBox(NULL, (error_info + L"Эта операция затрагивает несколько DSA").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8250:
	{
		MessageBox(NULL, (error_info + L"Сервер неработоспособен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8251:
	{
		MessageBox(NULL, (error_info + L"Произошла локальная ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8252:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка кодирования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8253:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка раскодирования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8254:
	{
		MessageBox(NULL, (error_info + L"Фильтр поиска не опознан.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8255:
	{
		MessageBox(NULL, (error_info + L"Один или несколько параметров недопустимы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8256:
	{
		MessageBox(NULL, (error_info + L"указанный метод не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8257:
	{
		MessageBox(NULL, (error_info + L"Не возвращено никаких результатов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8258:
	{
		MessageBox(NULL, (error_info + L"Указанный элемент управления не поддерживается сервером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8259:
	{
		MessageBox(NULL, (error_info + L"Клиент обнаружил зацикливание ссылок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8260:
	{
		MessageBox(NULL, (error_info + L"Предустановленный предел ссылок исчерпан.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8261:
	{
		MessageBox(NULL, (error_info + L"Операция поиска нуждается в операторе SORT.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8262:
	{
		MessageBox(NULL, (error_info + L"Результаты поиска выходят за рамки указанного диапазона смещений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8301:
	{
		MessageBox(NULL, (error_info + L"Корневой объект должен быть заголовком контекста именования. Корневой объект не может иметь присвоенного родителя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8302:
	{
		MessageBox(NULL, (error_info + L"Невозможно выполнить операцию добавления реплики. Для создания реплики нужна возможность записи контекста именования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8303:
	{
		MessageBox(NULL, (error_info + L"Ссылка на атрибут, который не определен в полученной схеме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8304:
	{
		MessageBox(NULL, (error_info + L"Превышен наибольший допустимый размер объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8305:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка добавить к каталогу объект с уже существующим именем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8306:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка добавить объект из класса с неопределенным RDN в схеме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8307:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка добавить объект с неопределенным RDN в схеме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8308:
	{
		MessageBox(NULL, (error_info + L"Ни один из требуемых атрибутов не найден в объектах.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8309:
	{
		MessageBox(NULL, (error_info + L"Буфер пользователя слишком мал.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8310:
	{
		MessageBox(NULL, (error_info + L"Указанный в операции атрибут отсутствует в объекте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8311:
	{
		MessageBox(NULL, (error_info + L"Недопустимая операция изменения. Некоторые параметры изменения не разрешены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8312:
	{
		MessageBox(NULL, (error_info + L"Указанный объект слишком велик.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8313:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый тип.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8314:
	{
		MessageBox(NULL, (error_info + L"Эта операция должна выполняться на главном DSA.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8315:
	{
		MessageBox(NULL, (error_info + L"Должен быть указан атрибут класса объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8316:
	{
		MessageBox(NULL, (error_info + L"Не указан обязательный атрибут.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8317:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка изменить объект включением в него атрибута, не разрешенного для данного класса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8318:
	{
		MessageBox(NULL, (error_info + L"Указанный атрибут уже присутствует в этом объекте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8320:
	{
		MessageBox(NULL, (error_info + L"Указанный атрибут не существует, или имеет нулевое значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8321:
	{
		MessageBox(NULL, (error_info + L"Множественные значения были заданы для атрибута, которые должен иметь только единственное значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8322:
	{
		MessageBox(NULL, (error_info + L"Значение этого атрибута находилось вне допустимых пределов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8323:
	{
		MessageBox(NULL, (error_info + L"Указанное значение уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8324:
	{
		MessageBox(NULL, (error_info + L"Этот атрибут не может быть удален, т.к. он отсутствует в объекте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8325:
	{
		MessageBox(NULL, (error_info + L"Значение этого атрибута не может быть удалено, т.к. атрибут отсутствует в объекте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8326:
	{
		MessageBox(NULL, (error_info + L"Указанный корневой объект не может быть подссылкой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8327:
	{
		MessageBox(NULL, (error_info + L"Очистка не разрешена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8328:
	{
		MessageBox(NULL, (error_info + L"Оценка очистки не разрешена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8329:
	{
		MessageBox(NULL, (error_info + L"Эта операция не может быть выполнена, т.к. родитель объекта либо не подтвержден, либо удален.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8330:
	{
		MessageBox(NULL, (error_info + L"Родительский объект не может быть псевдонимом. Псевдонимы являются оконечными листовыми объектами дерева.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8331:
	{
		MessageBox(NULL, (error_info + L"Объект и его родитель должны иметь одинаковые типы, быть оба главными, или оба копиями.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8332:
	{
		MessageBox(NULL, (error_info + L"Эта операция не может быть выполнена, т.к. существует дочерний объект. Эта операция может быть выполнена только на оконечном листовом объекте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8333:
	{
		MessageBox(NULL, (error_info + L"Объект каталога не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8334:
	{
		MessageBox(NULL, (error_info + L"Объект псевдонима не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8335:
	{
		MessageBox(NULL, (error_info + L"Имя объекта имеет недопустимый синтаксис.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8336:
	{
		MessageBox(NULL, (error_info + L"Не разрешается, чтобы псевдоним ссылался на другой псевдоним.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8337:
	{
		MessageBox(NULL, (error_info + L"Не разрешается, чтобы у псевдонима отсутствовала ссылка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8338:
	{
		MessageBox(NULL, (error_info + L"Эта операция вне диапазона.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8339:
	{
		MessageBox(NULL, (error_info + L"Нельзя продолжить операцию, так как объект находится в процессе удаления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8340:
	{
		MessageBox(NULL, (error_info + L"Невозможно удалить объект DSA.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8341:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка службы каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8342:
	{
		MessageBox(NULL, (error_info + L"Эта операция может быть выполнена только на главном объекте DSA.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8343:
	{
		MessageBox(NULL, (error_info + L"Этот объект должен быть класса DSA.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8344:
	{
		MessageBox(NULL, (error_info + L"Для выполнения операции права недостаточны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8345:
	{
		MessageBox(NULL, (error_info + L"Этот объект не может быть добавлен, т.к. родитель отсутствует в списке возможных старших.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8346:
	{
		MessageBox(NULL, (error_info + L"Доступ к атрибуту не разрешен, т.к. атрибут принадлежит диспетчеру защищенных учетных записей (SAM).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8347:
	{
		MessageBox(NULL, (error_info + L"В имени слишком много частей.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8348:
	{
		MessageBox(NULL, (error_info + L"Имя слишком длинно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8349:
	{
		MessageBox(NULL, (error_info + L"Значение имени слишком длинно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8350:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка службы каталогов при обработке имени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8351:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не может получить для имени тип атрибута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8352:
	{
		MessageBox(NULL, (error_info + L"Это имя не определяет объект; данное имя определяет объект-фантом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8353:
	{
		MessageBox(NULL, (error_info + L"Дескриптор безопасности слишком короток.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8354:
	{
		MessageBox(NULL, (error_info + L"Недопустимый дескриптор безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8355:
	{
		MessageBox(NULL, (error_info + L"Невозможно создать имя для удаленного объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8356:
	{
		MessageBox(NULL, (error_info + L"Родитель новой подссылки должен существовать.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8357:
	{
		MessageBox(NULL, (error_info + L"Этот объект должен быть контекстом именования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8358:
	{
		MessageBox(NULL, (error_info + L"Не разрешается добавление атрибута, который принадлежит системе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8359:
	{
		MessageBox(NULL, (error_info + L"Класс этого объекта должен быть структурным; невозможно утвердить абстрактный класс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8360:
	{
		MessageBox(NULL, (error_info + L"Не удалось найти объект схемы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8361:
	{
		MessageBox(NULL, (error_info + L"Локальный объект с этим GUID («живым» или «мертвым») уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8362:
	{
		MessageBox(NULL, (error_info + L"Операция не может быть выполнена на обратной ссылке.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8363:
	{
		MessageBox(NULL, (error_info + L"Перекрестные ссылки для указанного контекста именования не могут быть найдены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8364:
	{
		MessageBox(NULL, (error_info + L"Операция не может быть выполнена, поскольку служба каталогов отключена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8365:
	{
		MessageBox(NULL, (error_info + L"Недопустимый запрос службы каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8366:
	{
		MessageBox(NULL, (error_info + L"Атрибут владельца роли не может быть прочитан.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8367:
	{
		MessageBox(NULL, (error_info + L"Ошибка требуемой операции FSMO. Нет связи с текущим владельцем FSMO.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8368:
	{
		MessageBox(NULL, (error_info + L"Изменение DN через контекст именования не разрешено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8369:
	{
		MessageBox(NULL, (error_info + L"Этот атрибут не может быть изменен, т.к. он принадлежит системе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8370:
	{
		MessageBox(NULL, (error_info + L"Эту функцию может выполнить только репликатор.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8371:
	{
		MessageBox(NULL, (error_info + L"Указанный класс не определен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8372:
	{
		MessageBox(NULL, (error_info + L"Указанный класс не является подклассом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8373:
	{
		MessageBox(NULL, (error_info + L"Ссылка на имя неверна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8374:
	{
		MessageBox(NULL, (error_info + L"Перекрестная ссылка уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8375:
	{
		MessageBox(NULL, (error_info + L"Удаление основной перекрестной ссылки не разрешено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8376:
	{
		MessageBox(NULL, (error_info + L"Изменения поддеревьев поддерживаются только заголовками NC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8377:
	{
		MessageBox(NULL, (error_info + L"Слишком сложный фильтр уведомления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8378:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: повторяющиеся RDN.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8379:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: повторяющиеся OID.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8380:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: повторяющиеся идентификаторы MAPI.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8381:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: повторяющиеся идентификаторы GUID.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8382:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: повторяющееся выводимое имя LDAP.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8383:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: нижнее значение выше, чем верхнее.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8384:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: несовпадение синтаксиса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8385:
	{
		MessageBox(NULL, (error_info + L"Ошибка удаления схемы: атрибут использован в must-contain.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8386:
	{
		MessageBox(NULL, (error_info + L"Ошибка удаления схемы: атрибут использован в may-contain.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8387:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: отсутствует атрибут в may-contain.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8388:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: отсутствует атрибут в must-contain.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8389:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: данный класс в списке дополнительных классов (aux-class) не существует или это особый класс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8390:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: данный класс в классах высшего уровня (poss-superiors) не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8391:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: класс в списке подклассов (subclassof) не существует или не соответствует правилам иерархии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8392:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: неверный синтаксис Rdn-Att-Id.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8393:
	{
		MessageBox(NULL, (error_info + L"Ошибка удаления схемы: класс используется как особый класс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8394:
	{
		MessageBox(NULL, (error_info + L"Ошибка удаления схемы: класс используется как подкласс.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8395:
	{
		MessageBox(NULL, (error_info + L"Ошибка удаления схемы: класс используется как класс высшего ранга.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8396:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы при пересчете кэша проверки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8397:
	{
		MessageBox(NULL, (error_info + L"Удаление дерева не завершено. Для продолжения процесса удаления запрос должен быть сделан повторно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8398:
	{
		MessageBox(NULL, (error_info + L"Затребованная операция удаления не может быть выполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8399:
	{
		MessageBox(NULL, (error_info + L"Невозможно прочесть идентификатор управления классом для этой записи схемы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8400:
	{
		MessageBox(NULL, (error_info + L"Схема атрибута имеет неверный синтаксис.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8401:
	{
		MessageBox(NULL, (error_info + L"Этот атрибут не может кэшироваться.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8402:
	{
		MessageBox(NULL, (error_info + L"Этот класс не может кэшироваться.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8403:
	{
		MessageBox(NULL, (error_info + L"Этот атрибут нельзя удалить из кэша.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8404:
	{
		MessageBox(NULL, (error_info + L"Этот класс нельзя удалить из кэша.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8405:
	{
		MessageBox(NULL, (error_info + L"Нельзя прочесть атрибут различающегося имени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8406:
	{
		MessageBox(NULL, (error_info + L"Не найдена требуемая подссылка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8407:
	{
		MessageBox(NULL, (error_info + L"Нельзя восстановить атрибут типа образца.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8408:
	{
		MessageBox(NULL, (error_info + L"Произошла внутренняя ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8409:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка базы данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8410:
	{
		MessageBox(NULL, (error_info + L"Не найден атрибут GOVERNSID.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8411:
	{
		MessageBox(NULL, (error_info + L"Не найден ожидаемый атрибут.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8412:
	{
		MessageBox(NULL, (error_info + L"Указанный контекст именования не может найти перекрестную ссылку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8413:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка проверки безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8414:
	{
		MessageBox(NULL, (error_info + L"Эта схема не загружена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8415:
	{
		MessageBox(NULL, (error_info + L"Сбой размещения схемы. Возможно, недостаточно памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8416:
	{
		MessageBox(NULL, (error_info + L"Невозможно получить требуемый синтаксис для схемы атрибута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8417:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка проверки глобального каталога. Глобальный каталог или недоступен, или не поддерживает такую операцию. Одна из частей службы каталогов сейчас не доступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8418:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка операции репликации из-за несоответствия схемы задействованных серверов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8419:
	{
		MessageBox(NULL, (error_info + L"Не удается найти объект DSA.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8420:
	{
		MessageBox(NULL, (error_info + L"Не удается найти контекст именования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8421:
	{
		MessageBox(NULL, (error_info + L"Не удается найти контекст именования в кэше.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8422:
	{
		MessageBox(NULL, (error_info + L"Дочерний объект не может быть получен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8423:
	{
		MessageBox(NULL, (error_info + L"По соображениям безопасности это изменение не разрешено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8424:
	{
		MessageBox(NULL, (error_info + L"Эта операция не может заменить скрытую запись.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8425:
	{
		MessageBox(NULL, (error_info + L"Файл иерархии недоступен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8426:
	{
		MessageBox(NULL, (error_info + L"Не удалась попытка .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8427:
	{
		MessageBox(NULL, (error_info + L"Параметр конфигурации каталога не найден в реестре.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8428:
	{
		MessageBox(NULL, (error_info + L"Сбой попытки вычислить индекс адресной книги.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8429:
	{
		MessageBox(NULL, (error_info + L"Сбой размещения таблицы иерархии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8430:
	{
		MessageBox(NULL, (error_info + L"Внутренняя ошибка службы каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8431:
	{
		MessageBox(NULL, (error_info + L"Неизвестная ошибка службы каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8432:
	{
		MessageBox(NULL, (error_info + L"Корневой объект требует «верхнего» класса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8433:
	{
		MessageBox(NULL, (error_info + L"Сервер каталогов прекращает работу и не может быть использован как владелец передаваемых монопольных операций (FSMO).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8434:
	{
		MessageBox(NULL, (error_info + L"В службе каталогов утеряна обязательная информация и невозможно определить владельца передаваемых монопольных операций (FSMO).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8435:
	{
		MessageBox(NULL, (error_info + L"Службе каталогов не удается передать владение одной или несколькими передаваемыми монопольными операциями (FSMO) на другие серверы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8436:
	{
		MessageBox(NULL, (error_info + L"Ошибка операции репликации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8437:
	{
		MessageBox(NULL, (error_info + L"Для этой операции репликации указан недопустимый параметр.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8438:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов занята и не может завершить сейчас операцию репликации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8439:
	{
		MessageBox(NULL, (error_info + L"Для этой операции репликации указано недопустимое различающееся имя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8440:
	{
		MessageBox(NULL, (error_info + L"Для этой операции репликации указан недопустимый контекст именования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8441:
	{
		MessageBox(NULL, (error_info + L"Указанное для этой операции репликации различающееся имя уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8442:
	{
		MessageBox(NULL, (error_info + L"В системе репликации произошла внутренняя ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8443:
	{
		MessageBox(NULL, (error_info + L"Обнаружено несоответствие в базе данных при выполнении операции репликации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8444:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к серверу, выбранному для этой операции репликации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8445:
	{
		MessageBox(NULL, (error_info + L"При выполнении операции репликации встречен объект недопустимого типа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8446:
	{
		MessageBox(NULL, (error_info + L"Ошибка размещения в памяти при выполнении операции репликации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8447:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка операции репликации, связанная с почтовой системой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8448:
	{
		MessageBox(NULL, (error_info + L"Ссылочная информация о репликации для конечного сервера уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8449:
	{
		MessageBox(NULL, (error_info + L"Ссылочная информация о репликации для конечного сервера не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8450:
	{
		MessageBox(NULL, (error_info + L"Нельзя удалить контекст именования, т.к. он реплицирован на другой сервер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8451:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка базы данных при выполнении репликации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8452:
	{
		MessageBox(NULL, (error_info + L"Контекст именования находится в процессе удаления или не был реплицирован с указанного сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8453:
	{
		MessageBox(NULL, (error_info + L"Доступ к репликации отвергнут.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8454:
	{
		MessageBox(NULL, (error_info + L"Эта операция репликации не поддерживается в данной версии службы каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8455:
	{
		MessageBox(NULL, (error_info + L"Репликация вызова удаленной процедуры была прервана.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8456:
	{
		MessageBox(NULL, (error_info + L"Исходный сервер в настоящий момент отвергает запросы на репликацию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8457:
	{
		MessageBox(NULL, (error_info + L"Конечный сервер в настоящий момент отвергает запросы на репликацию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8458:
	{
		MessageBox(NULL, (error_info + L"Ошибка операции репликации из-за конфликта имен объектов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8459:
	{
		MessageBox(NULL, (error_info + L"Источник репликации был установлен заново.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8460:
	{
		MessageBox(NULL, (error_info + L"Ошибка операции репликации из-за отсутствия требуемого родительского объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8461:
	{
		MessageBox(NULL, (error_info + L"Операция репликации была выполнена раньше других.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8462:
	{
		MessageBox(NULL, (error_info + L"Попытка синхронизации репликации была прервана из-за отсутствия обновлений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8463:
	{
		MessageBox(NULL, (error_info + L"Операция репликации была прервана, т.к. происходит выключение системы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8464:
	{
		MessageBox(NULL, (error_info + L"Попытка синхронизации репликации завершена с ошибкой, т.к. конечный частный набор атрибутов не является подмножеством исходного частного набора атрибутов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8465:
	{
		MessageBox(NULL, (error_info + L"Попытка синхронизации репликации завершена с ошибкой, т.к. мастер-реплика попыталась синхронизироваться с неполной реплики.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8466:
	{
		MessageBox(NULL, (error_info + L"Получен доступ к серверу, указанному для операции репликации, но это сервер не смог связаться с другим сервером, необходимым для завершения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8467:
	{
		MessageBox(NULL, (error_info + L"Версия схемы Active Directory исходного леса несовместима с версией Active Directory на этом компьютере. Чтобы добавить этот компьютер в лес в качестве контроллера домена, следует вначале обновить операционную систему на контроллере домена в исходном лесу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8468:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: атрибут с таким идентификатором ссылки уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8469:
	{
		MessageBox(NULL, (error_info + L"Преобразование имен: общая ошибка обработки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8470:
	{
		MessageBox(NULL, (error_info + L"Преобразование имен: не удается найти имя или права на чтение имени недостаточны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8471:
	{
		MessageBox(NULL, (error_info + L"Преобразование имен: входящее имя сопоставлено более чем одному исходящему имени.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8472:
	{
		MessageBox(NULL, (error_info + L"Преобразование имен: входящее имя найдено, но оно исходящий формат неверен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8473:
	{
		MessageBox(NULL, (error_info + L"Преобразование имен: не удается разрешить имя полностью, найден только домен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8474:
	{
		MessageBox(NULL, (error_info + L"Преобразование имен: не удается выполнить полное синтаксическое сопоставление у клиента без осуществления подключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8475:
	{
		MessageBox(NULL, (error_info + L"Изменение построенного атрибута не допускается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8476:
	{
		MessageBox(NULL, (error_info + L"Указанный OM-Object-Class неверен для атрибута с таким синтаксисом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8477:
	{
		MessageBox(NULL, (error_info + L"Запрос на репликацию отправлен; ждите отклик.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8478:
	{
		MessageBox(NULL, (error_info + L"Для выполнения требуемой операции нужна служба каталогов, которая недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8479:
	{
		MessageBox(NULL, (error_info + L"Выводимое имя LDAP для класса или атрибута содержит символы, не входящие в ASCII.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8480:
	{
		MessageBox(NULL, (error_info + L"Требуемая операция поиска поддерживается для простого поиска.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8481:
	{
		MessageBox(NULL, (error_info + L"Операция поиска не смогла получить атрибуты из базы данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8482:
	{
		MessageBox(NULL, (error_info + L"Операция обновления схемы попыталась добавить атрибут обратной ссылки, не имеющей соответствующей ссылки вперед.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8483:
	{
		MessageBox(NULL, (error_info + L"Исходное и конечное расположение при перемещении между доменами не смогли быть согласованы по временным характеристикам объекта. Или исходное, или конечное место не обладают последней версией объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8484:
	{
		MessageBox(NULL, (error_info + L"Исходное и конечное расположение при перемещении между доменами не смогли согласовать имя объекта. Или исходном, или в конечном месте отсутствует последняя версия объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8485:
	{
		MessageBox(NULL, (error_info + L"Исходное и конечное расположение при перемещении между доменами совпадают. Следует использовать операцию локального перемещения вместо меж-доменного.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8486:
	{
		MessageBox(NULL, (error_info + L"Исходное и конечное расположение при перемещении между доменами не согласованы по контексту именования в лесу. Или исходном, или в конечном месте отсутствует последняя версия контейнера разделов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8487:
	{
		MessageBox(NULL, (error_info + L"Конечное расположение при перемещении между доменами не авторизовано для конечного контекста наименования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8488:
	{
		MessageBox(NULL, (error_info + L"Исходное и конечное расположение при перемещении между доменами не согласовали подлинность исходного объекта. Или исходном, или в конечном месте отсутствует последняя версия исходного объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8489:
	{
		MessageBox(NULL, (error_info + L"Объект перемещаемый между доменами уже помечен для удаления конечным сервером. На исходном сервере отсутствует последняя версия исходного объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8490:
	{
		MessageBox(NULL, (error_info + L"Уже выполняется другая операция, требующая доступа к PDC FSMO.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8491:
	{
		MessageBox(NULL, (error_info + L"Операция перемещения между доменами завершена с ошибкой, т.к. существуют две версии перемещаемого объекта, — по каждой в исходном и конечном домене. Конечный объект должен быть перемещен для восстановления системы в согласованное состояние.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8492:
	{
		MessageBox(NULL, (error_info + L"Этот объект не может быть перемещен за границу домена, т.к. или меж-доменное перемещение для этого класса не разрешен, или объект имеет особые параметры, к примеру: ограничение RID или доверительная учетная запись, не разрешающие перемещение объектов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8493:
	{
		MessageBox(NULL, (error_info + L"Перемещение объектов — членов группы невозможно, т.к. такое перемещение нарушит условия принадлежности к группе учетных записей. Удалите объект из любой из групп учетных записей и повторите попытку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8494:
	{
		MessageBox(NULL, (error_info + L"Заголовок контекста именования должен быть непосредственным потомком другого заголовка контекста именования, но не внутреннего узла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8495:
	{
		MessageBox(NULL, (error_info + L"Каталог не может проверить предлагаемый контекст именования для имени, т.к. он не содержит реплику предложенного контекста именования. Убедитесь, что роль хозяина именования доменов выполняется сервером, сконфигурированным как сервер глобального каталога, и что его состояние соответствует состоянию партнеров репликации. (Применяется только к хозяинам именования доменов Windows 2000)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8496:
	{
		MessageBox(NULL, (error_info + L"Конечный домен должен быть в основном режиме.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8497:
	{
		MessageBox(NULL, (error_info + L"Операция не может быть выполнена, т.к. сервер не имеет контейнера инфраструктуры в нужном домене.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8498:
	{
		MessageBox(NULL, (error_info + L"Меж-доменное перемещение непустых групп учетных записей не разрешается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8499:
	{
		MessageBox(NULL, (error_info + L"Меж-доменное перемещение непустых групп ресурсов не разрешается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8500:
	{
		MessageBox(NULL, (error_info + L"Для атрибута заданы недопустимые параметры поиска. Бит ANR допускается только для атрибутов строк Юникод или Teletex.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8501:
	{
		MessageBox(NULL, (error_info + L"Удаление дерева начато с объекта, имеющего NC-заголовок, т.к. потомки не разрешены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8502:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не смогла заблокировать дерево при подготовке к его удалению, т.к. дерево на тот момент использовалось.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8503:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не смогла определить список объектов на удаление при осуществлении попытки удаления дерева.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8504:
	{
		MessageBox(NULL, (error_info + L"Ошибка инициализации диспетчера учетных записей безопасности: %1.Состояние ошибки: 0x%2. Нажмите «ОК» для перезагрузки системы в режим восстановления службы каталогов. Более подробные сведения находятся в журнале.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8505:
	{
		MessageBox(NULL, (error_info + L"Только администратор может изменить список членов группы администраторов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8506:
	{
		MessageBox(NULL, (error_info + L"Невозможно изменить основной идентификатор группы для учетной записи контроллера домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8507:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка изменить основную схему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8508:
	{
		MessageBox(NULL, (error_info + L"Добавление нового обязательного атрибута в существующий класс или необязательного атрибута в специализированный класс TОР, который не является наследуемым атрибутом (явно или неявно через механизм наследования, к примеру, добавляя или удаляя вспомогательный класс), — недопустимо.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8509:
	{
		MessageBox(NULL, (error_info + L"Обновление схемы не разрешено для DC, поскольку DC не является владельцем роли FSMO.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8510:
	{
		MessageBox(NULL, (error_info + L"Объект данного класса не может быть создан в контейнере схемы. В контейнере схемы можно создать только объекты типа attribute-schema и class-schema.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8511:
	{
		MessageBox(NULL, (error_info + L"Установка реплики или потомка не смогла получить атрибут objectVersion в контейнере схемы в исходном DC. Атрибут отсутствует в контейнере схемы или у вас отсутствуют права на чтение атрибута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8512:
	{
		MessageBox(NULL, (error_info + L"Установка реплики или потомка не смогла получить атрибут objectVersion в секции SCHEMA файла schema.ini в папке system32.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8513:
	{
		MessageBox(NULL, (error_info + L"Указан недопустимый тип группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8514:
	{
		MessageBox(NULL, (error_info + L"Нельзя вложить глобальные группы в смешанный домен, если группа имеет включенную безопасность.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8515:
	{
		MessageBox(NULL, (error_info + L"Нельзя вложить локальные группы в смешанный домен, если группа имеет включенную безопасность.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8516:
	{
		MessageBox(NULL, (error_info + L"Локальная группа не может быть членом глобальной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8517:
	{
		MessageBox(NULL, (error_info + L"Универсальная группа не может быть членом глобальной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8518:
	{
		MessageBox(NULL, (error_info + L"Локальная группа не может быть членом универсальной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8519:
	{
		MessageBox(NULL, (error_info + L"Глобальная группа не может иметь меж-доменного участника.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8520:
	{
		MessageBox(NULL, (error_info + L"Локальная меж-доменная группа не может быть членом другой локальной группы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8521:
	{
		MessageBox(NULL, (error_info + L"Группу с основными участниками нельзя изменить на группу с отключенной безопасностью.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8522:
	{
		MessageBox(NULL, (error_info + L"Ошибка преобразования строки по умолчанию SD на объекте class-schema при загрузке кэша схемы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8523:
	{
		MessageBox(NULL, (error_info + L"Только для DSA, настроенных как серверы глобального каталога, разрешена роль хозяина именования доменов FSMO. (Применяется только к серверам Windows 2000)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8524:
	{
		MessageBox(NULL, (error_info + L"Операция DSA не смогла быть выполнена, т.к. произошла ошибка поиска в DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8525:
	{
		MessageBox(NULL, (error_info + L"При изменении имени узла DNS для объекта, значения имени участника службы сохранить при синхронизации нельзя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8526:
	{
		MessageBox(NULL, (error_info + L"Не удается прочесть атрибут дескриптора безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8527:
	{
		MessageBox(NULL, (error_info + L"Требуемый объект не найден, но найден объект с таким разделом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8528:
	{
		MessageBox(NULL, (error_info + L"Недопустимый синтаксис добавляемого связанного атрибута. Прямые ссылки могут иметь синтаксис 2.5.5.1, 2.5.5.7 и 2.5.5.14, а обратные ссылки — только синтаксис 2.5.5.1").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8529:
	{
		MessageBox(NULL, (error_info + L"Диспетчеру учетных записей безопасности нужно получить пароль загрузки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8530:
	{
		MessageBox(NULL, (error_info + L"Диспетчеру учетных записей безопасности нужно получить ключ загрузки с дискеты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8531:
	{
		MessageBox(NULL, (error_info + L"Невозможно запустить службу каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8532:
	{
		MessageBox(NULL, (error_info + L"Не удается запустить службы каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8533:
	{
		MessageBox(NULL, (error_info + L"Подключение между сервером и клиентом требует пакетного или более высокого уровня безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8534:
	{
		MessageBox(NULL, (error_info + L"Исходный домен не может быть в одном лесу с конечным доменом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8535:
	{
		MessageBox(NULL, (error_info + L"Конечный домен должен быть в этом домене.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8536:
	{
		MessageBox(NULL, (error_info + L"Операция требует включенного аудита конечного домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8537:
	{
		MessageBox(NULL, (error_info + L"Операция не может найти контроллер домена для исходного домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8538:
	{
		MessageBox(NULL, (error_info + L"Исходный объект должен быть группой или пользователем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8539:
	{
		MessageBox(NULL, (error_info + L"SID исходного объекта уже существует в конечном лесу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8540:
	{
		MessageBox(NULL, (error_info + L"Исходный и конечный объект должны быть одного типа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8541:
	{
		MessageBox(NULL, (error_info + L"Ошибка инициализации диспетчера учетных записей безопасности: %1.Состояние ошибки: 0x%2. Нажмите «ОК» для перезагрузки системы в безопасном режиме. Более подробная информация содержится в журнале событий.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8542:
	{
		MessageBox(NULL, (error_info + L"Не удалось включить информацию о схеме в запрос на репликацию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8543:
	{
		MessageBox(NULL, (error_info + L"Не удалось завершить операцию репликации из-за несовместимости с предыдущей схемой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8544:
	{
		MessageBox(NULL, (error_info + L"Не удалось завершить операцию репликации из-за несовместимости с предыдущей схемой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8545:
	{
		MessageBox(NULL, (error_info + L"Обновление репликации не проведено, поскольку либо источник либо Приемник еще не получил информацию о последней операции перемещения между доменами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8546:
	{
		MessageBox(NULL, (error_info + L"Не удалось удалить, указанный домен поскольку еще существуют контроллеры этого домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8547:
	{
		MessageBox(NULL, (error_info + L"Выполнение запрошенной операции возможно только на сервере глобального каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8548:
	{
		MessageBox(NULL, (error_info + L"Локальная группа может быть членом другой локальной группы только того же домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8549:
	{
		MessageBox(NULL, (error_info + L"Участники внешней безопасности не могут быть членами универсальных групп.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8550:
	{
		MessageBox(NULL, (error_info + L"Атрибут нельзя реплицировать в GC по причинам безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8551:
	{
		MessageBox(NULL, (error_info + L"Не удается достичь контрольной точки PDC, поскольку в данный момент производится слишком много модификаций.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8552:
	{
		MessageBox(NULL, (error_info + L"Операция требует включенного аудита конечного домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8553:
	{
		MessageBox(NULL, (error_info + L"Основные объекты-участники безопасности могут быть созданы только внутри контекстов именования доменов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8554:
	{
		MessageBox(NULL, (error_info + L"Не удалось создать имя участника службы (SPN), поскольку предложенное имя узла имеет неподходящий формат.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8555:
	{
		MessageBox(NULL, (error_info + L"Пропущен фильтр, который использует построенные атрибуты.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8556:
	{
		MessageBox(NULL, (error_info + L"Значение атрибута unicodePwd должно заключаться в двойные кавычки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8557:
	{
		MessageBox(NULL, (error_info + L"Компьютер не может быть присоединен к домену. На этом домене превышено максимальное допустимое число учетных записей. Обратитесь к системному администратору с просьбой отменить это ограничение или увеличить значение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8558:
	{
		MessageBox(NULL, (error_info + L"По причинам безопасности, операция должна выполняться на назначенном контроллере домена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8559:
	{
		MessageBox(NULL, (error_info + L"По причинам безопасности, на исходном контроллере домена должен быть установлена Windows NT 4 с пакетом обновления 4 или более поздняя операционная система.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8560:
	{
		MessageBox(NULL, (error_info + L"Критические объекты службы каталогов не могут быть удалены во время удаления дерева каталогов. Удаление дерева может выполнено лишь частично.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8561:
	{
		MessageBox(NULL, (error_info + L"Не удается запустить службу каталогов из-за следующей ошибки: %1.Состояние ошибки: 0x%2. ОК — завершить работу. Дальнейшую диагностику можно провести с помощью консоли восстановления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8562:
	{
		MessageBox(NULL, (error_info + L"Ошибка при запуске диспетчера учетных записей безопасности из-за следующей ошибки: %1.Состояние ошибки: 0x%2. ОК — завершить работу. Дальнейшую диагностику можно провести с помощью консоли восстановления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8563:
	{
		MessageBox(NULL, (error_info + L"Эта версия Windows слишком стара для полной поддержки леса каталогов. Чтобы сервер смог стать контроллером домена в этом лесу, необходимо обновить на нем операционную систему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8564:
	{
		MessageBox(NULL, (error_info + L"Эта версия Windows слишком стара для полной поддержки домена. Чтобы сервер смог стать контроллером домена, необходимо обновить на нем операционную систему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8565:
	{
		MessageBox(NULL, (error_info + L"Эта версия Windows уже не поддерживает версию поведения для данного леса. Чтобы сервер мог стать контроллером домена в лесу, необходимо выбрать более новую версию поведения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8566:
	{
		MessageBox(NULL, (error_info + L"Эта версия Windows уже не поддерживает версию поведения для данного домена. Чтобы сервер мог стать контроллером домена, необходимо выбрать более новую версию поведения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8567:
	{
		MessageBox(NULL, (error_info + L"Эта версия Windows несовместима с версией поведения домена или леса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8568:
	{
		MessageBox(NULL, (error_info + L"Версия поведения не может быть поднята до указанного значения, так как имеются контроллеры домена с версиями ниже запрошенной.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8569:
	{
		MessageBox(NULL, (error_info + L"Версия поведения не может быть поднята, пока домен находится в смешанном режиме работы. Следует вначале перевести домен в основной режим работы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8570:
	{
		MessageBox(NULL, (error_info + L"Требуемая порядок сортировки не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8571:
	{
		MessageBox(NULL, (error_info + L"Найден объект не неуникальным именем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8572:
	{
		MessageBox(NULL, (error_info + L"Учетная запись для компьютера была создана в системе версии ниже NT4. Ее следует создать заново.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8573:
	{
		MessageBox(NULL, (error_info + L"Версия базы данных не соответствует версии хранилищу.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8574:
	{
		MessageBox(NULL, (error_info + L"Не удается продолжить операцию из-за нескольких конфликтующих команд.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8575:
	{
		MessageBox(NULL, (error_info + L"Не удается найти правильный домен ссылки на дескриптор безопасности для раздела.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8576:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: Это идентификатор связи зарезервирован.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8577:
	{
		MessageBox(NULL, (error_info + L"Ошибка обновления схемы: Нет доступных идентификаторов связи.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8578:
	{
		MessageBox(NULL, (error_info + L"Группа учетных записей не может иметь универсальную группу в качестве члена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8579:
	{
		MessageBox(NULL, (error_info + L"Переименование и перемещение заголовков контекста именования и объектов, доступных только для чтения, запрещены.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8580:
	{
		MessageBox(NULL, (error_info + L"Перемещение объектов из контекста именования схемы запрещено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8581:
	{
		MessageBox(NULL, (error_info + L"Для объекта был установлен системный флаг, запрещающий его перемещение и переименование.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8582:
	{
		MessageBox(NULL, (error_info + L"Объект не может менять прародительский контейнер. Перемещение для него не запрещено, однако ограничено родственными контейнерами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8583:
	{
		MessageBox(NULL, (error_info + L"Полное сопоставление не удалось, будет создана ссылка на другой лес.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8584:
	{
		MessageBox(NULL, (error_info + L"Запрошенное действие не поддерживается стандартным сервером.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8585:
	{
		MessageBox(NULL, (error_info + L"Нет доступа к разделу Active Directory с удаленного сервера. Убедитесь в наличии хотя бы одного работающего сервера для этого раздела.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8586:
	{
		MessageBox(NULL, (error_info + L"Не удается проверить предложенное имя контекста именования или раздела, так как каталог не содержит и/или не может обратиться вышестоящей реплике контекста именования. Проверьте правильность регистрации родительского контекста именования в DNS, а также доступность хотя бы одной реплики этого контекста хозяину именования доменов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8587:
	{
		MessageBox(NULL, (error_info + L"Предел потоков для этого запроса был превышен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8588:
	{
		MessageBox(NULL, (error_info + L"Глобальный сервер каталогов не входит в ближайший узел.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8589:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не может создать имя участника службы (SPN), с помощью которого будет выполняться взаимная проверка подлинности с сервером, так как у соответствующего объекта для сервера в локальной базе данных службы каталогов отсутствует атрибут serverReference.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8590:
	{
		MessageBox(NULL, (error_info + L"Службу каталогов не удалось перевести в однопользовательский режим.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8591:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не может проинтерпретировать сценарий из-за синтаксической ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8592:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не может обработать сценарий из-за ошибки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8593:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не может выполнить операцию, так как вовлеченныев нее серверы относятся к разным состояниям реплицирования (что чаще всего связано свыполняющимся переименованием домена).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8594:
	{
		MessageBox(NULL, (error_info + L"Привязка службы каталогов должна быть возобновлена из-за измененийв данных о серверных расширениях.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8595:
	{
		MessageBox(NULL, (error_info + L"Операция недопустима для отключенной перекрестной ссылки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8596:
	{
		MessageBox(NULL, (error_info + L"Ошибка при обновлении схемы: отсутствуют значения для msDS-IntId.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8597:
	{
		MessageBox(NULL, (error_info + L"Ошибка при обновлении схемы: найдены дубликаты msDS-INtId. Повторите операцию.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8598:
	{
		MessageBox(NULL, (error_info + L"Ошибка при удалении схемы: атрибут использован в rDNAttID.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8599:
	{
		MessageBox(NULL, (error_info + L"Службе каталогов не удалось авторизовать запрос.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8600:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не может обработать недопустимый сценарий.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8601:
	{
		MessageBox(NULL, (error_info + L"Ошибка удаленной операции по созданию перекрестной ссылки для FSMO хозяина именования доменов. Сведения об ошибке находятся в расширенных данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9001:
	{
		MessageBox(NULL, (error_info + L"DNS-сервер не смог обработать этот формат.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9002:
	{
		MessageBox(NULL, (error_info + L"Ошибка DNS-сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9003:
	{
		MessageBox(NULL, (error_info + L"DNS-имя не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9004:
	{
		MessageBox(NULL, (error_info + L"DNS-запрос не поддерживается сервером имен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9005:
	{
		MessageBox(NULL, (error_info + L"Операция DNS отвергнута.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9006:
	{
		MessageBox(NULL, (error_info + L"Существует DNS-имя, которое не должно существовать.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9007:
	{
		MessageBox(NULL, (error_info + L"Существует набор DNS RR, который не должен существовать.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9008:
	{
		MessageBox(NULL, (error_info + L"Не существует набор DNS RR, который должен существовать.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9009:
	{
		MessageBox(NULL, (error_info + L"DNS-сервер не обслуживает эту зону.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9010:
	{
		MessageBox(NULL, (error_info + L"При обновлении DNS-имя вне этой зоны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9016:
	{
		MessageBox(NULL, (error_info + L"Невозможно проверить подпись DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9017:
	{
		MessageBox(NULL, (error_info + L"Неверный раздел DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9018:
	{
		MessageBox(NULL, (error_info + L"Срок действия подписи DNS истек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9501:
	{
		MessageBox(NULL, (error_info + L"Для данного запроса записей в DNS не найдено.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9502:
	{
		MessageBox(NULL, (error_info + L"Неверный пакет DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9503:
	{
		MessageBox(NULL, (error_info + L"Пакет DNS отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9504:
	{
		MessageBox(NULL, (error_info + L"Ошибка DNS, проверьте RCODE.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9505:
	{
		MessageBox(NULL, (error_info + L"Небезопасный пакет DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9551:
	{
		MessageBox(NULL, (error_info + L"Недопустимый тип DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9552:
	{
		MessageBox(NULL, (error_info + L"Недопустимый IP-адрес.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9553:
	{
		MessageBox(NULL, (error_info + L"Недопустимое свойство.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9554:
	{
		MessageBox(NULL, (error_info + L"Повторите операцию DNS позже еще раз.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9555:
	{
		MessageBox(NULL, (error_info + L"Запись для указанного имени и типа не является уникальной.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9556:
	{
		MessageBox(NULL, (error_info + L"DNS-имя не соответствует спецификации RFC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9557:
	{
		MessageBox(NULL, (error_info + L"Это DNS-имя является полным DNS-именем.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9558:
	{
		MessageBox(NULL, (error_info + L"DNS-имя, разделенное точками (multi-label).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9559:
	{
		MessageBox(NULL, (error_info + L"DNS-имя является именем, состоящим из одной части.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9560:
	{
		MessageBox(NULL, (error_info + L"Сетевое имя содержит недопустимые символы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9561:
	{
		MessageBox(NULL, (error_info + L"DNS-имя состоит только из цифр.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9562:
	{
		MessageBox(NULL, (error_info + L"Запрошенная операция недопустима для корневого сервера DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9601:
	{
		MessageBox(NULL, (error_info + L"Зона DNS не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9602:
	{
		MessageBox(NULL, (error_info + L"Информация о зоне DNS недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9603:
	{
		MessageBox(NULL, (error_info + L"Недопустимая операция на зоне DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9604:
	{
		MessageBox(NULL, (error_info + L"Недопустимая конфигурация зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9605:
	{
		MessageBox(NULL, (error_info + L"В зоне DNS отсутствует начальная запись зоны (SOA).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9606:
	{
		MessageBox(NULL, (error_info + L"В зоне DNS отсутствует запись о сервере имен (NS).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9607:
	{
		MessageBox(NULL, (error_info + L"Зона DNS заблокирована.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9608:
	{
		MessageBox(NULL, (error_info + L"Ошибка создания зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9609:
	{
		MessageBox(NULL, (error_info + L"Зона DNS уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9610:
	{
		MessageBox(NULL, (error_info + L"Автоматическая зона DNS уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9611:
	{
		MessageBox(NULL, (error_info + L"Недопустимый тип зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9612:
	{
		MessageBox(NULL, (error_info + L"Вторичная зона DNS требует основного IP-адреса.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9613:
	{
		MessageBox(NULL, (error_info + L"Зона DNS не является дополнительной зоной.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9614:
	{
		MessageBox(NULL, (error_info + L"Нужен вторичный IP-адрес.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9615:
	{
		MessageBox(NULL, (error_info + L"Ошибка инициализации WINS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9616:
	{
		MessageBox(NULL, (error_info + L"Требуется сервер WINS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9617:
	{
		MessageBox(NULL, (error_info + L"Ошибка вызова инициализации NBTSTAT.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9618:
	{
		MessageBox(NULL, (error_info + L"Недопустимое удаление начальной записи зоны (SOA)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9619:
	{
		MessageBox(NULL, (error_info + L"Условная зона перенаправления для этого имени уже имеется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9620:
	{
		MessageBox(NULL, (error_info + L"Зона должна быть настроена с одним или несколькими IP-адресами главного сервера DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9621:
	{
		MessageBox(NULL, (error_info + L"Операция не может быть выполнена из-за неактивности зоны.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9651:
	{
		MessageBox(NULL, (error_info + L"Основная зона DNS требует файла данных.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9652:
	{
		MessageBox(NULL, (error_info + L"Недопустимое имя файла данных зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9653:
	{
		MessageBox(NULL, (error_info + L"Ошибка открытия файла данных зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9654:
	{
		MessageBox(NULL, (error_info + L"Ошибка записи в файл данных зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9655:
	{
		MessageBox(NULL, (error_info + L"Ошибка чтения из файла данных зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9701:
	{
		MessageBox(NULL, (error_info + L"Запись DNS не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9702:
	{
		MessageBox(NULL, (error_info + L"Ошибка формата записи DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9703:
	{
		MessageBox(NULL, (error_info + L"Ошибка создания узла DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9704:
	{
		MessageBox(NULL, (error_info + L"Неизвестный тип записи DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9705:
	{
		MessageBox(NULL, (error_info + L"Таймаут записи DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9706:
	{
		MessageBox(NULL, (error_info + L"Имя находится вне зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9707:
	{
		MessageBox(NULL, (error_info + L"Обнаружен цикл CNAME.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9708:
	{
		MessageBox(NULL, (error_info + L"Узел является записью CNAME DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9709:
	{
		MessageBox(NULL, (error_info + L"Для указанного имени уже существует запись CNAME.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9710:
	{
		MessageBox(NULL, (error_info + L"Запись только в корневой зоне DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9711:
	{
		MessageBox(NULL, (error_info + L"Запись DNS уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9712:
	{
		MessageBox(NULL, (error_info + L"Ошибка данных вторичной зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9713:
	{
		MessageBox(NULL, (error_info + L"Не удается создать кэшированные данные DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9714:
	{
		MessageBox(NULL, (error_info + L"DNS-имя не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9715:
	{
		MessageBox(NULL, (error_info + L"Не удается создать запись указателя (PTR).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9716:
	{
		MessageBox(NULL, (error_info + L"Домен DNS был возращен после удаления.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9717:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9718:
	{
		MessageBox(NULL, (error_info + L"Зона DNS уже существует в службе каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9719:
	{
		MessageBox(NULL, (error_info + L"DNS-сервер не создает или не читает корневой файл для интегрированной зоны DNS службы каталогов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9751:
	{
		MessageBox(NULL, (error_info + L"Завершение DNS AXFR (передачи зоны).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9752:
	{
		MessageBox(NULL, (error_info + L"Ошибка передачи зоны DNS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9753:
	{
		MessageBox(NULL, (error_info + L"Добавлен WINS-сервер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9801:
	{
		MessageBox(NULL, (error_info + L"Вызов безопасного обновления требует запрос на обновление для продолжения работы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9851:
	{
		MessageBox(NULL, (error_info + L"Сетевой протокол TCP/IP не установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9852:
	{
		MessageBox(NULL, (error_info + L"Для локальной системы не настроено ни одного DNS-сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9901:
	{
		MessageBox(NULL, (error_info + L"Указанный раздел каталога не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9902:
	{
		MessageBox(NULL, (error_info + L"Указанный раздел каталога уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9903:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов не зарегистрирована в указанном разделе каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9904:
	{
		MessageBox(NULL, (error_info + L"Служба каталогов уже зарегистрирована в указанном разделе каталога.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10004:
	{
		MessageBox(NULL, (error_info + L"Операция блокирования прервана вызовом WSACancelBlockingCall.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10009:
	{
		MessageBox(NULL, (error_info + L"Предоставленный дескриптор файла неверен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10013:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка доступа к сокету методом, запрещенным правами доступа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10014:
	{
		MessageBox(NULL, (error_info + L"Система обнаружила недопустимый указатель адреса при попытке использовать в вызове аргумент указателя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10022:
	{
		MessageBox(NULL, (error_info + L"Получен недопустимый аргумент.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10024:
	{
		MessageBox(NULL, (error_info + L"Открыто слишком много сокетов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10035:
	{
		MessageBox(NULL, (error_info + L"Операция на незаблокированном сокете не может быть завершена немедленно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10036:
	{
		MessageBox(NULL, (error_info + L"Сейчас выполняется операция блокировки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10037:
	{
		MessageBox(NULL, (error_info + L"На незаблокированном сокете сделана попытка выполнить операцию при наличии другой выполняемой операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10038:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка выполнить операцию на объекте, не являющемся сокетом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10039:
	{
		MessageBox(NULL, (error_info + L"В операции на сокете пропущен обязательный адрес.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10040:
	{
		MessageBox(NULL, (error_info + L"Сообщение, отправленное на сокет датаграмм, было больше, чем буфер внутренних сообщений или был превышен иной сетевой параметр. Также возможно, что буфер для принятия сообщения был меньше, чем размер сообщения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10041:
	{
		MessageBox(NULL, (error_info + L"Протокол, указанный в вызове функции сокета, не поддерживает такую семантику для требуемого типа сокета.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10042:
	{
		MessageBox(NULL, (error_info + L"Для вызова getsockopt или setsockopt был указан неизвестный, недопустимый или неподдерживаемый параметр или уровень.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10043:
	{
		MessageBox(NULL, (error_info + L"Требуемый протокол не настроен в данной системе, или не существует его реализации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10044:
	{
		MessageBox(NULL, (error_info + L"Поддержка указанного типа сокетов в этом семействе адресов отсутствует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10045:
	{
		MessageBox(NULL, (error_info + L"Предпринятая операция не поддерживается для выбранного типа объекта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10046:
	{
		MessageBox(NULL, (error_info + L"Данное семейство протоколов не настроено в системе, или оно не реализовано.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10047:
	{
		MessageBox(NULL, (error_info + L"Адрес несовместим с выбранным протоколом.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10048:
	{
		MessageBox(NULL, (error_info + L"Обычно разрешается одно использование адреса сокета (протокол/сетевой адрес/порт).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10049:
	{
		MessageBox(NULL, (error_info + L"Требуемый адрес для своего контекста неверен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10050:
	{
		MessageBox(NULL, (error_info + L"Операция на сокете обнаружила отключение сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10051:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка выполнить операцию на сокете при отключенной сети.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10052:
	{
		MessageBox(NULL, (error_info + L"Подключение было разорвано из-за ошибки во время выполнения операции.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10053:
	{
		MessageBox(NULL, (error_info + L"Программа на вашем хост-компьютере разорвала установленное подключение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10054:
	{
		MessageBox(NULL, (error_info + L"Удаленный хост принудительно разорвал существующее подключение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10055:
	{
		MessageBox(NULL, (error_info + L"Невозможно выполнить операцию на сокете, т.к. буфер слишком мал или очередь переполнена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10056:
	{
		MessageBox(NULL, (error_info + L"Сделан запрос на подключение для уже подключенного сокета.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10057:
	{
		MessageBox(NULL, (error_info + L"Запрос на отправку или получение данных (when sending on a datagram socket using a sendto call) no address was supplied.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10058:
	{
		MessageBox(NULL, (error_info + L"Запрос на отправку или получение данных был запрещен, т.к. сокет уже отключен в данном направлении на основании прежней запроса на его отключение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10059:
	{
		MessageBox(NULL, (error_info + L"Слишком много ссылок на некоторый ключевой объект.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10060:
	{
		MessageBox(NULL, (error_info + L"Попытка установить соединение была безуспешной, т.к. от другого компьютера за требуемое время не получен нужный отклик, или было разорвано уже установленное соединение из-за неверного отклика уже подключенного компьютера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10061:
	{
		MessageBox(NULL, (error_info + L"Подключение не установлено, т.к. конечный компьютер отверг запрос на подключение.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10062:
	{
		MessageBox(NULL, (error_info + L"Не удается преобразовать имя.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10063:
	{
		MessageBox(NULL, (error_info + L"Компонент имени или все имя слишком длинно.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10064:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка операции на сокете, т.к. конечный хост выключен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10065:
	{
		MessageBox(NULL, (error_info + L"Сделана попытка выполнить операцию на сокете для недоступного хоста.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10066:
	{
		MessageBox(NULL, (error_info + L"Нельзя удалить пустой каталог.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10067:
	{
		MessageBox(NULL, (error_info + L"Реализация Windows Sockets может иметь ограничения на количество одновременно выполняющихся приложений.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10068:
	{
		MessageBox(NULL, (error_info + L"Квота исчерпана.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10069:
	{
		MessageBox(NULL, (error_info + L"Дисковая квота исчерпана.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10070:
	{
		MessageBox(NULL, (error_info + L"Ссылка дескриптора файла более недоступна.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10071:
	{
		MessageBox(NULL, (error_info + L"Элемент локально недоступен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10091:
	{
		MessageBox(NULL, (error_info + L"WSAStartup не может выполняться в данное время, т.к. недоступна основная система, используемая для работы сетевых служб .").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10092:
	{
		MessageBox(NULL, (error_info + L"Указанная версия Windows Sockets не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10093:
	{
		MessageBox(NULL, (error_info + L"Или приложение не вызвало WSAStartup, или произошла ошибка в WSAStartup.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10101:
	{
		MessageBox(NULL, (error_info + L"Возвращено WSARecv или WSARecvFrom, чтобы показать — удаленная сторона инициировала правильную последовательность отключения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10102:
	{
		MessageBox(NULL, (error_info + L"WSALookupServiceNext не может возвратить каких-либо дополнительных результатов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10103:
	{
		MessageBox(NULL, (error_info + L"Был сделан вызов WSALookupServiceEnd, когда этот вызов еще обрабатывался. Обрабатываемый вызов был прерван.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10104:
	{
		MessageBox(NULL, (error_info + L"Недопустимая таблица вызова процедуры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10105:
	{
		MessageBox(NULL, (error_info + L"Недопустимый поставщик услуг.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10106:
	{
		MessageBox(NULL, (error_info + L"Не удается загрузить или инициализировать нужного поставщика услуг.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10107:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка системного вызова, что недопустимо.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10108:
	{
		MessageBox(NULL, (error_info + L"Неизвестная служба. Эта служба отсутствует в указанном пространстве имен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10109:
	{
		MessageBox(NULL, (error_info + L"Указанный класс не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10110:
	{
		MessageBox(NULL, (error_info + L"WSALookupServiceNext не может возвратить каких-либо дополнительных результатов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10111:
	{
		MessageBox(NULL, (error_info + L"Был сделан вызов WSALookupServiceEnd, когда этот вызов еще обрабатывался. Обрабатываемый вызов был прерван.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10112:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка запроса к базе данных, т.к. запрос был активно отвергнут.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11001:
	{
		MessageBox(NULL, (error_info + L"Этот хост неизвестен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11002:
	{
		MessageBox(NULL, (error_info + L"Обычно — это временная ошибка, возникающая во время разрешения имени узла, и означающая, что локальный сервер не получил ответа от заслуживающего доверие сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11003:
	{
		MessageBox(NULL, (error_info + L"При просмотре базы данных произошла неисправимая ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11004:
	{
		MessageBox(NULL, (error_info + L"Затребованное имя допустимо и оно найдено в базе данных,но для имени отсутствуют связанные с ним данные, которые были разрешены для него.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11005:
	{
		MessageBox(NULL, (error_info + L"Получен по меньшей мере один резерв.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11006:
	{
		MessageBox(NULL, (error_info + L"Получен по меньшей мере один путь.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11007:
	{
		MessageBox(NULL, (error_info + L"Отправители отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11008:
	{
		MessageBox(NULL, (error_info + L"Получатели отсутствуют.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11009:
	{
		MessageBox(NULL, (error_info + L"Резерв подтвержден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11010:
	{
		MessageBox(NULL, (error_info + L"Произошла ошибка из-за недостатка ресурсов.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11011:
	{
		MessageBox(NULL, (error_info + L"Отвергнуто по административным причинам — неправильные учетные данные.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11012:
	{
		MessageBox(NULL, (error_info + L"Неизвестный или вызывающий конфликты стиль.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11013:
	{
		MessageBox(NULL, (error_info + L"Обнаружена проблема общего типа с буфером filterspec или providerspecific.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11014:
	{
		MessageBox(NULL, (error_info + L"Обнаружена проблема с частью «flowspec».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11015:
	{
		MessageBox(NULL, (error_info + L"Общая ошибка QOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11016:
	{
		MessageBox(NULL, (error_info + L"В спецификаторах потока найден недопустимый или нераспознанный тип службы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11017:
	{
		MessageBox(NULL, (error_info + L"Недопустимый или нераспознанный спецификатор потока был найден в структуре QOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11018:
	{
		MessageBox(NULL, (error_info + L"Недопустимый буфер QOS, определяемый поставщиком.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11019:
	{
		MessageBox(NULL, (error_info + L"Использован недопустимый стиль фильтра QOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11020:
	{
		MessageBox(NULL, (error_info + L"Использован недопустимый стиль фильтра QOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11021:
	{
		MessageBox(NULL, (error_info + L"В FLOWDESCRIPTOR был задан неверный номер QOS FILTERSPEC.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11022:
	{
		MessageBox(NULL, (error_info + L"В определяемом поставщиком буфере QOS задан объект с неверным полем ObjectLength.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11023:
	{
		MessageBox(NULL, (error_info + L"В структуре QOS заданы неверные номера дескрипторов потока.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11024:
	{
		MessageBox(NULL, (error_info + L"В буфере QOS, задаваемом поставщиком, найден нераспознанный объект.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11025:
	{
		MessageBox(NULL, (error_info + L"В буфере QOS, задаваемом поставщиком, найден объект с недопустимой политикой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11026:
	{
		MessageBox(NULL, (error_info + L"В списке дескрипторов потока обнаружен недопустимый дескриптор потока QOS.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11027:
	{
		MessageBox(NULL, (error_info + L"Недопустимый или нераспознанный спецификатор потока обнаружен в буфере QOS, определяемом поставщиком.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11028:
	{
		MessageBox(NULL, (error_info + L"Недопустимый FILTERSPEC обнаружен в буфере QOS, определяемом поставщиком.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11029:
	{
		MessageBox(NULL, (error_info + L"Недопустимый объект режима изменения формы обнаружен в буфере QOS, определяемом поставщиком.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11030:
	{
		MessageBox(NULL, (error_info + L"Недопустимый объект формирования уровня обнаружен в буфере QOS, определяемом поставщиком.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11031:
	{
		MessageBox(NULL, (error_info + L"Зарезервированный элемент политики обнаружен в буфере QOS, определяемом поставщиком.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13000:
	{
		MessageBox(NULL, (error_info + L"Указанная политика быстрого режима уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13001:
	{
		MessageBox(NULL, (error_info + L"Указанная политика быстрого режима не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13002:
	{
		MessageBox(NULL, (error_info + L"Указанная политика быстрого режима сейчас используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13003:
	{
		MessageBox(NULL, (error_info + L"Указанная политика основного режима уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13004:
	{
		MessageBox(NULL, (error_info + L"Указанная политика основного режима не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13005:
	{
		MessageBox(NULL, (error_info + L"Указанная политика основного режима сейчас используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13006:
	{
		MessageBox(NULL, (error_info + L"Указанный фильтр основного режима уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13007:
	{
		MessageBox(NULL, (error_info + L"Указанный фильтр основного режима не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13008:
	{
		MessageBox(NULL, (error_info + L"Указанный фильтр транспортного режима уже существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13009:
	{
		MessageBox(NULL, (error_info + L"Указанный фильтр транспортного режима не существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13010:
	{
		MessageBox(NULL, (error_info + L"Указанный список проверки подлинности для основного режима существует.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13011:
	{
		MessageBox(NULL, (error_info + L"Указанный список проверки подлинности основного режима не найден.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13012:
	{
		MessageBox(NULL, (error_info + L"Указанная политика быстрого режима сейчас используется.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13013:
	{
		MessageBox(NULL, (error_info + L"Указанная политика основного режима не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13014:
	{
		MessageBox(NULL, (error_info + L"Указанная политика быстрого режима не найдена.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13015:
	{
		MessageBox(NULL, (error_info + L"Файл манифеста содержит одну или несколько синтаксических ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13016:
	{
		MessageBox(NULL, (error_info + L"Приложение попыталось активировать отключенный контекст активации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13017:
	{
		MessageBox(NULL, (error_info + L"Указанный ключ соответствия не обнаружен ни в одном из активных контекстов активации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13018:
	{
		MessageBox(NULL, (error_info + L"Идет процесс удаления фильтра основного режима.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13019:
	{
		MessageBox(NULL, (error_info + L"Идет процесс удаления транспортного фильтра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13020:
	{
		MessageBox(NULL, (error_info + L"Идет процесс удаления туннельного фильтра.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13021:
	{
		MessageBox(NULL, (error_info + L"Идет процесс удаления политики основного режима.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13022:
	{
		MessageBox(NULL, (error_info + L"Идет процесс удаления пакета проверки подлинности основного режима.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13023:
	{
		MessageBox(NULL, (error_info + L"Идет процесс удаления политики быстрого режима.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13800:
	{
		MessageBox(NULL, (error_info + L"ERROR_IPSEC_IKE_NEG_STATUS_BEGIN").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13801:
	{
		MessageBox(NULL, (error_info + L"Неприемлемые учетные данные проверки подлинности IKE").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13802:
	{
		MessageBox(NULL, (error_info + L"Неприемлемые атрибуты IKE-безопасности").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13803:
	{
		MessageBox(NULL, (error_info + L"Выполняется согласование IKE").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13804:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13805:
	{
		MessageBox(NULL, (error_info + L"Таймаут согласования").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13806:
	{
		MessageBox(NULL, (error_info + L"IKE не удалось найти действительный сертификат компьютера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13807:
	{
		MessageBox(NULL, (error_info + L"IKE SA удалено другим узлом до того, как закончено установление").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13808:
	{
		MessageBox(NULL, (error_info + L"IKE SA удалено до того, как закончено установление").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13809:
	{
		MessageBox(NULL, (error_info + L"Запрос на согласование слишком долго находился в очереди").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13810:
	{
		MessageBox(NULL, (error_info + L"Запрос на согласование слишком долго находился в очереди").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13811:
	{
		MessageBox(NULL, (error_info + L"Запрос на согласование слишком долго находился в очереди").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13812:
	{
		MessageBox(NULL, (error_info + L"Запрос на согласование слишком долго находился в очереди").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13813:
	{
		MessageBox(NULL, (error_info + L"Нет отклика").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13814:
	{
		MessageBox(NULL, (error_info + L"Согласование выполнялось слишком долго").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13815:
	{
		MessageBox(NULL, (error_info + L"Согласование выполнялось слишком долго").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13816:
	{
		MessageBox(NULL, (error_info + L"Неопознанная ошибка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13817:
	{
		MessageBox(NULL, (error_info + L"Ошибка проверки отзыва сертификата").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13818:
	{
		MessageBox(NULL, (error_info + L"Недопустимое использование ключа сертификата").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13819:
	{
		MessageBox(NULL, (error_info + L"Недопустимый тип сертификата").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13820:
	{
		MessageBox(NULL, (error_info + L"Нет закрытого ключа, связанного с этим сертификатом компьютера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13822:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки Диффи-Хелмана").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13824:
	{
		MessageBox(NULL, (error_info + L"Недопустимый заголовок").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13825:
	{
		MessageBox(NULL, (error_info + L"Нет настроенной политики").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13826:
	{
		MessageBox(NULL, (error_info + L"Ошибка при проверке подписи файла").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13827:
	{
		MessageBox(NULL, (error_info + L"Не удалось выполнить проверку подлинности с помощью Kerberos").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13828:
	{
		MessageBox(NULL, (error_info + L"Сертификат точки не имеет открытого ключа").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13829:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки ошибки полезных данных").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13830:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных SA").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13831:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных Proposal").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13832:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных Transform").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13833:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных KE").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13834:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных ID").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13835:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных сертификата").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13836:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных запроса сертификата").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13837:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных хеша").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13838:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных подписи").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13839:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных Nonce").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13840:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных извещения").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13841:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных удаления").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13842:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки полезных данных VendorId").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13843:
	{
		MessageBox(NULL, (error_info + L"Получены недопустимые полезные данные").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13844:
	{
		MessageBox(NULL, (error_info + L"Загружено программное SA").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13845:
	{
		MessageBox(NULL, (error_info + L"Разорвано программное SA").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13846:
	{
		MessageBox(NULL, (error_info + L"Получен недопустимый файл «cookie».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}
	// ^([0-9]+):	(.*?)[\\.|]
	case 13847:
	{
		MessageBox(NULL, (error_info + L"Узлу не удалось отправить действительный сертификат компьютера").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13848:
	{
		MessageBox(NULL, (error_info + L"Ошибка проверки отзыва сертификата точки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13849:
	{
		MessageBox(NULL, (error_info + L"Новая политика сделала недопустимыми SA, сформированные при старой политике").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13850:
	{
		MessageBox(NULL, (error_info + L"Отсутствует политика IKE для основного режима.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13851:
	{
		MessageBox(NULL, (error_info + L"Не удалось включить привилегии TCB.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13852:
	{
		MessageBox(NULL, (error_info + L"Не удалось загрузить SECURITY.DLL.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13853:
	{
		MessageBox(NULL, (error_info + L"Не удалось получить адрес доставки таблицы функций безопасности от SSPI.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13854:
	{
		MessageBox(NULL, (error_info + L"Не удалось запросить пакет безопасности Kerberos для получения максимального размера маркера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13855:
	{
		MessageBox(NULL, (error_info + L"Не удалось получить учетные данные сервера Kerberos для службы ISAKMP/ERROR_IPSEC_IKE. Проверка Kerberos работать не будет. Наиболее вероятная причина — отсутствие членства в домене. Если компьютер входит в рабочую группу, это нормально.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13856:
	{
		MessageBox(NULL, (error_info + L"Не удалось определить имя SSPI для службы ISAKMP/ERROR_IPSEC_IKE (QueryCredentialsAttributes).").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13857:
	{
		MessageBox(NULL, (error_info + L"Не удалось получить новый SPI для входящего SA от драйвера LPSEC. Вероятная причина: драйвер не имеет подходящего фильтра. Проверьте вашу политику и фильтры в ней.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13858:
	{
		MessageBox(NULL, (error_info + L"Недопустимый фильтр").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13859:
	{
		MessageBox(NULL, (error_info + L"Ошибка выделения памяти.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13860:
	{
		MessageBox(NULL, (error_info + L"Не удалось добавить сопоставление безопасности к драйверу IPSec. Вероятная причина: согласование IKE потребовало слишком длительного промежутка времени. Если проблема повторяется, уменьшите нагрузку на этот компьютер.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13861:
	{
		MessageBox(NULL, (error_info + L"Недопустимая политика").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13862:
	{
		MessageBox(NULL, (error_info + L"Недопустимый DOI").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13863:
	{
		MessageBox(NULL, (error_info + L"Недопустимая ситуация").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13864:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки Диффи-Хелмана").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13865:
	{
		MessageBox(NULL, (error_info + L"Недопустимая группа Диффи-Хелмана").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13866:
	{
		MessageBox(NULL, (error_info + L"Ошибка при шифровании полезных данных").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13867:
	{
		MessageBox(NULL, (error_info + L"Ошибка при расшифровке полезных данных").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13868:
	{
		MessageBox(NULL, (error_info + L"Ошибка сопоставления групповой политики").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13869:
	{
		MessageBox(NULL, (error_info + L"Не поддерживаемый код (ID)").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13870:
	{
		MessageBox(NULL, (error_info + L"Ошибка при проверке хеша").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13871:
	{
		MessageBox(NULL, (error_info + L"Неправильный хеш-алгоритм").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13872:
	{
		MessageBox(NULL, (error_info + L"Неправильный размер хеша").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13873:
	{
		MessageBox(NULL, (error_info + L"Неправильный алгоритм шифрования").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13874:
	{
		MessageBox(NULL, (error_info + L"Недопустимый алгоритм проверки подлинности").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13875:
	{
		MessageBox(NULL, (error_info + L"Неправильная подпись сертификата").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13876:
	{
		MessageBox(NULL, (error_info + L"Ошибка загрузки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13877:
	{
		MessageBox(NULL, (error_info + L"Удалено через RPC-вызов").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13878:
	{
		MessageBox(NULL, (error_info + L"Для выполнения повторной инициализации создано временное состояние. Это не сбой.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13879:
	{
		MessageBox(NULL, (error_info + L"Полученное время жизни меньше минимально разрешенного в Windows 2000. Исправьте политику на узле.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13881:
	{
		MessageBox(NULL, (error_info + L"Длина ключа в сертификате слишком мала для настроенных требований безопасности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13882:
	{
		MessageBox(NULL, (error_info + L"Превышено предельное число установленных для узла MM SA.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13883:
	{
		MessageBox(NULL, (error_info + L"IKE получена политика, отключающая согласование.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13884:
	{
		MessageBox(NULL, (error_info + L"ERROR_IPSEC_IKE_NEG_STATUS_END").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14000:
	{
		MessageBox(NULL, (error_info + L"Указанный раздел не существует в данном контексте активации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14001:
	{
		MessageBox(NULL, (error_info + L"Приложение не было запущено, поскольку оно некорректно настроено. Повторная установка приложения может решить данную проблему.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14002:
	{
		MessageBox(NULL, (error_info + L"Недопустимый формат привязки данных приложения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14003:
	{
		MessageBox(NULL, (error_info + L"Указанная совокупность не установлена в системе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14004:
	{
		MessageBox(NULL, (error_info + L"Файл манифеста не начинается с необходимого тега и информации форматирования.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14005:
	{
		MessageBox(NULL, (error_info + L"Файл манифеста содержит одну или несколько синтаксических ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14006:
	{
		MessageBox(NULL, (error_info + L"Приложение попыталось активировать отключенный контекст активации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14007:
	{
		MessageBox(NULL, (error_info + L"Указанный ключ соответствия не обнаружен ни в одном из активных контекстов активации.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14008:
	{
		MessageBox(NULL, (error_info + L"Версия компонента, требуемая для приложения, конфликтует с другой, уже активной версией.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14009:
	{
		MessageBox(NULL, (error_info + L"Тип указанного раздела контекста активации не соответствует использованному запросу API.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14010:
	{
		MessageBox(NULL, (error_info + L"Недостаток системных ресурсов потребовал отключения изолированной активации для текущего потока исполнения.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14011:
	{
		MessageBox(NULL, (error_info + L"Ошибка попытки установки контекста активации по умолчанию, поскольку контекст активации по умолчанию уже установлен.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14012:
	{
		MessageBox(NULL, (error_info + L"Указанный идентификатор группы кодировок не распознан.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14013:
	{
		MessageBox(NULL, (error_info + L"Указанная кодировка не распознана.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14014:
	{
		MessageBox(NULL, (error_info + L"Манифест содержит ссылку на недопустимый URI.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14015:
	{
		MessageBox(NULL, (error_info + L"Манифест приложения содержит ссылку на зависимую совокупность, которая не установлена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14016:
	{
		MessageBox(NULL, (error_info + L"Манифест совокупности, используемой приложением, ссылается на зависимую совокупность, которая не установлена").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14017:
	{
		MessageBox(NULL, (error_info + L"Манифест содержит атрибут для недопустимого удостоверения совокупности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14018:
	{
		MessageBox(NULL, (error_info + L"В манифесте отсутствует необходимая спецификация пространства имен по умолчанию для элемента совокупности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14019:
	{
		MessageBox(NULL, (error_info + L"Манифест содержит спецификацию пространства имен по умолчанию для элемента совокупности, однако его значение отличается от «urn:schemas-microsoft-com:asm.v1″.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14020:
	{
		MessageBox(NULL, (error_info + L"Частный манифест пересек точку повторной обработки").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14021:
	{
		MessageBox(NULL, (error_info + L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, содержат файлы с одинаковыми именами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14022:
	{
		MessageBox(NULL, (error_info + L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, содержат классы окон с одинаковыми именами.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14023:
	{
		MessageBox(NULL, (error_info + L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют одинаковые идентификаторы CLSID для COM сервера.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14024:
	{
		MessageBox(NULL, (error_info + L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют прокси для одинаковых идентификаторов IID интерфейсов COM.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14025:
	{
		MessageBox(NULL, (error_info + L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют одинаковые идентификаторы TLBID для библиотеки типов COM.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14026:
	{
		MessageBox(NULL, (error_info + L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют одинаковые идентификаторы ProgID COM.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14027:
	{
		MessageBox(NULL, (error_info + L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют разные версии одинакового компонента, что недопустимо.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14028:
	{
		MessageBox(NULL, (error_info + L"Файл компонента не соответствует информации проверки, указанной в манифестекомпонента.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14029:
	{
		MessageBox(NULL, (error_info + L"Манифест политики содержит одну или более синтаксических ошибок.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14030:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Ожидалась строковое значение, однако не было обнаружено открывающей кавычки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14031:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: В комментарии использован недопустимый синтаксис.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14032:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Имя начинается с недопустимого символа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14033:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Имя содержит недопустимый символ.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14034:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Строковое значение содержит недопустимый символ.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14035:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Недопустимый синтаксис в декларации XML.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14036:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: В тексте содержится недопустимый символ.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14037:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Отсутствует требуемый пробел.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14038:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Ожидался символ ‘>\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14039:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Ожидалась запятая.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14040:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Несогласованные круглые скобки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14041:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Внутренняя ошибка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14042:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Пробелы в данном месте не допускаются.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14043:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Достигнут конец файла в недопустимом состоянии текущей кодировки.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14044:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Утеряна круглая скобка.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14045:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Утерян символ одиночной или двойной кавычки (\\\\' или \\').").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14046:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: В имени не допускаются несколько двойных кавычек.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14047:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Недопустимый символ для десятичной цифры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14048:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Недопустимый символ для шестнадцатеричной цифры.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14049:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Недопустимое значение символа UNICODE character для данной платформы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14050:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Ожидался пробел или ‘?\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14051:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Не ожидался конец тега в данном месте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14052:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Следующий теги не закрыты: %1.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14053:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Повторяющийся атрибут.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14054:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: В XML документе допускается только вышележащий элемент.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14055:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Ошибка на верхнем уровне документа.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14056:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Недопустимое описание XML.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14057:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: XML документ должен содержать элемент верхнего уровня.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14058:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Неожиданное окончание файла.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14059:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Описание параметров не может быть использовано в описании разметки во внутреннем наборе.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14060:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Элемент не закрыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14061:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Конечный элемент не содержит символа ‘>\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14062:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Символьная строка не закрыта.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14063:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Комментарий не закрыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14064:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Описание не закрыто.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14065:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Раздел CDATA не закрыт.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14066:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Префикс пространства имен не может начинаться с зарезервированной строки «xml».").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14067:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Система не поддерживает указанную кодировку.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14068:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Переключение с текущей кодировки на указанную не поддерживается.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14069:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Имя ‘xml\\' зарезервировано и должно начинаться с маленькой буквы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14070:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Изолированный атрибут должен иметь значение ‘yes\\' или ‘no\\'.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14071:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Изолированный атрибут не может быть использован во внешних сущностях.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14072:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Недопустимый номер версии.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14073:
	{
		MessageBox(NULL, (error_info + L"Ошибка обработки манифеста: Утерян знак равенства между атрибутом и его значением.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14074:
	{
		MessageBox(NULL, (error_info + L"Ошибка защиты совокупности: Не удается восстановить указанную совокупность.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14075:
	{
		MessageBox(NULL, (error_info + L"Ошибка защиты совокупности: Открытый ключ для совокупности слишком короткий.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14076:
	{
		MessageBox(NULL, (error_info + L"Ошибка защиты совокупности: Недопустимый каталог для совокупности, или он не соответствует манифесту совокупности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14077:
	{
		MessageBox(NULL, (error_info + L"HRESULT не может быть транслирована в соответствующий код ошибки Win32.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14078:
	{
		MessageBox(NULL, (error_info + L"Ошибка защиты совокупности: Отсутствует каталог для совокупности.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14079:
	{
		MessageBox(NULL, (error_info + L"В указанном удостоверении совокупности отсутствует один или несколько атрибутов, которые должны присутствовать в данном контексте.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14080:
	{
		MessageBox(NULL, (error_info + L"Указанное удостоверение совокупности содержит один или несколько атрибутов, имена которых содержат недопустимые для XML имен символы.").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}


	default:
		MessageBox(NULL, (error_info + L"Неизвестная ошибка").c_str(), L"Ошибка", MB_ICONERROR);
		break;
	}


}

// ^([0-9]):	(.*?)\\.
// case $1:\\n{ \\n\\tMessageBox(NULL, (error_info + L"$2").c_str(), L"Ошибка", MB_ICONERROR);\\n}