#include "NIA_errors.h"

// erros code from https://msbro.ru/index.php/archives/3578

void NIA_ShowErrorDescriptionByErrorId(int error_id)
{

	switch (error_id)
	{

	case 0:
	{
		MessageBox(NULL, L"Операция успешно завершена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1:
	{
		MessageBox(NULL, L"Неверная функция.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2:
	{
		MessageBox(NULL, L"Не удается найти указанный файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3:
	{
		MessageBox(NULL, L"Системе не удается найти указанный путь.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4:
	{
		MessageBox(NULL, L"Системе не удается открыть файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5:
	{
		MessageBox(NULL, L"Отказано в доступе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6:
	{
		MessageBox(NULL, L"Неверный дескриптор.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7:
	{
		MessageBox(NULL, L"Повреждены управляющие блоки памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}
	case 8:
	{
		MessageBox(NULL, L"Недостаточно памяти для обработки команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9:
	{
		MessageBox(NULL, L"Неверный адрес управляющего блока памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10:
	{
		MessageBox(NULL, L"Ошибка в среде.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11:
	{
		MessageBox(NULL, L"Была сделана попытка загрузить программу, имеющую неверный формат.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 12:
	{
		MessageBox(NULL, L"Код доступа неверен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13:
	{
		MessageBox(NULL, L"Недопустимые данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14:
	{
		MessageBox(NULL, L"Недостаточно памяти для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 15:
	{
		MessageBox(NULL, L"Системе не удается найти указанный диск.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 16:
	{
		MessageBox(NULL, L"Не удается удалить папку", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 17:
	{
		MessageBox(NULL, L"Системе не удается переместить файл на другой диск.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 18:
	{
		MessageBox(NULL, L"Больше файлов не осталось.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 19:
	{
		MessageBox(NULL, L"Носитель защищен от записи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 20:
	{
		MessageBox(NULL, L"Системе не удается найти указанное устройство.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 21:
	{
		MessageBox(NULL, L"Устройство не готово.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 22:
	{
		MessageBox(NULL, L"Устройство не опознает команду.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 23:
	{
		MessageBox(NULL, L"Ошибка в данных (CRC).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 24:
	{
		MessageBox(NULL, L"Длина выданной программой команды слишком велика.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 25:
	{
		MessageBox(NULL, L"Не удается найти заданную область или дорожку на диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 26:
	{
		MessageBox(NULL, L"Нет доступа к диску или дискете.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 27:
	{
		MessageBox(NULL, L"Не удается найти заданный сектор на диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 28:
	{
		MessageBox(NULL, L"Нет бумаги в принтере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 29:
	{
		MessageBox(NULL, L"Системе не удается произвести запись на устройство.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 30:
	{
		MessageBox(NULL, L"Системе не удается произвести чтение с устройства.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 31:
	{
		MessageBox(NULL, L"Присоединенное к системе устройство не работает.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 32:
	{
		MessageBox(NULL, L"Процесс не может получить доступ к файлу, так как этот файл занят другим процессом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 33:
	{
		MessageBox(NULL, L"Процесс не может получить доступ к файлу, так как часть этого файла заблокирована другим процессом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 34:
	{
		MessageBox(NULL, L"В устройство вставлен неверный диск.Вставьте %2 (серийный номер тома: %3)в устройство %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 36:
	{
		MessageBox(NULL, L"Слишком много файлов открыто для совместного доступа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 38:
	{
		MessageBox(NULL, L"Достигнут конец файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 39:
	{
		MessageBox(NULL, L"Нет места на диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 50:
	{
		MessageBox(NULL, L"Такой запрос не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 51:
	{
		MessageBox(NULL, L"Невозможно найти сетевой путь. Убедитесь, что сетевой путь указан верно, а конечный компьютер включен и не занят. Если система вновь не сможет найти путь, обратитесь к сетевому администратору.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 52:
	{
		MessageBox(NULL, L"Не удалось подключиться к сети из-за существования совпадающих имен. Измените имя компьютера на панели управления и повторите попытку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 53:
	{
		MessageBox(NULL, L"Не найден сетевой путь.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 54:
	{
		MessageBox(NULL, L"Сеть занята.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 55:
	{
		MessageBox(NULL, L"Сетевой ресурс или устройство более недоступно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 56:
	{
		MessageBox(NULL, L"Достигнут предел числа команд NetBIOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 57:
	{
		MessageBox(NULL, L"Аппаратная ошибка сетевой платы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 58:
	{
		MessageBox(NULL, L"Указанный сервер не может выполнить требуемую операцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 59:
	{
		MessageBox(NULL, L"Непредвиденная сетевая ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 60:
	{
		MessageBox(NULL, L"Несовместимый удаленный контроллер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 61:
	{
		MessageBox(NULL, L"Очередь печати переполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 62:
	{
		MessageBox(NULL, L"На сервере нет места для хранения ожидающего печати файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 63:
	{
		MessageBox(NULL, L"Ваш файл, находившийся в очереди вывода на печать, был удален.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 64:
	{
		MessageBox(NULL, L"Указанное сетевое имя более недоступно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 65:
	{
		MessageBox(NULL, L"Нет доступа к сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 66:
	{
		MessageBox(NULL, L"Неверно указан тип сетевого ресурса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 67:
	{
		MessageBox(NULL, L"Не найдено сетевое имя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 68:
	{
		MessageBox(NULL, L"Превышен предел числа имен для сетевого адаптера локального компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 69:
	{
		MessageBox(NULL, L"Превышен предел по числу сеансов NetBIOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 70:
	{
		MessageBox(NULL, L"Сервер сети был остановлен или находится в процессе запуска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 71:
	{
		MessageBox(NULL, L"Дополнительные подключения к этому удаленному компьютеру в настоящее время невозможны, поскольку число подключений к компьютеру достигло предела.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 72:
	{
		MessageBox(NULL, L"Работа указанного принтера или дискового накопителя была остановлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 80:
	{
		MessageBox(NULL, L"Файл существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 82:
	{
		MessageBox(NULL, L"Не удается создать файл или папку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 83:
	{
		MessageBox(NULL, L"Сбой прерывания INT 24.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 84:
	{
		MessageBox(NULL, L"Недостаточно памяти для обработки запроса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 85:
	{
		MessageBox(NULL, L"Имя локального устройства уже используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 86:
	{
		MessageBox(NULL, L"Сетевой пароль указан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 87:
	{
		MessageBox(NULL, L"Параметр задан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 88:
	{
		MessageBox(NULL, L"Ошибка записи в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 89:
	{
		MessageBox(NULL, L"В настоящее время системе не удается запустить другой процесс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 100:
	{
		MessageBox(NULL, L"Не удается создать еще один системный семафор.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 101:
	{
		MessageBox(NULL, L"Семафор эксклюзивного доступа занят другим процессом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 102:
	{
		MessageBox(NULL, L"Семафор установлен и не может быть закрыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 103:
	{
		MessageBox(NULL, L"Семафор не может быть установлен повторно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 104:
	{
		MessageBox(NULL, L"Запросы к семафорам эксклюзивного доступа на время выполнения прерываний не допускаются.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 105:
	{
		MessageBox(NULL, L"Этот семафор более не принадлежит использовавшему его процессу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 106:
	{
		MessageBox(NULL, L"Вставьте диск в устройство %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 107:
	{
		MessageBox(NULL, L"Программа была остановлена, так как нужный диск вставлен не был.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 108:
	{
		MessageBox(NULL, L"Диск занят или заблокирован другим процессом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 109:
	{
		MessageBox(NULL, L"Канал был закрыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 110:
	{
		MessageBox(NULL, L"Системе не удается открыть указанное устройство или файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 111:
	{
		MessageBox(NULL, L"Указано слишком длинное имя файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 112:
	{
		MessageBox(NULL, L"Недостаточно места на диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 113:
	{
		MessageBox(NULL, L"Исчерпаны внутренние идентификаторы файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 114:
	{
		MessageBox(NULL, L"Результирующий внутренний идентификатор файла неправилен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 117:
	{
		MessageBox(NULL, L"Вызов IOCTL приложением произведен неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 118:
	{
		MessageBox(NULL, L"Параметр проверки записи данных имеет неверное значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 119:
	{
		MessageBox(NULL, L"Система не может обработать полученную команду.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 120:
	{
		MessageBox(NULL, L"Эта функция не поддерживается для этой системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 121:
	{
		MessageBox(NULL, L"Превышен таймаут семафора.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 122:
	{
		MessageBox(NULL, L"Область данных, переданная по системному вызову, слишком мала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 123:
	{
		MessageBox(NULL, L"Синтаксическая ошибка в имени файла, имени папки или метке тома.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 124:
	{
		MessageBox(NULL, L"Неверный уровень системного вызова.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 125:
	{
		MessageBox(NULL, L"У диска отсутствует метка тома.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 126:
	{
		MessageBox(NULL, L"Не найден указанный модуль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 127:
	{
		MessageBox(NULL, L"Не найдена указанная процедура.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 128:
	{
		MessageBox(NULL, L"Дочерние процессы, окончания которых требуется ожидать, отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 129:
	{
		MessageBox(NULL, L"Приложение %1 нельзя запустить в режиме Win32.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 130:
	{
		MessageBox(NULL, L"Попытка использовать дескриптор файла для открытия раздела диска и выполнения операции, отличающейся от ввода/вывода нижнего уровня.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 131:
	{
		MessageBox(NULL, L"Попытка поместить указатель на файл перед началом файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 132:
	{
		MessageBox(NULL, L"Указатель на файл не может быть установлен на заданное устройство или файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 133:
	{
		MessageBox(NULL, L"Команды JOIN и SUBST не могут быть использованы для дисков, содержащих уже объединенные диски.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 134:
	{
		MessageBox(NULL, L"Попытка использовать команду JOIN или SUBST для диска, уже включенного в набор объединенных дисков.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 135:
	{
		MessageBox(NULL, L"Попытка использовать команду JOIN или SUBST для диска, который уже был отображен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 136:
	{
		MessageBox(NULL, L"Попытка снять признак объединения с диска, для которого команда JOIN не выполнялась.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 137:
	{
		MessageBox(NULL, L"Попытка снять признак отображения с диска, для которого команда SUBST не выполнялась.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 138:
	{
		MessageBox(NULL, L"Попытка объединить диск с папкой на объединенном диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 139:
	{
		MessageBox(NULL, L"Попытка отобразить диск на папку, находящуюся на отображенном диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 140:
	{
		MessageBox(NULL, L"Попытка объединить диск с папкой на отображенном диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 141:
	{
		MessageBox(NULL, L"Попытка отобразить диск на папку, находящуюся на объединенном диске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 142:
	{
		MessageBox(NULL, L"В настоящее время выполнить команду JOIN или SUBST невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 143:
	{
		MessageBox(NULL, L"Невозможно объединить (или отобразить) диск с папкой (или на папку) этого же диска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 144:
	{
		MessageBox(NULL, L"Эта папка не является подпапкой корневой папки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 145:
	{
		MessageBox(NULL, L"Папка не пуста.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 146:
	{
		MessageBox(NULL, L"Указанный путь используется для отображенного диска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 147:
	{
		MessageBox(NULL, L"Недостаточно ресурсов для обработки команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 148:
	{
		MessageBox(NULL, L"Указанный путь в настоящее время использовать нельзя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 149:
	{
		MessageBox(NULL, L"Попытка объединить или отобразить диск, папка на котором уже используется для отображения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 150:
	{
		MessageBox(NULL, L"Сведения о трассировке в файле CONFIG.SYS не найдены, либо трассировка запрещена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 151:
	{
		MessageBox(NULL, L"Число семафоров для DosMuxSemWait задано неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 152:
	{
		MessageBox(NULL, L"Не выполнен вызов DosMuxSemWait. Установлено слишком много семафоров.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 153:
	{
		MessageBox(NULL, L"Некорректный вызов DosMuxSemWait.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 154:
	{
		MessageBox(NULL, L"Длина метки тома превосходит предел, установленный для файловой системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 155:
	{
		MessageBox(NULL, L"Не удается создать еще один поток команд.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 156:
	{
		MessageBox(NULL, L"Принимающий процесс отклонил сигнал.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 157:
	{
		MessageBox(NULL, L"Сегмент уже освобожден и не может быть заблокирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 158:
	{
		MessageBox(NULL, L"Блокировка с сегмента уже снята.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 159:
	{
		MessageBox(NULL, L"Адрес идентификатора потока команд задан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 160:
	{
		MessageBox(NULL, L"Неверны один или несколько аргументов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 161:
	{
		MessageBox(NULL, L"Указан недопустимый путь.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 162:
	{
		MessageBox(NULL, L"Сигнал уже находится в состоянии обработки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 164:
	{
		MessageBox(NULL, L"Создание дополнительных потоков команд невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 167:
	{
		MessageBox(NULL, L"Не удается снять блокировку с области файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 170:
	{
		MessageBox(NULL, L"Требуемый ресурс занят.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 173:
	{
		MessageBox(NULL, L"Запрос на блокировку соответствует определенной области.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 174:
	{
		MessageBox(NULL, L"Файловая система не поддерживает указанные изменения типа блокировки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 180:
	{
		MessageBox(NULL, L"Системой обнаружен неверный номер сегмента.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 182:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 183:
	{
		MessageBox(NULL, L"Невозможно создать файл, так как он уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 186:
	{
		MessageBox(NULL, L"Передан неверный флаг.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 187:
	{
		MessageBox(NULL, L"Не найдено указанное имя системного семафора.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 188:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 189:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 190:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 191:
	{
		MessageBox(NULL, L"Не удается запустить %1 в режиме Win32.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 192:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 193:
	{
		MessageBox(NULL, L"%1 не является приложением Win32.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 194:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 195:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 196:
	{
		MessageBox(NULL, L"Операционная система не может запустить это приложение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 197:
	{
		MessageBox(NULL, L"Конфигурация операционной системы не рассчитана на запуск этого приложения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 198:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 199:
	{
		MessageBox(NULL, L"Операционная система не может запустить это приложение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 200:
	{
		MessageBox(NULL, L"Сегмент кода должен быть меньше 64 КБ.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 201:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 202:
	{
		MessageBox(NULL, L"Операционная система не может запустить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 203:
	{
		MessageBox(NULL, L"Системе не удается найти указанный параметр среды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 205:
	{
		MessageBox(NULL, L"Ни один из процессов в дереве команды не имеет обработчика сигналов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 206:
	{
		MessageBox(NULL, L"Имя файла или его расширение имеет слишком большую длину.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 207:
	{
		MessageBox(NULL, L"Кольцо 2 стека занято.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 208:
	{
		MessageBox(NULL, L"Подстановочные знаки * и/или ? заданы неверно или образуют неверный шаблон имени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 209:
	{
		MessageBox(NULL, L"Отправляемый сигнал неверен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 210:
	{
		MessageBox(NULL, L"Не удается установить обработчик сигналов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 212:
	{
		MessageBox(NULL, L"Сегмент заблокирован и не может быть перемещен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 214:
	{
		MessageBox(NULL, L"К этой программе или модулю присоединено слишком много динамически подключаемых модулей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 215:
	{
		MessageBox(NULL, L"Вызовы LoadModule не могут быть вложены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 216:
	{
		MessageBox(NULL, L"Файл изображения %1 не поврежден, но предназначен для другого типа компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 230:
	{
		MessageBox(NULL, L"Неправильное состояние канала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 231:
	{
		MessageBox(NULL, L"Все копии канала заняты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 232:
	{
		MessageBox(NULL, L"Идет закрытие канала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 233:
	{
		MessageBox(NULL, L"С обоих концов канала отсутствуют процессы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 234:
	{
		MessageBox(NULL, L"Имеются дополнительные данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 240:
	{
		MessageBox(NULL, L"Сеанс был прекращен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 254:
	{
		MessageBox(NULL, L"Имя дополнительного атрибута было задано неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 255:
	{
		MessageBox(NULL, L"Дополнительные атрибуты несовместимы между собой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 258:
	{
		MessageBox(NULL, L"Время ожидания операции истекло.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 259:
	{
		MessageBox(NULL, L"Дополнительные данные отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 266:
	{
		MessageBox(NULL, L"Не удается использовать функции копирования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 267:
	{
		MessageBox(NULL, L"Неверно задано имя папки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 275:
	{
		MessageBox(NULL, L"Дополнительные атрибуты не уместились в буфере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 276:
	{
		MessageBox(NULL, L"Файл дополнительных атрибутов поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 277:
	{
		MessageBox(NULL, L"Файл дополнительных атрибутов переполнен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 278:
	{
		MessageBox(NULL, L"Неверно указан дескриптор дополнительного атрибута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 282:
	{
		MessageBox(NULL, L"Установленная файловая система не поддерживает дополнительные атрибуты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 288:
	{
		MessageBox(NULL, L"Попытка освободить не принадлежащий процессу объект синхронизации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 298:
	{
		MessageBox(NULL, L"Слишком много попыток занесения события для семафора.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 299:
	{
		MessageBox(NULL, L"Запрос ReadProcessMemory или WriteProcessMemory был выполнен только частично.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 300:
	{
		MessageBox(NULL, L"Запрос на нежесткую блокировку (oplock) отклонен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 301:
	{
		MessageBox(NULL, L"Системой получено недопустимое подтверждение на нежесткую блокировку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 302:
	{
		MessageBox(NULL, L"Том слишком сильно фрагментирован для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 303:
	{
		MessageBox(NULL, L"Невозможно открыть файл, поскольку это происходит в удаляемом процессе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 317:
	{
		MessageBox(NULL, L"Не удается найти текст сообщения с номером 0x%1 в файле сообщений %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 487:
	{
		MessageBox(NULL, L"Попытка обращения к неверному адресу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 534:
	{
		MessageBox(NULL, L"Длина результата арифметической операции превысила 32 разряда.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 535:
	{
		MessageBox(NULL, L"С другой стороны канала присутствует процесс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 536:
	{
		MessageBox(NULL, L"Идет ожидание открытия процессом другой стороны канала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 994:
	{
		MessageBox(NULL, L"Нет доступа к дополнительным атрибутам.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 995:
	{
		MessageBox(NULL, L"Операция ввода/вывода была прервана из-за завершения потока команд или по запросу приложения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 996:
	{
		MessageBox(NULL, L"Наложенное событие ввода/вывода не находится в сигнальном состоянии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 997:
	{
		MessageBox(NULL, L"Протекает наложенное событие ввода/вывода.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 998:
	{
		MessageBox(NULL, L"Неверная попытка доступа к адресу памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 999:
	{
		MessageBox(NULL, L"Ошибка при выполнении операции со страницей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1001:
	{
		MessageBox(NULL, L"Слишком глубокий уровень рекурсии. Стек переполнен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1002:
	{
		MessageBox(NULL, L"Окно не может взаимодействовать с отправленным сообщением.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1003:
	{
		MessageBox(NULL, L"Не удается завершить выполнение функции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1004:
	{
		MessageBox(NULL, L"Флаги установлены неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1005:
	{
		MessageBox(NULL, L"Не удается опознать присутствующую на томе файловую систему.Убедитесь в том, что все системные драйверы загружены, а также в том, что том не поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1006:
	{
		MessageBox(NULL, L"Том для открытого файла был изменен извне, поэтому работа с этим файлом невозможна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1007:
	{
		MessageBox(NULL, L"Заданная операция не может быть выполнена в полноэкранном режиме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1008:
	{
		MessageBox(NULL, L"Попытка ссылки на несуществующий маркер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1009:
	{
		MessageBox(NULL, L"База данных реестра повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1010:
	{
		MessageBox(NULL, L"Параметр реестра имеет неверное значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1011:
	{
		MessageBox(NULL, L"Не удается открыть параметр реестра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1012:
	{
		MessageBox(NULL, L"Не удается прочитать параметр реестра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1013:
	{
		MessageBox(NULL, L"Не удается записать параметр реестра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1014:
	{
		MessageBox(NULL, L"Один из файлов в базе данных реестра было необходимо восстановить с помощью протокола или резервной копии. Восстановление прошло успешно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1015:
	{
		MessageBox(NULL, L"Реестр поврежден. Структура одного из файлов, содержащего данные реестра, повреждена. Возможно поврежден образ памяти в файле , или файл не удалось восстановить из-за отсутствия резервной копии или протокола.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1016:
	{
		MessageBox(NULL, L"Неустранимый сбой операции ввода/вывода, запущенной из реестра. Не удалось выполнить чтение, запись или запись буфера для одного из файлов, содержащих образ системного реестра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1017:
	{
		MessageBox(NULL, L"При попытке загрузить или восстановить файл реестра выяснилось, что этот файл имеет неверный формат.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1018:
	{
		MessageBox(NULL, L"Попытка произвести недопустимую операцию над параметром реестра, отмеченным для удаления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1019:
	{
		MessageBox(NULL, L"Не удалось выделить требуемое место в протоколе реестра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1020:
	{
		MessageBox(NULL, L"Нельзя создать символическую связь для параметра реестра, который уже содержит подпараметры или значения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1021:
	{
		MessageBox(NULL, L"Нельзя создать статический подпараметр для временного родительского параметра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1022:
	{
		MessageBox(NULL, L"Запрос на уведомление об изменениях завершается, однако данные не были возвращены в буфер вызывающей процедуры. Теперь эта процедура нуждается в перечислении файлов для поиска изменений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1051:
	{
		MessageBox(NULL, L"Команда остановки была отправлена службе, от которой зависят другие службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1052:
	{
		MessageBox(NULL, L"Команда неуместна для данной службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1053:
	{
		MessageBox(NULL, L"Служба не ответила на запрос своевременно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1054:
	{
		MessageBox(NULL, L"Не удалось создать поток команд для службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1055:
	{
		MessageBox(NULL, L"База данных службы заблокирована.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1056:
	{
		MessageBox(NULL, L"Одна копия службы уже запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1057:
	{
		MessageBox(NULL, L"Имя учетной записи задано неверно или не существует, или же неверен указанный пароль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1058:
	{
		MessageBox(NULL, L"Указанная служба не может быть запущена, поскольку она отключена или все связанные с ней устройства отключены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1059:
	{
		MessageBox(NULL, L"Была сделана попытка установить циклическую зависимость между службами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1060:
	{
		MessageBox(NULL, L"Указанная служба не установлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1061:
	{
		MessageBox(NULL, L"Служба в настоящее время не может принимать команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1062:
	{
		MessageBox(NULL, L"Служба не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1063:
	{
		MessageBox(NULL, L"Процесс службы не может установить связь с контроллером службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1064:
	{
		MessageBox(NULL, L"Ошибка службы при обработке команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1065:
	{
		MessageBox(NULL, L"Указанная база данных не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1066:
	{
		MessageBox(NULL, L"Служба возвратила код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1067:
	{
		MessageBox(NULL, L"Процесс был неожиданно завершен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1068:
	{
		MessageBox(NULL, L"Не удалось запустить дочернюю службу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1069:
	{
		MessageBox(NULL, L"Служба не запущена из-за ошибки входа в систему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1070:
	{
		MessageBox(NULL, L"Сразу после запуска служба «зависла».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1071:
	{
		MessageBox(NULL, L"Блокировка базы данных указанной службы наложена неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1072:
	{
		MessageBox(NULL, L"Указанная служба была отмечена для удаления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1073:
	{
		MessageBox(NULL, L"Указанная служба уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1074:
	{
		MessageBox(NULL, L"Система в настоящий момент работает с использованием последней удачной конфигурации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1075:
	{
		MessageBox(NULL, L"Дочерняя служба не существует или была отмечена для удаления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1076:
	{
		MessageBox(NULL, L"Текущая конфигурация уже была задействована в качестве источника последнего удачного набора параметров.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1077:
	{
		MessageBox(NULL, L"С момента последней загрузки попытки запустить службу не делались.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1078:
	{
		MessageBox(NULL, L"Это имя уже используется в качестве имени службы или выводимого имени службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1079:
	{
		MessageBox(NULL, L"Учетная запись, указанная для этой службы, отличается от учетной записи, указанной для других служб в этом же процессе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1080:
	{
		MessageBox(NULL, L"Действия при возникновении ошибок могут быть назначены только для служб Win32, но не для драйверов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1081:
	{
		MessageBox(NULL, L"Эта служба запущена в том же процессе, что и диспетчер управления службами.Таким образом, диспетчер не сможет предпринять какие-либо действия, если работа этой службы будет неожиданно прервана.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1082:
	{
		MessageBox(NULL, L"Для этой службы не сконфигурировано ни одной программы восстановления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1083:
	{
		MessageBox(NULL, L"Исполняемая программа, запуск которой настроен в службе, не включена в состав службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1084:
	{
		MessageBox(NULL, L"Эта служба не запускается в безопасном режиме (Safe Mode)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1100:
	{
		MessageBox(NULL, L"Достигнут физический конец ленты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1101:
	{
		MessageBox(NULL, L"На ленте достигнута метка файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1102:
	{
		MessageBox(NULL, L"Обнаружено начало раздела ленты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1103:
	{
		MessageBox(NULL, L"На ленте достигнут конец набора файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1104:
	{
		MessageBox(NULL, L"Больше данных на ленте нет.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1105:
	{
		MessageBox(NULL, L"Не удается создать на ленте разделы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1106:
	{
		MessageBox(NULL, L"Неверный размер блока при обращении к новой ленте многотомного раздела.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1107:
	{
		MessageBox(NULL, L"Сведения о разделах при загрузке ленты не обнаружены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1108:
	{
		MessageBox(NULL, L"Не удается заблокировать механизм извлечения носителя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1109:
	{
		MessageBox(NULL, L"Не удается извлечь носитель.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1110:
	{
		MessageBox(NULL, L"Носитель в устройстве мог быть заменен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1111:
	{
		MessageBox(NULL, L"Шина ввода/вывода была инициализирована заново.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1112:
	{
		MessageBox(NULL, L"Отсутствует носитель в устройстве.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1113:
	{
		MessageBox(NULL, L"Символ Юникода не имеет сопоставления в конечной многобайтовой кодовой странице.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1114:
	{
		MessageBox(NULL, L"Произошел сбой в программе инициализации библиотеки динамической компоновки (DLL).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1115:
	{
		MessageBox(NULL, L"Идет завершение работы системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1116:
	{
		MessageBox(NULL, L"Прервать завершение работы системы невозможно, так как оно не было инициировано.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1117:
	{
		MessageBox(NULL, L"Запрос не был выполнен из-за ошибки ввода/вывода на устройстве.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1118:
	{
		MessageBox(NULL, L"Последовательные устройства не инициализированы. Драйвер будет выгружен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1119:
	{
		MessageBox(NULL, L"Не удается открыть устройство, использующее общий с другими устройствами запрос на прерывание (IRQ). Как минимум одно устройство, использующее этот же запрос IRQ, уже было открыто.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1120:
	{
		MessageBox(NULL, L"Последовательная операция ввода/вывода была завершена в результате следующей операции записи в последовательный порт.(Значение IOCTL_SERIAL_XOFF_COUNTER достигло 0.)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1121:
	{
		MessageBox(NULL, L"Последовательная операция ввода/вывода была завершена по истечении периода ожидания.(Значение IOCTL_SERIAL_XOFF_COUNTER не достигло 0.)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1122:
	{
		MessageBox(NULL, L"На гибком диске не обнаружена адресная метка идентификатора.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1123:
	{
		MessageBox(NULL, L"Обнаружено несоответствие между полем идентификатора сектора гибкого диска и адресом дорожки контроллера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1124:
	{
		MessageBox(NULL, L"Ошибка, возвращенная контроллером гибких дисков, не опознается драйвером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1125:
	{
		MessageBox(NULL, L"Контроллером гибких дисков возвращены некорректные значения регистров.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1126:
	{
		MessageBox(NULL, L"Зафиксирован многократный сбой операции проверки при обращении к жесткому диску.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1127:
	{
		MessageBox(NULL, L"Зафиксирован многократный сбой операции при обращении к жесткому диску.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1128:
	{
		MessageBox(NULL, L"При обращении к жесткому диску потребовался сброс контроллера, однако даже его произвести не удалось.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1129:
	{
		MessageBox(NULL, L"Достигнут физический конец ленты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1130:
	{
		MessageBox(NULL, L"Недостаточно памяти сервера для обработки команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1131:
	{
		MessageBox(NULL, L"Обнаружена вероятность возникновения взаимоблокировки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1132:
	{
		MessageBox(NULL, L"Базовый адрес или смещение имеют неверное выравнивание.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1140:
	{
		MessageBox(NULL, L"Попытка изменения режима питания была заблокирована другим приложением или драйвером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1141:
	{
		MessageBox(NULL, L"Сбой BIOS при попытке изменения режима питания.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1142:
	{
		MessageBox(NULL, L"Попытка создания большего числа ссылок на файл, чем поддерживается файловой системой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1150:
	{
		MessageBox(NULL, L"Для указанной программы требуется более поздняя версия Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1151:
	{
		MessageBox(NULL, L"Указанная программа не является программой для Windows или MS-DOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1152:
	{
		MessageBox(NULL, L"Запуск более одной копии указанной программы невозможен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1153:
	{
		MessageBox(NULL, L"Указанная программа была написана для одной из предыдущих версий Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1154:
	{
		MessageBox(NULL, L"Поврежден один из файлов библиотек, необходимых для выполнения данного приложения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1155:
	{
		MessageBox(NULL, L"Указанному файлу не сопоставлено ни одно приложение для выполнения данной операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1156:
	{
		MessageBox(NULL, L"Ошибка при пересылке команды приложению.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1157:
	{
		MessageBox(NULL, L"Не найден один из файлов библиотек, необходимых для выполнения данного приложения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1158:
	{
		MessageBox(NULL, L"Текущий процесс использовал все системные разрешения по управлению объектами диспетчера окон.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1159:
	{
		MessageBox(NULL, L"Сообщение может быть использовано только с операциями синхронизации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1160:
	{
		MessageBox(NULL, L"Указанный исходный элемент не имеет носителя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1161:
	{
		MessageBox(NULL, L"Указанный конечный элемент уже содержит носитель.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1162:
	{
		MessageBox(NULL, L"Указанный элемент не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1163:
	{
		MessageBox(NULL, L"Указанный элемент является частью отсутствующего журнала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1164:
	{
		MessageBox(NULL, L"Указанный элемент требует повторной инициализации из-за аппаратных ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1165:
	{
		MessageBox(NULL, L"Устройство требует проведение чистки перед его дальнейшим использованием.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1166:
	{
		MessageBox(NULL, L"Устройство сообщает, что открыта дверца.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1167:
	{
		MessageBox(NULL, L"Устройство не подключено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1168:
	{
		MessageBox(NULL, L"Элемент не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1169:
	{
		MessageBox(NULL, L"В индексе не найдены соответствия указанному ключу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1170:
	{
		MessageBox(NULL, L"Указанный набор свойств не существует для объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1171:
	{
		MessageBox(NULL, L"Переданная в GetMouseMovePoints точка не находится в буфере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1172:
	{
		MessageBox(NULL, L"Служба слежения (на рабочей станции) не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1173:
	{
		MessageBox(NULL, L"Не удается найти идентификатор тома.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1175:
	{
		MessageBox(NULL, L"Не удается удалить заменяемый файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1176:
	{
		MessageBox(NULL, L"Не удается заместить файл. Замещаемый файл сохранил свое первоначальное имя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1177:
	{
		MessageBox(NULL, L"Не удается заместить файл. Замещаемый файл был переименован с использованием резервного имени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1178:
	{
		MessageBox(NULL, L"Журнал изменений тома удален.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1179:
	{
		MessageBox(NULL, L"Журнал изменений тома не активен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1180:
	{
		MessageBox(NULL, L"Файл найден, но это может быть неверный файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1181:
	{
		MessageBox(NULL, L"Из журнала удалена запись.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1200:
	{
		MessageBox(NULL, L"Указано неверное имя устройства.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1201:
	{
		MessageBox(NULL, L"Устройство в настоящее время не подключено, однако сведения о нем в конфигурации присутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1202:
	{
		MessageBox(NULL, L"Локальное имя устройства уже используется для подключения к другому сетевому ресурсу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1203:
	{
		MessageBox(NULL, L"Ни одна из служб доступа к сети не смогла обработать заданный сетевой путь.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1204:
	{
		MessageBox(NULL, L"Имя службы доступа к сети задано неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1205:
	{
		MessageBox(NULL, L"Не удается открыть конфигурацию подключения к сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1206:
	{
		MessageBox(NULL, L"Конфигурация подключения к сети повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1207:
	{
		MessageBox(NULL, L"Перечисление объектов, не являющихся контейнерами, невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1208:
	{
		MessageBox(NULL, L"Ошибка расширенного типа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1209:
	{
		MessageBox(NULL, L"Неверный формат имени группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1210:
	{
		MessageBox(NULL, L"Неверный формат имени компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1211:
	{
		MessageBox(NULL, L"Неверный формат имени события.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1212:
	{
		MessageBox(NULL, L"Неверный формат имени домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1213:
	{
		MessageBox(NULL, L"Неверный формат имени службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1214:
	{
		MessageBox(NULL, L"Неверный формат сетевого имени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1215:
	{
		MessageBox(NULL, L"Неверный формат имени ресурса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1216:
	{
		MessageBox(NULL, L"Неверный формат пароля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1217:
	{
		MessageBox(NULL, L"Неверный формат имени сообщения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1218:
	{
		MessageBox(NULL, L"Неверный формат задания адреса, по которому отправляется сообщение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1219:
	{
		MessageBox(NULL, L"Множественное подключение к серверу или разделяемым ресурсам одним пользователем с использованием более одного имени пользователя неразрешено. отключите все предыдущие подключения к серверу или разделяемым ресурсам и повторите…", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1220:
	{
		MessageBox(NULL, L"Попытка установки сеанса связи с сервером сети, для которого достигнут предел по числу таких сеансов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1221:
	{
		MessageBox(NULL, L"Имя рабочей группы или домена уже используется другим компьютером в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1222:
	{
		MessageBox(NULL, L"Сеть отсутствует или не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1223:
	{
		MessageBox(NULL, L"Операция была отменена пользователем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1224:
	{
		MessageBox(NULL, L"Запрошенную операцию нельзя выполнить для файла с открытой пользователем сопоставленной секцией.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1225:
	{
		MessageBox(NULL, L"Удаленная система отклонила запрос на подключение к сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1226:
	{
		MessageBox(NULL, L"Сетевое подключение было закрыто.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1227:
	{
		MessageBox(NULL, L"Конечной точке сетевого транспорта уже сопоставлен адрес.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1228:
	{
		MessageBox(NULL, L"Конечной точке сети еще не сопоставлен адрес.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1229:
	{
		MessageBox(NULL, L"Попытка выполнить операцию для несуществующего сетевого подключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1230:
	{
		MessageBox(NULL, L"Попытка выполнить недопустимую операцию для активного сетевого подключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1231:
	{
		MessageBox(NULL, L"Сетевая папка недоступна. За информацией о разрешении проблем в сети обратитесь к справочной системе Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1232:
	{
		MessageBox(NULL, L"Сетевая папка недоступна. За информацией о разрешении проблем в сети обратитесь к справочной системе Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1233:
	{
		MessageBox(NULL, L"Сетевая папка недоступна. За информацией о разрешении проблем в сети обратитесь к справочной системе Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1234:
	{
		MessageBox(NULL, L"На конечном звене нужной сети удаленной системы не запущена ни одна служба.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1235:
	{
		MessageBox(NULL, L"Запрос был прерван.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1236:
	{
		MessageBox(NULL, L"Подключение к сети было разорвано локальной системой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1237:
	{
		MessageBox(NULL, L"Не удалось завершить операцию. Следует повторить ее.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1238:
	{
		MessageBox(NULL, L"Подключение к серверу невозможно, так как для данной учетной записи уже достигнут предел по числу одновременных подключений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1239:
	{
		MessageBox(NULL, L"Попытка входа в сеть в непредусмотренное для этой учетной записи время дня.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1240:
	{
		MessageBox(NULL, L"Данная учетная запись не может быть использована для входа в сеть с этой станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1241:
	{
		MessageBox(NULL, L"Нельзя использовать сетевой адрес для данной операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1242:
	{
		MessageBox(NULL, L"Служба уже зарегистрирована.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1243:
	{
		MessageBox(NULL, L"Указанная служба не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1244:
	{
		MessageBox(NULL, L"Запрошенная операция не была выполнена, так как пользователь не зарегистрирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1245:
	{
		MessageBox(NULL, L"Запрошенная операция не была выполнена, так как пользователь не подключен к сети.Указанная служба не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1246:
	{
		MessageBox(NULL, L"Требуется продолжить выполняющуюся операцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1247:
	{
		MessageBox(NULL, L"Попытка выполнить операцию инициализации, которая уже проведена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1248:
	{
		MessageBox(NULL, L"Больше локальных устройств не найдено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1249:
	{
		MessageBox(NULL, L"Указанный сайт не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1250:
	{
		MessageBox(NULL, L"Контроллер домена с указанным именем уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1251:
	{
		MessageBox(NULL, L"Эта операция поддерживается только при наличии подключения к серверу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1252:
	{
		MessageBox(NULL, L"Основной модуль групповой политики должен вызвать расширение даже в случае отсутствия изменений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1253:
	{
		MessageBox(NULL, L"Выбранный пользователь не имеет допустимого профиля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1254:
	{
		MessageBox(NULL, L"Эта операция не поддерживается на Microsoft Small Business Server", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1255:
	{
		MessageBox(NULL, L"Идет завершение работы компьютера-сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1256:
	{
		MessageBox(NULL, L"Удаленная система недоступна. За информацией о разрешении проблем в сети, обратитесь к справочной системе Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1257:
	{
		MessageBox(NULL, L"Был указан идентификатор безопасности не из того домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1258:
	{
		MessageBox(NULL, L"В указанном идентификаторе безопасности отсутствует компонент для домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1259:
	{
		MessageBox(NULL, L"Окно AppHelp закрыто, из-за чего приложение запущено не было.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1260:
	{
		MessageBox(NULL, L"Невозможно открыть данную программу из-за политики ограничения применения программного обеспечения. За дополнительной информацией обратитесь к системному администратору или откройте «Просмотр событий».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1261:
	{
		MessageBox(NULL, L"Попытка программы использовать неправильное значение регистра. Обычно это вызвано неинициализированным регистром.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1262:
	{
		MessageBox(NULL, L"Общий ресурс недоступен или не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1263:
	{
		MessageBox(NULL, L"Протокол kerberos встретил ошибку при проверкесертификата KDC во время входа со смарт-картой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1264:
	{
		MessageBox(NULL, L"Протокол kerberos встретил ошибку при попытке использоватьподсистему для сарт-карт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1265:
	{
		MessageBox(NULL, L"Системой обнаружена попытка нарушения безопасности. Проверьте наличие доступа к серверу, через который был выполнен вход.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1266:
	{
		MessageBox(NULL, L"Использованный для проверки подлинности сертификат смарт-карты был отозван.Обратитесь к администратору системы. Дополнительные сведения можно найтив журнале событий.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1267:
	{
		MessageBox(NULL, L"При обработке сертификата смарт-карты был обнаружен центр сертификации,не входящий в число доверенных. Обратитесь к администратору системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1268:
	{
		MessageBox(NULL, L"Не удается определить статус отзыва использованного при проверке подлинностисертификата смарт-карты. Обратитесь к администратору системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1269:
	{
		MessageBox(NULL, L"Использованный при проверке подлинности сертификат смарт-карты не заслуживаетдоверия. Обратитесь к администратору системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1270:
	{
		MessageBox(NULL, L"Срок действия использованного при проверке подлинности сертификата смарт-картыистек. Обратитесь к администратору системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1271:
	{
		MessageBox(NULL, L"Компьютер заблокирован и не может завершить работу без режима принудительного завершения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1273:
	{
		MessageBox(NULL, L"Определенный в приложении ответный вызов вернул неверные данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1274:
	{
		MessageBox(NULL, L"Система групповой политики должна вызывать расширения в синхронном, не фоновом режиме обновления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1275:
	{
		MessageBox(NULL, L"Загрузка драйвера была заблокирована", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1276:
	{
		MessageBox(NULL, L"Библиотека, на которую ссылается модуль, не является библиотекой динамической компоновки (DLL) или исполняемым модулем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1300:
	{
		MessageBox(NULL, L"Пользователь обладает не всеми использованными правами доступа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1301:
	{
		MessageBox(NULL, L"Не было установлено соответствие между именами пользователей и идентификаторами защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1302:
	{
		MessageBox(NULL, L"Системные квоты для данной учетной записи не установлены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1303:
	{
		MessageBox(NULL, L"Ключ шифрования недоступен. Возвращен общедоступный ключ.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1304:
	{
		MessageBox(NULL, L"Пароль слишком сложен и не может быть преобразован в пароль LAN Manager. Вместо пароля LAN Manager была возвращена пустая строка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1305:
	{
		MessageBox(NULL, L"Уровень редакции неизвестен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1306:
	{
		MessageBox(NULL, L"Два уровня редакции являются несовместимыми.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1307:
	{
		MessageBox(NULL, L"Этот код защиты не может соответствовать владельцу объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1308:
	{
		MessageBox(NULL, L"Этот код защиты не может соответствовать основной группе объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1309:
	{
		MessageBox(NULL, L"Предпринята попытка использования элемента олицетворения потоком команд, который в данное время не олицетворяет клиента.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1310:
	{
		MessageBox(NULL, L"Группу нельзя отключить.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1311:
	{
		MessageBox(NULL, L"Отсутствуют серверы, которые могли бы обработать запрос на вход в сеть.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1312:
	{
		MessageBox(NULL, L"Указанный сеанс работы не существует. Возможно, он уже завершен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1313:
	{
		MessageBox(NULL, L"Указанная привилегия не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1314:
	{
		MessageBox(NULL, L"Клиент не обладает требуемыми правами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1315:
	{
		MessageBox(NULL, L"Указанное имя не является корректным именем пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1316:
	{
		MessageBox(NULL, L"Пользователь с указанным именем уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1317:
	{
		MessageBox(NULL, L"Пользователь с указанным именем не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1318:
	{
		MessageBox(NULL, L"Указанная группа уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1319:
	{
		MessageBox(NULL, L"Указанная группа не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1320:
	{
		MessageBox(NULL, L"Указанный пользователь уже является членом заданной группы, либо группа не может быть удалена, так как содержит как минимум одного пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1321:
	{
		MessageBox(NULL, L"Указанный пользователь не является членом заданной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1322:
	{
		MessageBox(NULL, L"Последнюю учетную запись из группы администраторов нельзя отключить или удалить.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1323:
	{
		MessageBox(NULL, L"Не удается обновить пароль. Текущий пароль был задан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1324:
	{
		MessageBox(NULL, L"Не удается обновить пароль. Новый пароль содержит недопустимые символы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1325:
	{
		MessageBox(NULL, L"Не удается обновить пароль. Введенный пароль не обеспечивает требований домена к длине пароля, его сложности или истории обновления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1326:
	{
		MessageBox(NULL, L"Вход в систему не произведен: имя пользователя или пароль не опознаны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1327:
	{
		MessageBox(NULL, L"Вход в систему не произведен: имеются ограничения, связанные с учетной записью. Возможные причины: запрещены пустые пароли, ограничено время входа или применены ограничения групповой политики.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1328:
	{
		MessageBox(NULL, L"Вход в систему не произведен: учетная запись не предусматривает возможность входа в данное время.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1329:
	{
		MessageBox(NULL, L"Вход в систему не произведен: пользователю не предоставлено право работы на этом компьютере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1330:
	{
		MessageBox(NULL, L"Вход в систему не произведен: срок действия указанного пароля истек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1331:
	{
		MessageBox(NULL, L"Вход в систему не произведен: учетная запись в настоящее время отключена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1332:
	{
		MessageBox(NULL, L"Именам пользователей не сопоставлены коды защиты данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1333:
	{
		MessageBox(NULL, L"Одновременно запрошено слишком много локальных кодов пользователей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1334:
	{
		MessageBox(NULL, L"Дополнительные локальные коды пользователей недоступны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1335:
	{
		MessageBox(NULL, L"Часть кода защиты данных неверна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1336:
	{
		MessageBox(NULL, L"Список управления доступом (ACL) имеет неверную структуру.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1337:
	{
		MessageBox(NULL, L"Код защиты данных имеет неверную структуру.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1338:
	{
		MessageBox(NULL, L"Дескриптор защиты данных имеет неверную структуру.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1340:
	{
		MessageBox(NULL, L"Не удается построить список управления доступом (ACL) или элемент этого списка (ACE).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1341:
	{
		MessageBox(NULL, L"Сервер в настоящее время отключен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1342:
	{
		MessageBox(NULL, L"Сервер в настоящее время включен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1343:
	{
		MessageBox(NULL, L"Указано недопустимое значение для защитного кода.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1344:
	{
		MessageBox(NULL, L"Недостаточно памяти для обновления сведений, относящихся к защите данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1345:
	{
		MessageBox(NULL, L"Указанные атрибуты неверны или несовместимы с атрибутами группы в целом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1346:
	{
		MessageBox(NULL, L"Требуемый уровень олицетворения не обеспечен, или обеспеченный уровень неверен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1347:
	{
		MessageBox(NULL, L"Не удается открыть маркер безопасности анонимного уровня.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1348:
	{
		MessageBox(NULL, L"Запрошен неправильный класс сведений для проверки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1349:
	{
		MessageBox(NULL, L"Тип маркера не соответствует выполняемой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1350:
	{
		MessageBox(NULL, L"Операция, связанная с защитой данных, не может быть выполнена для незащищенного объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1351:
	{
		MessageBox(NULL, L"Не удалось получить данные о конфигурации от контроллера домена. Либо он отключен, либо к нему нет доступа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1352:
	{
		MessageBox(NULL, L"Диспетчер защиты (SAM) или локальный сервер (LSA) не смог выполнить требуемую операцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1353:
	{
		MessageBox(NULL, L"Состояние домена не позволило выполнить нужную операцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1354:
	{
		MessageBox(NULL, L"Операция разрешена только для основного контроллера домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1355:
	{
		MessageBox(NULL, L"Указанный домен не существует или к нему невозможно подключиться.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1356:
	{
		MessageBox(NULL, L"Указанный домен уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1357:
	{
		MessageBox(NULL, L"Была сделана попытка превысить предел на число доменов, обслуживаемых одним сервером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1358:
	{
		MessageBox(NULL, L"Не удается завершить требуемую операцию из-за сбоев в данных на диске или неустранимой ошибки носителя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1359:
	{
		MessageBox(NULL, L"Внутренняя ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1360:
	{
		MessageBox(NULL, L"Универсальные типы доступа содержатся в маске доступа, которая должна была уже быть связана с нестандартными типами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1361:
	{
		MessageBox(NULL, L"Дескриптор защиты имеет неверный формат.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1362:
	{
		MessageBox(NULL, L"Выполнение запрошенной операции разрешено только для процессов входа в систему. Вызывающий процесс не зарегистрирован как процесс входа в систему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1363:
	{
		MessageBox(NULL, L"Запуск нового сеанса работы с уже использующимся кодом невозможен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1364:
	{
		MessageBox(NULL, L"Пакет проверки подлинности не опознан.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1365:
	{
		MessageBox(NULL, L"Текущее состояние сеанса входа в систему не подходит для запрошенной операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1366:
	{
		MessageBox(NULL, L"Код сеанса входа в систему уже используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1367:
	{
		MessageBox(NULL, L"Режим входа в систему задан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1368:
	{
		MessageBox(NULL, L"Невозможно обеспечить олицетворение через именованный канал до тех пор, пока данные не считаны из этого канала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1369:
	{
		MessageBox(NULL, L"Операция несовместима с состоянием транзакции для ветви реестра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1370:
	{
		MessageBox(NULL, L"База данных защиты повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1371:
	{
		MessageBox(NULL, L"Операция не предназначена для встроенных учетных записей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1372:
	{
		MessageBox(NULL, L"Операция не предназначена для встроенной специальной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1373:
	{
		MessageBox(NULL, L"Операция не предназначена для встроенного специального пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1374:
	{
		MessageBox(NULL, L"Нельзя удалить пользователя из группы, так как она является для него основной.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1375:
	{
		MessageBox(NULL, L"Маркер уже используется в качестве основного маркера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1376:
	{
		MessageBox(NULL, L"Указанная локальная группа не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1377:
	{
		MessageBox(NULL, L"Указанный пользователь не входит в локальную группу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1378:
	{
		MessageBox(NULL, L"Указанный пользователь уже является членом локальной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1379:
	{
		MessageBox(NULL, L"Указанная локальная группа уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1380:
	{
		MessageBox(NULL, L"Вход в систему не произведен: выбранный режим входа для данного пользователя на этом компьютере не предусмотрен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1381:
	{
		MessageBox(NULL, L"Достигнут предел по количеству защищенных данных/ресурсов для одной системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1382:
	{
		MessageBox(NULL, L"Длина защищенных данных превышает максимально возможную.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1383:
	{
		MessageBox(NULL, L"Локальная база данных защиты содержит внутренние несоответствия.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1384:
	{
		MessageBox(NULL, L"В процессе входа в систему было использовано слишком много кодов защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1385:
	{
		MessageBox(NULL, L"Вход в систему не произведен: выбранный режим входа для данного пользователя на этом компьютере не предусмотрен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1386:
	{
		MessageBox(NULL, L"Для смены пароля необходим зашифрованный пароль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1387:
	{
		MessageBox(NULL, L"Не удалось добавить или удалить члена локальной группы, так как он не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1388:
	{
		MessageBox(NULL, L"Добавление нового члена в локальную группу невозможно, так как он имеет неправильный тип учетной записи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1389:
	{
		MessageBox(NULL, L"Задано слишком много кодов защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1390:
	{
		MessageBox(NULL, L"Для смены пароля необходим зашифрованный пароль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1391:
	{
		MessageBox(NULL, L"Список управления доступом (ACL) не содержит наследуемых компонентов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1392:
	{
		MessageBox(NULL, L"Файл или папка повреждены. Чтение невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1393:
	{
		MessageBox(NULL, L"Структура диска повреждена. Чтение невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1394:
	{
		MessageBox(NULL, L"Для заданного сеанса входа в систему отсутствует раздел сеанса пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1395:
	{
		MessageBox(NULL, L"Для вызываемой службы действует лицензия на определенное число подключений.В настоящее время создание дополнительных подключений к службе невозможно, так как уже существует максимально допустимое число подключений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1396:
	{
		MessageBox(NULL, L"Вход в систему не произведен: конечная учетная запись указана неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1397:
	{
		MessageBox(NULL, L"Ошибка взаимной проверки подлинности. Пароль сервера на контроллере домена устарел.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1398:
	{
		MessageBox(NULL, L"Существует разница настройки времени и/или даты между клиентом и сервером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1399:
	{
		MessageBox(NULL, L"Эта операция не может быть выполнена над текущим доменом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1400:
	{
		MessageBox(NULL, L"Недопустимый дескриптор окна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1401:
	{
		MessageBox(NULL, L"Неверный дескриптор меню.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1402:
	{
		MessageBox(NULL, L"Неверный дескриптор указателя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1403:
	{
		MessageBox(NULL, L"Неверный дескриптор таблицы сочетаний клавиш.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1404:
	{
		MessageBox(NULL, L"Неверный дескриптор обработчика.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1405:
	{
		MessageBox(NULL, L"Неверный дескриптор многооконной структуры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1406:
	{
		MessageBox(NULL, L"Не удается создать дочернее окно верхнего уровня.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1407:
	{
		MessageBox(NULL, L"Не удается найти класс окна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1408:
	{
		MessageBox(NULL, L"Окно принадлежит другому потоку команд.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1409:
	{
		MessageBox(NULL, L"Назначенная клавиша уже зарегистрирована.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1410:
	{
		MessageBox(NULL, L"Класс уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1411:
	{
		MessageBox(NULL, L"Класс не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1412:
	{
		MessageBox(NULL, L"Не все окна, принадлежащие данному классу, закрыты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1413:
	{
		MessageBox(NULL, L"Неверный индекс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1414:
	{
		MessageBox(NULL, L"Неверный дескриптор значка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1415:
	{
		MessageBox(NULL, L"Используются ключевые слова, относящиеся к окнам диалога типа private.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1416:
	{
		MessageBox(NULL, L"Идентификатор списка не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1417:
	{
		MessageBox(NULL, L"Подстановочные знаки не обнаружены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1418:
	{
		MessageBox(NULL, L"Буфер обмена для потока команд не открыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1419:
	{
		MessageBox(NULL, L"Назначенная клавиша не зарегистрирована.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1420:
	{
		MessageBox(NULL, L"Окно не является окном диалога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1421:
	{
		MessageBox(NULL, L"Не найден идентификатор элемента управления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1422:
	{
		MessageBox(NULL, L"Неверное сообщение для поля со списком (поле не имеет области ввода).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1423:
	{
		MessageBox(NULL, L"Окно не является полем со списком.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1424:
	{
		MessageBox(NULL, L"Высота не может превышать 256.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1425:
	{
		MessageBox(NULL, L"Неверный дескриптор контекста устройства (DC).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1426:
	{
		MessageBox(NULL, L"Неверный тип процедуры обработки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1427:
	{
		MessageBox(NULL, L"Неверная процедура обработки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1428:
	{
		MessageBox(NULL, L"Невозможно установить нелокальный обработчик без дескриптора модуля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1429:
	{
		MessageBox(NULL, L"Эта процедура обработки может быть только глобальной.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1430:
	{
		MessageBox(NULL, L"Процедура для обработки журнала уже установлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1431:
	{
		MessageBox(NULL, L"Процедура обработки не установлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1432:
	{
		MessageBox(NULL, L"Неправильное сообщение для простого списка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1433:
	{
		MessageBox(NULL, L"Параметр LB_SETCOUNT отправлен списку неправильного типа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1434:
	{
		MessageBox(NULL, L"Список не входит в порядок обхода элементов управления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1435:
	{
		MessageBox(NULL, L"Нельзя уничтожить объект, созданный другим потоком команд.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1436:
	{
		MessageBox(NULL, L"Дочерние окна не могут иметь меню.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1437:
	{
		MessageBox(NULL, L"Окно не имеет системного меню.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1438:
	{
		MessageBox(NULL, L"Неверный тип окна сообщения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1439:
	{
		MessageBox(NULL, L"Неверный системный параметр (SPI_*).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1440:
	{
		MessageBox(NULL, L"Экран уже заблокирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1441:
	{
		MessageBox(NULL, L"Дескрипторы всех окон, входящих в многооконную структуру, должны иметь общий родительский дескриптор.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1442:
	{
		MessageBox(NULL, L"Окно не является дочерним.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1443:
	{
		MessageBox(NULL, L"Неверная команда GW_*.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1444:
	{
		MessageBox(NULL, L"Неверный идентификатор потока команд.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1445:
	{
		MessageBox(NULL, L"Невозможно обработать сообщение от окна, не являющегося компонентом многооконного (MDI) интерфейса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1446:
	{
		MessageBox(NULL, L"Всплывающее меню уже активно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1447:
	{
		MessageBox(NULL, L"Окно не имеет полос прокрутки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1448:
	{
		MessageBox(NULL, L"Диапазон значений для полосы прокрутки не может выходить за пределы MAXLONG.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1449:
	{
		MessageBox(NULL, L"Невозможно отобразить или удалить окно указанным способом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1450:
	{
		MessageBox(NULL, L"Недостаточно системных ресурсов для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1451:
	{
		MessageBox(NULL, L"Недостаточно системных ресурсов для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1452:
	{
		MessageBox(NULL, L"Недостаточно системных ресурсов для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1453:
	{
		MessageBox(NULL, L"Недостаточная квота для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1454:
	{
		MessageBox(NULL, L"Недостаточная квота для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1455:
	{
		MessageBox(NULL, L"Файл подкачки слишком мал для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1456:
	{
		MessageBox(NULL, L"Не найден пункт меню.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1457:
	{
		MessageBox(NULL, L"Недопустимая раскладка клавиатуры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1458:
	{
		MessageBox(NULL, L"Запрещенный тип ловушки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1459:
	{
		MessageBox(NULL, L"Эта операция требует интерактивного оконного терминала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1460:
	{
		MessageBox(NULL, L"Возврат из операции произошел из-за превышения времени ожидания.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1461:
	{
		MessageBox(NULL, L"Недопустимый обработчик монитора.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1500:
	{
		MessageBox(NULL, L"Журнал событий поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1501:
	{
		MessageBox(NULL, L"Не удается найти файл журнала событий. Служба протоколирования событий не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1502:
	{
		MessageBox(NULL, L"Журнал событий переполнен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1503:
	{
		MessageBox(NULL, L"Журнал событий был изменен в промежутке между двумя операциями чтения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1601:
	{
		MessageBox(NULL, L"Нет доступа к службе установки Windows. Возможно система запущена в безопасном режиме или Windows Installer установлен неправильно. Обратитесь в службу поддержки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1602:
	{
		MessageBox(NULL, L"Установка, прерванная пользователем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1603:
	{
		MessageBox(NULL, L"В процессе установки произошла неисправимая ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1604:
	{
		MessageBox(NULL, L"Установка приостановлена, но не завершена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1605:
	{
		MessageBox(NULL, L"Это действие допускается только для установленных продуктов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1606:
	{
		MessageBox(NULL, L"Идентификатор функции не зарегистрирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1607:
	{
		MessageBox(NULL, L"Идентификатор компонента не зарегистрирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1608:
	{
		MessageBox(NULL, L"Неизвестное свойство.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1609:
	{
		MessageBox(NULL, L"Обработчик находится в недопустимом состоянии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1610:
	{
		MessageBox(NULL, L"Данные настройки для этого продукта повреждены. Обратитесь в службу поддержки организации", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1611:
	{
		MessageBox(NULL, L"Отсутствует квалификатор компонента.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1612:
	{
		MessageBox(NULL, L"Ресурс с установочными файлами для этого продукта недоступен. Проверьте существование ресурса и доступ к нему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1613:
	{
		MessageBox(NULL, L"Этот установочный пакет не может быть развернут службой установки Windows. Нужно установить пакет обновления Windows, содержащий обновленную версию службы установки Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1614:
	{
		MessageBox(NULL, L"Продукт удален из системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1615:
	{
		MessageBox(NULL, L"Недопустимый или не поддерживаемый синтаксис запроса SQL.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1616:
	{
		MessageBox(NULL, L"Поле записи отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1617:
	{
		MessageBox(NULL, L"Это устройство было удалено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1618:
	{
		MessageBox(NULL, L"Уже запущена другая копия процесса установки. Завершите уже начатую установку, прежде чем запускать новую.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1619:
	{
		MessageBox(NULL, L"Невозможно открыть этот установочный пакет. Проверьте, что пакет существует и к нему есть доступ, или обратитесь к поставщику программы, чтобы убедиться в правильности этого установочного пакета Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1620:
	{
		MessageBox(NULL, L"Невозможно открыть этот установочный пакет. Обратитесь к поставщику программы, чтобы убедиться в правильности этого установочного пакета Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1621:
	{
		MessageBox(NULL, L"Произошла ошибка при запуске пользовательского интерфейса службы установки Windows. Обратитесь в службу поддержки вашей организации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1622:
	{
		MessageBox(NULL, L"Ошибка открытия файла журнала установки. Проверьте наличие данного файла журнала и прав на запись в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1623:
	{
		MessageBox(NULL, L"Язык этого установочного пакета не поддерживается данной системой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1624:
	{
		MessageBox(NULL, L"Ошибка применения преобразований. Проверьте правильности путей указанных преобразований.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1625:
	{
		MessageBox(NULL, L"Установка запрещена на основании системной политики. Обратитесь к системному администратору.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1626:
	{
		MessageBox(NULL, L"Выполнение функции невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1627:
	{
		MessageBox(NULL, L"Ошибка исполнения функции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1628:
	{
		MessageBox(NULL, L"Указана недопустимая или неизвестная таблица.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1629:
	{
		MessageBox(NULL, L"Получены данные неверного типа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1630:
	{
		MessageBox(NULL, L"Данные этого типа не поддерживаются.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1631:
	{
		MessageBox(NULL, L"Ошибка запуска службы установки Windows. Обратитесь в службу поддержки вашей организации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1632:
	{
		MessageBox(NULL, L"Временная папка переполнена или к ней нет доступа. Освободите место на устройстве или убедитесь в возможности записи во временную папку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1633:
	{
		MessageBox(NULL, L"Этот установочный пакет этим типом процессора. Обратитесь за помощью к поставщику пакета.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1634:
	{
		MessageBox(NULL, L"Данный компонент не используется на этом компьютере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1635:
	{
		MessageBox(NULL, L"Не удалось открыть этот пакет исправлений. Проверьте, что пакет существует и к нему есть доступ, или обратитесь к поставщику пакета, чтобы удостовериться в том, что этот пакет является правильным пакетом исправлений Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1636:
	{
		MessageBox(NULL, L"Не удалось открыть этот пакет исправлений. Обратитесь к поставщику пакета, чтобы удостовериться в том, что этот пакет является правильным пакетом исправлений Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1637:
	{
		MessageBox(NULL, L"Этот пакет исправлений не может быть обработан имеющейся службой установки Windows. Следует установить пакет обновления Windows, содержащий новую версию службы установки Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1638:
	{
		MessageBox(NULL, L"Уже установлена другая версия этого продукта. Продолжение установки невозможно. Для настройки конфигурации или удаления существующей версии продукта используйте значок «Установка и удаление программ» на панели управления .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1639:
	{
		MessageBox(NULL, L"Недопустимый аргумент командной строки. За справкой по использованию командной строки обратитесь к Windows Installer SDK.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1640:
	{
		MessageBox(NULL, L"Только администраторы обладают правами на добавление, удаление или настройку сервера в течение работы удаленного сеанса служб терминалов. Обратитесь за помощью к системному администратору.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1641:
	{
		MessageBox(NULL, L"Требуемая операция успешно завершена. Чтобы сделанные изменения возымели силу, система будет перезагружена, .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1642:
	{
		MessageBox(NULL, L"Пакет обновления не может быть установлен при помощи установщика Windows, поскольку обновляемая программа либо утеряна, либо пакет обновления предназначен для другой версии этой программы. Проверьте наличие этой программы на компьютере и правильность номера версии пакета обновления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1643:
	{
		MessageBox(NULL, L"Пакеты исправления не допускаются политикой для приложений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1644:
	{
		MessageBox(NULL, L"Перенастройки не допускаются политикой для приложений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1700:
	{
		MessageBox(NULL, L"Неправильная строка привязки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1701:
	{
		MessageBox(NULL, L"Неверный тип дескриптора привязки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1702:
	{
		MessageBox(NULL, L"Недопустимый дескриптор привязки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1703:
	{
		MessageBox(NULL, L"Последовательность протокола RPC не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1704:
	{
		MessageBox(NULL, L"Некорректная последовательность протокола RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1705:
	{
		MessageBox(NULL, L"Неверный универсальный уникальный идентификатор строки (UUID).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1706:
	{
		MessageBox(NULL, L"Неправильный формат конечной точки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1707:
	{
		MessageBox(NULL, L"Сетевой адрес задан неправильно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1708:
	{
		MessageBox(NULL, L"Не найдена конечная точка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1709:
	{
		MessageBox(NULL, L"Неправильное значение таймаута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1710:
	{
		MessageBox(NULL, L"Универсальный уникальный идентификатор объекта (UUID) не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1711:
	{
		MessageBox(NULL, L"Универсальный уникальный идентификатор объекта (UUID) уже зарегистрирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1712:
	{
		MessageBox(NULL, L"Универсальный уникальный идентификатор типа (UUID) уже зарегистрирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1713:
	{
		MessageBox(NULL, L"Сервер RPC уже находится в режиме приема команд.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1714:
	{
		MessageBox(NULL, L"Не зарегистрирована ни одна последовательность протоколов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1715:
	{
		MessageBox(NULL, L"Сервер RPC не принимает команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1716:
	{
		MessageBox(NULL, L"Неизвестный тип диспетчера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1717:
	{
		MessageBox(NULL, L"Неизвестный интерфейс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1718:
	{
		MessageBox(NULL, L"Привязки отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1719:
	{
		MessageBox(NULL, L"Последовательности протоколов отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1720:
	{
		MessageBox(NULL, L"Создание конечной точки невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1721:
	{
		MessageBox(NULL, L"Недостаточно ресурсов для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1722:
	{
		MessageBox(NULL, L"Сервер RPC недоступен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1723:
	{
		MessageBox(NULL, L"Сервер RPC занят и не может завершить операцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1724:
	{
		MessageBox(NULL, L"Неверные параметры сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1725:
	{
		MessageBox(NULL, L"Данный поток команд не содержит активных удаленных вызовов процедур.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1726:
	{
		MessageBox(NULL, L"Сбой при удаленном вызове процедуры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1727:
	{
		MessageBox(NULL, L"Сбой при удаленном вызове процедуры. Вызов не произведен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1728:
	{
		MessageBox(NULL, L"Ошибка протокола удаленного вызова процедур (RPC).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1730:
	{
		MessageBox(NULL, L"Синтаксис передачи не поддерживается сервером RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1732:
	{
		MessageBox(NULL, L"Тип универсального уникального идентификатора (UUID) не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1733:
	{
		MessageBox(NULL, L"Неверный тег.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1734:
	{
		MessageBox(NULL, L"Неверные границы массива.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1735:
	{
		MessageBox(NULL, L"Привязка не содержит имени элемента.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1736:
	{
		MessageBox(NULL, L"Имя имеет неправильный синтаксис.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1737:
	{
		MessageBox(NULL, L"Синтаксис имени не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1739:
	{
		MessageBox(NULL, L"Отсутствуют сетевые адреса, позволяющие сконструировать универсальный уникальный идентификатор (UUID).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1740:
	{
		MessageBox(NULL, L"Эта конечная точка дублирует уже существующую.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1741:
	{
		MessageBox(NULL, L"Неизвестный тип проверки подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1742:
	{
		MessageBox(NULL, L"Предельное число вызовов слишком мало.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1743:
	{
		MessageBox(NULL, L"Слишком длинная строка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1744:
	{
		MessageBox(NULL, L"Не найдена последовательность протокола RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1745:
	{
		MessageBox(NULL, L"Номер процедуры выходит за допустимые границы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1746:
	{
		MessageBox(NULL, L"Привязка не содержит никаких сведений, относящихся к проверке подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1747:
	{
		MessageBox(NULL, L"Неизвестная служба проверки подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1748:
	{
		MessageBox(NULL, L"Неизвестный уровень проверки подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1749:
	{
		MessageBox(NULL, L"Неправильный контекст безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1750:
	{
		MessageBox(NULL, L"Неизвестная служба авторизации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1751:
	{
		MessageBox(NULL, L"Недопустимый элемент.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1752:
	{
		MessageBox(NULL, L"Конечный узел (сервер) не может выполнить операцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1753:
	{
		MessageBox(NULL, L"В системе отображения конечных точек не осталось доступных конечных точек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1754:
	{
		MessageBox(NULL, L"Ни один интерфейс не экспортирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1755:
	{
		MessageBox(NULL, L"Имя элемента задано не полностью.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1756:
	{
		MessageBox(NULL, L"Неправильная версия.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1757:
	{
		MessageBox(NULL, L"Другие члены в группе отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1758:
	{
		MessageBox(NULL, L"Элементы, экспорт которых можно отменить, отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1759:
	{
		MessageBox(NULL, L"Интерфейс не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1760:
	{
		MessageBox(NULL, L"Элемент уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1761:
	{
		MessageBox(NULL, L"Элемент не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1762:
	{
		MessageBox(NULL, L"Служба имен недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1763:
	{
		MessageBox(NULL, L"Неверное семейство сетевых адресов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1764:
	{
		MessageBox(NULL, L"Запрошенная операция не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1765:
	{
		MessageBox(NULL, L"Нет доступных контекстов безопасности для олицетворения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1766:
	{
		MessageBox(NULL, L"Внутренняя ошибка при удаленном вызове процедуры (RPC).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1767:
	{
		MessageBox(NULL, L"Сервер RPC попытался произвести целочисленное деление на нуль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1768:
	{
		MessageBox(NULL, L"Ошибка адресации на сервере RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1769:
	{
		MessageBox(NULL, L"Операция с плавающей точкой на сервере RPC привела к делению на нуль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1770:
	{
		MessageBox(NULL, L"Исчезновение порядка при операции с плавающей точкой на сервере RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1771:
	{
		MessageBox(NULL, L"Переполнение при операции с плавающей точкой на сервере RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1772:
	{
		MessageBox(NULL, L"Список серверов RPC, доступных для привязки дескрипторов, был исчерпан.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1773:
	{
		MessageBox(NULL, L"Не удается открыть файл таблицы преобразования символов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1774:
	{
		MessageBox(NULL, L"Файл, содержащий таблицу преобразования символов, имеет размер менее 512 байт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1775:
	{
		MessageBox(NULL, L"При удаленном вызове процедуры главному компьютеру от клиента был передан пустой дескриптор контекста.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1777:
	{
		MessageBox(NULL, L"В процессе удаленного вызова процедуры дескриптор контекста был изменен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1778:
	{
		MessageBox(NULL, L"Дескрипторы привязки, переданные удаленному вызову процедуры, не совпадают.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1779:
	{
		MessageBox(NULL, L"Не удается получить дескриптор удаленного вызова процедуры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1780:
	{
		MessageBox(NULL, L"Заглушке передан нулевой указатель ссылки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1781:
	{
		MessageBox(NULL, L"Номер находится за пределами допустимого диапазона.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1782:
	{
		MessageBox(NULL, L"Значение счетчика байт слишком мало.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1783:
	{
		MessageBox(NULL, L"Заглушке переданы неправильные данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1784:
	{
		MessageBox(NULL, L"Имеющийся буфер не подходит для указанной операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1785:
	{
		MessageBox(NULL, L"Не удается определить тип диска. Вероятно, он не отформатирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1786:
	{
		MessageBox(NULL, L"Рабочая станция не может участвовать в отношениях доверенности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1787:
	{
		MessageBox(NULL, L"База данных диспетчера учетных записей на сервере не содержит записи для регистрации компьютера через доверительные отношения с этой рабочей станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1788:
	{
		MessageBox(NULL, L"Установка отношений доверенности между основным доменом и доменом-доверителем не состоялась.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1789:
	{
		MessageBox(NULL, L"Не удалось установить доверительные отношения между этой рабочей станцией и основным доменом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1790:
	{
		MessageBox(NULL, L"Вход в сеть не произведен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1791:
	{
		MessageBox(NULL, L"Удаленный вызов процедуры уже выполняется для данного потока команд.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1792:
	{
		MessageBox(NULL, L"Попытка входа в сеть при отключенной сетевой службе входа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1793:
	{
		MessageBox(NULL, L"Срок действия учетной записи пользователя истек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1794:
	{
		MessageBox(NULL, L"Перенаправитель используется и не может быть выгружен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1795:
	{
		MessageBox(NULL, L"Указанный драйвер принтера уже установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1796:
	{
		MessageBox(NULL, L"Указанный порт не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1797:
	{
		MessageBox(NULL, L"Неизвестный драйвер принтера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1798:
	{
		MessageBox(NULL, L"Неизвестный процессор печати.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1799:
	{
		MessageBox(NULL, L"Файл-разделитель задан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1800:
	{
		MessageBox(NULL, L"Приоритет задан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1801:
	{
		MessageBox(NULL, L"Имя принтера задано неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1802:
	{
		MessageBox(NULL, L"Принтер уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1803:
	{
		MessageBox(NULL, L"Неверная команда принтера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1804:
	{
		MessageBox(NULL, L"Неверно задан тип данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1805:
	{
		MessageBox(NULL, L"Неверно задана среда.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1806:
	{
		MessageBox(NULL, L"Больше нет привязок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1807:
	{
		MessageBox(NULL, L"Используется доверительная учетная запись домена. Для доступа к серверу требуется глобальная или локальная учетная запись пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1808:
	{
		MessageBox(NULL, L"Указанное имя является именем компьютера. Для доступа к серверу воспользуйтесь глобальной или локальной учетной записью пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1809:
	{
		MessageBox(NULL, L"Указанное имя является именем серверного траста. Для доступа к серверу воспользуйтесь глобальным или локальным именем пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1810:
	{
		MessageBox(NULL, L"Указанное имя или идентификатор защиты (SID) домена несовместимы со сведениями, полученными о домене через отношения доверенности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1811:
	{
		MessageBox(NULL, L"Сервер используется и не может быть выгружен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1812:
	{
		MessageBox(NULL, L"Указанный файл образа не содержит секции ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1813:
	{
		MessageBox(NULL, L"Указанный тип ресурса в файле образа отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1814:
	{
		MessageBox(NULL, L"Указанное имя ресурса не найдено в файле образа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1815:
	{
		MessageBox(NULL, L"Код языка для ресурсов в файле образа не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1816:
	{
		MessageBox(NULL, L"Недостаточно квот для обработки команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1817:
	{
		MessageBox(NULL, L"Ни один интерфейс не зарегистрирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1818:
	{
		MessageBox(NULL, L"Удаленный вызов процедуры был отменен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1819:
	{
		MessageBox(NULL, L"Дескриптор привязки не содержит всей необходимой информации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1820:
	{
		MessageBox(NULL, L"Ошибка при обмене данными во время удаленного вызова процедуры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1821:
	{
		MessageBox(NULL, L"Запрошенный уровень проверки подлинности не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1822:
	{
		MessageBox(NULL, L"Ни одно основное имя не зарегистрировано.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1823:
	{
		MessageBox(NULL, L"Указан неверный код ошибки RPC Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1824:
	{
		MessageBox(NULL, L"Был создан идентификатор UUID, который подходит только для этого компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1825:
	{
		MessageBox(NULL, L"Ошибка в пакете безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1826:
	{
		MessageBox(NULL, L"Поток команд не прерван.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1827:
	{
		MessageBox(NULL, L"Недопустимая операция для дескриптора шифрования/расшифровки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1828:
	{
		MessageBox(NULL, L"Несовместимая версия пакета сериализации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1829:
	{
		MessageBox(NULL, L"Несовместимая версия заглушки RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1830:
	{
		MessageBox(NULL, L"Недопустимый или поврежденный объект канала RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1831:
	{
		MessageBox(NULL, L"Недопустимая операция для объекта канала RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1832:
	{
		MessageBox(NULL, L"Версия канала RPC не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1898:
	{
		MessageBox(NULL, L"Не найден член группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1899:
	{
		MessageBox(NULL, L"Не удалось создать элемент базы данных системы отображения конечных точек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1900:
	{
		MessageBox(NULL, L"Универсальный уникальный идентификатор объекта (UUID) имеет пустое значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1901:
	{
		MessageBox(NULL, L"Время задано некорректно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1902:
	{
		MessageBox(NULL, L"Задано неправильное имя формы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1903:
	{
		MessageBox(NULL, L"Задан неправильный размер формы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1904:
	{
		MessageBox(NULL, L"Указанный дескриптор принтера уже ожидается —", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1905:
	{
		MessageBox(NULL, L"Указанный принтер был удален", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1906:
	{
		MessageBox(NULL, L"Некорректное состояние принтера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1907:
	{
		MessageBox(NULL, L"Перед первым входом в систему пользователь должен сменить свой пароль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1908:
	{
		MessageBox(NULL, L"Не удается найти контроллер этого домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1909:
	{
		MessageBox(NULL, L"Учетная запись пользователя заблокирована и не может быть использована для входа в сеть.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1910:
	{
		MessageBox(NULL, L"Не найден указанный источник экспорта объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1911:
	{
		MessageBox(NULL, L"Указанный объект не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1912:
	{
		MessageBox(NULL, L"Не найден указанный набор системы разрешений объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1913:
	{
		MessageBox(NULL, L"В буфере запроса остались данные для отправки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1914:
	{
		MessageBox(NULL, L"Недопустимый обработчик вызова удаленной асинхронной процедуры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1915:
	{
		MessageBox(NULL, L"Недопустимый обработчик вызова асинхронной RPC для этой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1916:
	{
		MessageBox(NULL, L"Канальный RPC-объект уже закрыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1917:
	{
		MessageBox(NULL, L"Вызов RPC завершен до обработки всех каналов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1918:
	{
		MessageBox(NULL, L"Больше нет доступных данных из канала RPC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1919:
	{
		MessageBox(NULL, L"Для этого компьютера недоступно ни одного имени сайта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1920:
	{
		MessageBox(NULL, L"Доступ к этому файлу из системы отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1921:
	{
		MessageBox(NULL, L"Имя этого файла не может быть разрешено системой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1922:
	{
		MessageBox(NULL, L"Этот элемент не того типа, что ожидался.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1923:
	{
		MessageBox(NULL, L"Не все из UUID объекта могут быть экспортированы в указанный элемент.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1924:
	{
		MessageBox(NULL, L"Невозможно экспортировать интерфейс в указанный элемент.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1925:
	{
		MessageBox(NULL, L"Нельзя добавить указанную копию профиля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1926:
	{
		MessageBox(NULL, L"Нельзя добавить указанный элемент копии профиля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1927:
	{
		MessageBox(NULL, L"Нельзя удалить указанный элемент копии профиля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1928:
	{
		MessageBox(NULL, L"Нельзя добавить элемент группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1929:
	{
		MessageBox(NULL, L"Нельзя удалить элемент группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1930:
	{
		MessageBox(NULL, L"Драйвер принтера несовместим с политикой, блокирующей драйверы NT 4.0.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 1931:
	{
		MessageBox(NULL, L"Срок действия контекста истек и его использование не допускается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2000:
	{
		MessageBox(NULL, L"Неверный формат пиксела.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2001:
	{
		MessageBox(NULL, L"Выбран неверный драйвер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2002:
	{
		MessageBox(NULL, L"Тип или атрибут класса окна задан неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2003:
	{
		MessageBox(NULL, L"Требуемая операция для метафайлов не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2004:
	{
		MessageBox(NULL, L"Требуемая операция преобразования не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2005:
	{
		MessageBox(NULL, L"Требуемая операция обрезания рисунка не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2010:
	{
		MessageBox(NULL, L"Указан недопустимый модуль управления цветом .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2011:
	{
		MessageBox(NULL, L"Указан недопустимый цифровой профиль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2012:
	{
		MessageBox(NULL, L"Указанный тег не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2013:
	{
		MessageBox(NULL, L"Требуемый тег отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2014:
	{
		MessageBox(NULL, L"Указанный тег уже присутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2015:
	{
		MessageBox(NULL, L"Указанный цветовой профиль не сопоставлен ни с одним из устройств.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2016:
	{
		MessageBox(NULL, L"Указанный цветовой профиль не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2017:
	{
		MessageBox(NULL, L"Указан недопустимый цветовой профиль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2018:
	{
		MessageBox(NULL, L"Управление цветовой палитрой изображений не включено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2019:
	{
		MessageBox(NULL, L"Произошла ошибка при удалении преобразования цвета.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2020:
	{
		MessageBox(NULL, L"Указано недопустимое преобразование цвета.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2021:
	{
		MessageBox(NULL, L"Указанное преобразование не соответствует цветовой палитре точечного рисунка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2022:
	{
		MessageBox(NULL, L"Указанное имя индекса цвета отсутствует в профиле.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2102:
	{
		MessageBox(NULL, L"Драйвер рабочей станции не установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2103:
	{
		MessageBox(NULL, L"Не удалось найти сервер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2104:
	{
		MessageBox(NULL, L"Внутренняя ошибка. Сеть не может получить доступ к общему сегменту памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2105:
	{
		MessageBox(NULL, L"Недостаточно сетевых ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2106:
	{
		MessageBox(NULL, L"Данная операция не поддерживается на рабочих станциях.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2107:
	{
		MessageBox(NULL, L"Устройство не подключено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2108:
	{
		MessageBox(NULL, L"Сетевое подключение осуществлено успешно, но у пользователя будет запрошен иной пароль, отличающийся от ранее введенного .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2109:
	{
		MessageBox(NULL, L"Сетевое соединение успешно установлено с помощью реквизитов, использованных по умолчанию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2114:
	{
		MessageBox(NULL, L"Не запущена служба сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2115:
	{
		MessageBox(NULL, L"Очередь пуста.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2116:
	{
		MessageBox(NULL, L"Устройство или каталог не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2117:
	{
		MessageBox(NULL, L"Операция является незаконной для перенаправляемого ресурса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2118:
	{
		MessageBox(NULL, L"Общий доступ к этому имени уже открыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2119:
	{
		MessageBox(NULL, L"Запрошенный ресурс в настоящее время у сервера отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2121:
	{
		MessageBox(NULL, L"Требуемое число добавляемых элементов превышает максимально допустимое.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2122:
	{
		MessageBox(NULL, L"Служба одноранговой сети поддерживает только двух пользователей одновременно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2123:
	{
		MessageBox(NULL, L"Буфер возврата API слишком мал.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2127:
	{
		MessageBox(NULL, L"Удаленная ошибка API.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2131:
	{
		MessageBox(NULL, L"Ошибка при открытии или чтении файла конфигурации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2136:
	{
		MessageBox(NULL, L"Общая ошибка сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2137:
	{
		MessageBox(NULL, L"Служба рабочей станции находится в нерабочем состоянии. Перезагрузите компьютер и снова запустите службу рабочей станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2138:
	{
		MessageBox(NULL, L"Служба рабочей станции не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2139:
	{
		MessageBox(NULL, L"Запрошенная информация недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2140:
	{
		MessageBox(NULL, L"Внутренняя ошибка Windows 2000.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2141:
	{
		MessageBox(NULL, L"Сервер не настроен на выполнение транзакций.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2142:
	{
		MessageBox(NULL, L"Затребованный API не поддерживается на удаленном сервере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2143:
	{
		MessageBox(NULL, L"Недопустимое имя события.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2144:
	{
		MessageBox(NULL, L"Имя компьютера уже существует в сети. Измените имя и перезагрузите компьютер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2146:
	{
		MessageBox(NULL, L"Не удалось найти указанный компонент в сведениях о настройке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2147:
	{
		MessageBox(NULL, L"Не удалось найти указанный параметр в сведениях о настройке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2149:
	{
		MessageBox(NULL, L"Слишком длинная строка в файле настройки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2150:
	{
		MessageBox(NULL, L"Принтер не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2151:
	{
		MessageBox(NULL, L"Задание печати не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2152:
	{
		MessageBox(NULL, L"Адрес принтера не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2153:
	{
		MessageBox(NULL, L"Адрес принтера уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2154:
	{
		MessageBox(NULL, L"Очередь принтера уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2155:
	{
		MessageBox(NULL, L"Добавление принтеров невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2156:
	{
		MessageBox(NULL, L"Добавление заданий печати невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2157:
	{
		MessageBox(NULL, L"Добавление адресов принтеров невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2158:
	{
		MessageBox(NULL, L"Принтер находится в состоянии простоя и не может принимать управляющие команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2159:
	{
		MessageBox(NULL, L"Запрос на назначение принтера содержит неправильную управляющую функцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2160:
	{
		MessageBox(NULL, L"Обработчик заданий печати не отвечает.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2161:
	{
		MessageBox(NULL, L"Диспетчер очереди не выполняется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2162:
	{
		MessageBox(NULL, L"Операция не может быть выполнена при текущем состоянии принтера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2163:
	{
		MessageBox(NULL, L"Операция не может быть выполнена при текущем состоянии очереди печати.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2164:
	{
		MessageBox(NULL, L"Операция не может быть выполнена при текущем состоянии задания печати.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2165:
	{
		MessageBox(NULL, L"Ошибка при выделении памяти диспетчером очереди.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2166:
	{
		MessageBox(NULL, L"Отсутствует драйвер устройства.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2167:
	{
		MessageBox(NULL, L"Тип данных не поддерживается обработчиком заданий печати.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2168:
	{
		MessageBox(NULL, L"Обработчик заданий печати не установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2180:
	{
		MessageBox(NULL, L"База данных службы заблокирована.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2181:
	{
		MessageBox(NULL, L"Таблица службы заполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2182:
	{
		MessageBox(NULL, L"Затребованная служба уже запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2183:
	{
		MessageBox(NULL, L"Служба не реагирует на управляющие действия.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2184:
	{
		MessageBox(NULL, L"Служба не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2185:
	{
		MessageBox(NULL, L"Неправильное имя службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2186:
	{
		MessageBox(NULL, L"Служба не реагирует на управляющие функции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2187:
	{
		MessageBox(NULL, L"Механизм управления службой занят.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2188:
	{
		MessageBox(NULL, L"Файл настройки содержит неправильное имя программы службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2189:
	{
		MessageBox(NULL, L"В текущем состоянии службы управление службой невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2190:
	{
		MessageBox(NULL, L"Нештатное завершение службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2191:
	{
		MessageBox(NULL, L"Затребованная пауза или останов службы невозможны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2192:
	{
		MessageBox(NULL, L"Доставщик Service Control Dispatcher не может найти имя службы в таблице доставки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2193:
	{
		MessageBox(NULL, L"Ошибка при чтении канала доставщика Service Control Dispatcher", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2194:
	{
		MessageBox(NULL, L"Не удалось создать поток команд для новой службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2200:
	{
		MessageBox(NULL, L"Рабочая станция уже включена в локальную сеть.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2201:
	{
		MessageBox(NULL, L"Рабочая станция не включена в локальную сеть.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2202:
	{
		MessageBox(NULL, L"Имя пользователя задано неверно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2203:
	{
		MessageBox(NULL, L"Неправильный параметр пароля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2204:
	{
		MessageBox(NULL, L"Обработчик входа не добавил псевдоним сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2205:
	{
		MessageBox(NULL, L"Обработчик входа не добавил псевдоним сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2206:
	{
		MessageBox(NULL, L"Обработчик выхода не удалил псевдоним сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2207:
	{
		MessageBox(NULL, L"Обработчик выхода не удалил псевдоним сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2209:
	{
		MessageBox(NULL, L"Входы в сеть приостановлены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2210:
	{
		MessageBox(NULL, L"Конфликт на сервере, производящем регистрацию в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2211:
	{
		MessageBox(NULL, L"При настройке сервера не указан допустимый путь пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2212:
	{
		MessageBox(NULL, L"Ошибка при загрузке или обработке сценария входа в систему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2214:
	{
		MessageBox(NULL, L"Не указан сервер для обработки входа в сеть. Компьютер будет зарегистрирован как изолированный (STANDALONE).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2215:
	{
		MessageBox(NULL, L"Не найден сервер для проверки пароля входа в сеть.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2216:
	{
		MessageBox(NULL, L"Домен для входа компьютера в сеть уже выбран.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2217:
	{
		MessageBox(NULL, L"Сервер не может опознать пароль входа в сеть.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2219:
	{
		MessageBox(NULL, L"Не найдена база данных защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2220:
	{
		MessageBox(NULL, L"Не найдено имя группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2221:
	{
		MessageBox(NULL, L"Не найдено имя пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2222:
	{
		MessageBox(NULL, L"Не найдено имя ресурса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2223:
	{
		MessageBox(NULL, L"Группа уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2224:
	{
		MessageBox(NULL, L"Учетная запись уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2225:
	{
		MessageBox(NULL, L"Список разрешений для ресурса уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2226:
	{
		MessageBox(NULL, L"Данная операция разрешена только для основного контроллера домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2227:
	{
		MessageBox(NULL, L"База данных защиты не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2228:
	{
		MessageBox(NULL, L"База данных учетных записей пользователей содержит слишком много имен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2229:
	{
		MessageBox(NULL, L"Ошибка ввода/вывода для диска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2230:
	{
		MessageBox(NULL, L"Превышен предел 64 элементов на один ресурс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2231:
	{
		MessageBox(NULL, L"Удаления пользователя с сеансом не допускается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2232:
	{
		MessageBox(NULL, L"Не удалось найти родительский каталог", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2233:
	{
		MessageBox(NULL, L"Не удалось выполнить добавление в сегмент буфера сеанса базы данных защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2234:
	{
		MessageBox(NULL, L"Эта операция не разрешена для данной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2235:
	{
		MessageBox(NULL, L"Данный пользователь не помещен в буфера сеанса базы данных учетных записей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2236:
	{
		MessageBox(NULL, L"Пользователь уже включен в данную группу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2237:
	{
		MessageBox(NULL, L"Пользователь не включен в данную группу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2238:
	{
		MessageBox(NULL, L"Учетная запись пользователя не определена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2239:
	{
		MessageBox(NULL, L"Срок действия учетной записи пользователя истек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2240:
	{
		MessageBox(NULL, L"Не разрешен вход пользователя с данной рабочей станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2241:
	{
		MessageBox(NULL, L"Не разрешен вход пользователя в данное время.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2242:
	{
		MessageBox(NULL, L"Пароль данного пользователя просрочен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2243:
	{
		MessageBox(NULL, L"Нельзя изменить пароль данного пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2244:
	{
		MessageBox(NULL, L"Этот пароль сейчас не действует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2245:
	{
		MessageBox(NULL, L"Пароль не отвечает требованиям политики. Проверьте минимальную длину пароля, его сложность, отличие от ранее использованных паролей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2246:
	{
		MessageBox(NULL, L"Пароль данного пользователя был установлен недавно и его нельзя изменить.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2247:
	{
		MessageBox(NULL, L"База данных защиты повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2248:
	{
		MessageBox(NULL, L"Данная реплицированная сетевая/локальная база данных защиты не требует обновления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2249:
	{
		MessageBox(NULL, L"Реплицированная база данных устарела; требуется синхронизация.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2250:
	{
		MessageBox(NULL, L"Сетевое подключение не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2251:
	{
		MessageBox(NULL, L"Неправильный тип asg_type.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2252:
	{
		MessageBox(NULL, L"Данное устройство сейчас является общим.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2270:
	{
		MessageBox(NULL, L"Нельзя вводить имя компьютера как псевдоним сообщений. Имя может уже использоваться в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2271:
	{
		MessageBox(NULL, L"Служба сообщений уже запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2272:
	{
		MessageBox(NULL, L"Сбой при запуске службы сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2273:
	{
		MessageBox(NULL, L"Не удалось найти псевдоним сообщений в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2274:
	{
		MessageBox(NULL, L"Псевдоним сообщений уже был направлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2275:
	{
		MessageBox(NULL, L"Псевдоним сообщений уже добавлен, но ждет направления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2276:
	{
		MessageBox(NULL, L"Псевдоним сообщений уже существует на локальном уровне.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2277:
	{
		MessageBox(NULL, L"Превышено максимальное число добавленных псевдонимов сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2278:
	{
		MessageBox(NULL, L"Нельзя удалять имя компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2279:
	{
		MessageBox(NULL, L"Нельзя направлять сообщения на исходную рабочую станцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2280:
	{
		MessageBox(NULL, L"Ошибка в обработчике сообщений домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2281:
	{
		MessageBox(NULL, L"Сообщение отослано, но адресат временно отключил службу сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2282:
	{
		MessageBox(NULL, L"Сообщение отослано, но не принято.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2283:
	{
		MessageBox(NULL, L"Псевдоним сообщений занят. Повторите попытку позже.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2284:
	{
		MessageBox(NULL, L"Служба сообщений не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2285:
	{
		MessageBox(NULL, L"Имя не находится на локальном компьютере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2286:
	{
		MessageBox(NULL, L"Не удалось найти в сети псевдоним направленного сообщения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2287:
	{
		MessageBox(NULL, L"Таблица псевдонимов сообщений на удаленной станции заполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2288:
	{
		MessageBox(NULL, L"Сообщения с данным псевдонимом в настоящее время не направляются.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2289:
	{
		MessageBox(NULL, L"Переданное широковещательное сообщение усечено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2294:
	{
		MessageBox(NULL, L"Неправильное имя устройства.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2295:
	{
		MessageBox(NULL, L"Ошибка при записи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2297:
	{
		MessageBox(NULL, L"В сети существует повторяющийся псевдоним сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2298:
	{
		MessageBox(NULL, L"Данный псевдоним сообщений будет удален позже.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2299:
	{
		MessageBox(NULL, L"Псевдоним сообщений не был успешно удален из всех сетей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2300:
	{
		MessageBox(NULL, L"Данная операция не поддерживается для компьютеров, работающих с несколькими сетями.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2310:
	{
		MessageBox(NULL, L"Этот общий ресурс не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2311:
	{
		MessageBox(NULL, L"К этому устройству общий доступ отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2312:
	{
		MessageBox(NULL, L"Сеанс с данным именем компьютера не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2314:
	{
		MessageBox(NULL, L"Нет открытого файла с данным идентификационным номером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2315:
	{
		MessageBox(NULL, L"Сбой при выполнении удаленной административной команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2316:
	{
		MessageBox(NULL, L"Сбой при открытии удаленного временного файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2317:
	{
		MessageBox(NULL, L"Данные, возвращаемые удаленной административной командой, были усечены до 64 К.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2318:
	{
		MessageBox(NULL, L"Нельзя одновременно определить устройство как общий ресурс с очередью и без.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2319:
	{
		MessageBox(NULL, L"Сведения в списке серверов могут быть неточными.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2320:
	{
		MessageBox(NULL, L"Компьютер не активизирован в данном домене.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2321:
	{
		MessageBox(NULL, L"Перед удалением общий ресурс необходимо вывести из распределенной файловой системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2331:
	{
		MessageBox(NULL, L"Недопустимая операция для данного устройства.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2332:
	{
		MessageBox(NULL, L"Это устройство нельзя сделать общим.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2333:
	{
		MessageBox(NULL, L"Это устройство не было открыто.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2334:
	{
		MessageBox(NULL, L"Неправильный список имен устройств.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2335:
	{
		MessageBox(NULL, L"Неправильный приоритет в очереди.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2337:
	{
		MessageBox(NULL, L"Отсутствуют общие устройства связи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2338:
	{
		MessageBox(NULL, L"Указанная очередь не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2340:
	{
		MessageBox(NULL, L"Неправильный список устройств.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2341:
	{
		MessageBox(NULL, L"Затребовано неправильное устройство.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2342:
	{
		MessageBox(NULL, L"Это устройство уже используется диспетчером очереди.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2343:
	{
		MessageBox(NULL, L"Это устройство уже используется как устройство связи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2351:
	{
		MessageBox(NULL, L"Неправильное имя компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2354:
	{
		MessageBox(NULL, L"Указаны слишком длинные строка и префикс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2356:
	{
		MessageBox(NULL, L"Недопустимый компонент пути.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2357:
	{
		MessageBox(NULL, L"Не удалось определить тип ввода.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2362:
	{
		MessageBox(NULL, L"Буфер для типов недостаточно велик.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2370:
	{
		MessageBox(NULL, L"Размер файлов конфигурации не может превышать 64 К.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2371:
	{
		MessageBox(NULL, L"Смещение начальной инструкции вне допустимого диапазона.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2372:
	{
		MessageBox(NULL, L"Система не может удалить текущие подключения к сетевым ресурсам.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2373:
	{
		MessageBox(NULL, L"Система не может обработать командную строку в данном файле.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2374:
	{
		MessageBox(NULL, L"Ошибка при загрузке файла конфигурации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2375:
	{
		MessageBox(NULL, L"Ошибка при сохранении файла конфигурации. Конфигурация сохранена частично.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2377:
	{
		MessageBox(NULL, L"Файл журнала %1 заполнен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2378:
	{
		MessageBox(NULL, L"Файл журнала был изменен в интервале между двумя операциями чтения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2379:
	{
		MessageBox(NULL, L"Файл журнала %1 поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2380:
	{
		MessageBox(NULL, L"Нельзя задавать каталог как исходный путь.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2381:
	{
		MessageBox(NULL, L"Неправильный исходный путь.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2382:
	{
		MessageBox(NULL, L"Неправильный путь назначения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2383:
	{
		MessageBox(NULL, L"Исходный путь и путь назначения находятся на разных серверах.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2385:
	{
		MessageBox(NULL, L"Затребованный сервер выполнения не активен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2389:
	{
		MessageBox(NULL, L"Ошибка при связи с сервером выполнения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2391:
	{
		MessageBox(NULL, L"Ошибка при запуске фонового процесса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2392:
	{
		MessageBox(NULL, L"Не найден подключенный общий ресурс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2400:
	{
		MessageBox(NULL, L"Недопустимый номер сетевой платы локальной сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2401:
	{
		MessageBox(NULL, L"На подключенном устройстве имеются открытые файлы или запросы, ждущие обработки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2402:
	{
		MessageBox(NULL, L"Некоторые подключения все еще активны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2403:
	{
		MessageBox(NULL, L"Неправильное сетевое имя или пароль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2404:
	{
		MessageBox(NULL, L"Устройство используется одним из активных процессов и не может быть отключено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2405:
	{
		MessageBox(NULL, L"Эта буква диска уже используется на локальном уровне.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2430:
	{
		MessageBox(NULL, L"Указанный клиент уже зарегистрирован для данного события.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2431:
	{
		MessageBox(NULL, L"Таблица предупреждений заполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2432:
	{
		MessageBox(NULL, L"Использовано недопустимое или не существующее имя предупреждения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2433:
	{
		MessageBox(NULL, L"Неправильный получатель предупреждения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2434:
	{
		MessageBox(NULL, L"Сеанс пользователя с данным сервером был удален,так как часы входа пользователя стали недействительными.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2440:
	{
		MessageBox(NULL, L"Файл журнала не содержит запись с указанным номером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2450:
	{
		MessageBox(NULL, L"Неправильная конфигурация базы данных учетных записей пользователей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2451:
	{
		MessageBox(NULL, L"Данная операция не разрешена во время выполнения службы Netlogon.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2452:
	{
		MessageBox(NULL, L"Данную операцию нельзя выполнять над последней учетной записью администратора.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2453:
	{
		MessageBox(NULL, L"Не удалось найти контроллер домена для данного домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2454:
	{
		MessageBox(NULL, L"Не удалось задать сведения о входе для данного пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2455:
	{
		MessageBox(NULL, L"Служба Netlogon не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2456:
	{
		MessageBox(NULL, L"Не удалось выполнить добавление в базу данных учетных записей пользователей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2457:
	{
		MessageBox(NULL, L"Часы данного сервера не синхронизованы с часами основного контроллера домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2458:
	{
		MessageBox(NULL, L"Обнаружено несоответствие паролей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2460:
	{
		MessageBox(NULL, L"Идентификация сервера не определяет допустимый сервер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2461:
	{
		MessageBox(NULL, L"Идентификация сеанса не определяет допустимый сеанс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2462:
	{
		MessageBox(NULL, L"Идентификация подключения не определяет допустимое подключение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2463:
	{
		MessageBox(NULL, L"В таблице доступных серверов нет места для добавления записей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2464:
	{
		MessageBox(NULL, L"Для сервера достигнуто максимально возможное число активных сеансов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2465:
	{
		MessageBox(NULL, L"Для сервера достигнуто максимально возможное число подключений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2466:
	{
		MessageBox(NULL, L"Для сервера достигнуто максимально возможное число открытых файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2467:
	{
		MessageBox(NULL, L"Для данного сервера не зарегистрированы альтернативные серверы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2470:
	{
		MessageBox(NULL, L"Попробуйте использовать версию API нижнего уровня (удаленный административный протокол).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2480:
	{
		MessageBox(NULL, L"Служба UPS не может получить доступ к драйверу UPS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2481:
	{
		MessageBox(NULL, L"Неправильная конфигурация службы UPS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2482:
	{
		MessageBox(NULL, L"Служба UPS не может получить доступ к последовательному порту.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2483:
	{
		MessageBox(NULL, L"UPS указывает обрыв на линии или недостаточную зарядку аккумуляторов. Служба не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2484:
	{
		MessageBox(NULL, L"Служба UPS не смогла выполнить отключение системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2500:
	{
		MessageBox(NULL, L"Следующая программа возвращает код ошибки MS-DOS:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2501:
	{
		MessageBox(NULL, L"Для следующей программы требуется больше памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2502:
	{
		MessageBox(NULL, L"Следующая программа вызывает не поддерживаемую функцию MS-DOS:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2503:
	{
		MessageBox(NULL, L"Сбой при загрузке рабочей станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2504:
	{
		MessageBox(NULL, L"Следующий файл поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2505:
	{
		MessageBox(NULL, L"В файле, определяющем блок загрузки, не указан загрузчик.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2506:
	{
		MessageBox(NULL, L"NetBIOS возвращает ошибку: Выполнено копирование блоков NCB и SMB.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2507:
	{
		MessageBox(NULL, L"Ошибка ввода/вывода для диска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2508:
	{
		MessageBox(NULL, L"Сбой при подстановке параметра изображения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2509:
	{
		MessageBox(NULL, L"Слишком большое число параметров изображения привело к выходу за границы диска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2510:
	{
		MessageBox(NULL, L"Изображение не было создано с дискеты MS-DOS, отформатированной с ключом /S.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2511:
	{
		MessageBox(NULL, L"Загрузка с сервера будет возобновлена позже.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2512:
	{
		MessageBox(NULL, L"Сбой при вызове сервера загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2513:
	{
		MessageBox(NULL, L"Не удалось подключиться к серверу загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2514:
	{
		MessageBox(NULL, L"Не удалось открыть файл изображения на сервере загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2515:
	{
		MessageBox(NULL, L"Выполняется подключение к серверу загрузки…", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2516:
	{
		MessageBox(NULL, L"Выполняется подключение к серверу загрузки…", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2517:
	{
		MessageBox(NULL, L"Служба загрузки с сервера остановлена; проверьте причину по журналу ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2518:
	{
		MessageBox(NULL, L"Сбой при запуске загрузки с сервера; проверьте причину по журналу ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2519:
	{
		MessageBox(NULL, L"Второе подключение к ресурсу удаленной загрузки не допускается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2550:
	{
		MessageBox(NULL, L"Для службы поиска задана конфигурация с параметром MaintainServerList=No.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2610:
	{
		MessageBox(NULL, L"Сбой при запуске службы, поскольку не была запущена ни одна из сетевых плат.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2611:
	{
		MessageBox(NULL, L"Сбой при запуске службы из-за неправильной информации о запуске в реестре.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2612:
	{
		MessageBox(NULL, L"Сбой при запуске службы, так как ее база данных отсутствует или повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2613:
	{
		MessageBox(NULL, L"Сбой при запуске службы из-за отсутствия общего ресурса RPLFILES.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2614:
	{
		MessageBox(NULL, L"Сбой при запуске службы из-за отсутствия группы RPLUSER.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2615:
	{
		MessageBox(NULL, L"Не удалось перечислить записи службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2616:
	{
		MessageBox(NULL, L"Запись рабочей станции повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2617:
	{
		MessageBox(NULL, L"Запись рабочей станции не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2618:
	{
		MessageBox(NULL, L"Имя рабочей станции используется другой рабочей станцией.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2619:
	{
		MessageBox(NULL, L"Запись конфигурации повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2620:
	{
		MessageBox(NULL, L"Запись конфигурации не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2621:
	{
		MessageBox(NULL, L"Имя конфигурации используется другой конфигурацией.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2622:
	{
		MessageBox(NULL, L"Имеются рабочие станции, использующие данную конфигурацию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2623:
	{
		MessageBox(NULL, L"Повреждение данных в записи настройки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2624:
	{
		MessageBox(NULL, L"Запись настройки не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2625:
	{
		MessageBox(NULL, L"Повреждение данных в записи идентификатора платы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2626:
	{
		MessageBox(NULL, L"Внутренняя ошибка службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2627:
	{
		MessageBox(NULL, L"Запись с кодом поставщика повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2628:
	{
		MessageBox(NULL, L"Запись блока загрузки повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2629:
	{
		MessageBox(NULL, L"Для данной записи рабочей станции нет учетной записи пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2630:
	{
		MessageBox(NULL, L"Не удалось найти локальную группу RPLUSER.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2631:
	{
		MessageBox(NULL, L"Не найдена запись блока загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2632:
	{
		MessageBox(NULL, L"Выбранная конфигурация несовместима с данной рабочей станцией.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2633:
	{
		MessageBox(NULL, L"Выбранный идентификатор сетевой платы используется другой рабочей станцией.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2634:
	{
		MessageBox(NULL, L"Существуют конфигурации, использующие данную настройку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2635:
	{
		MessageBox(NULL, L"Существуют рабочие станции, конфигурации или настройки, использующие данный блок загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2636:
	{
		MessageBox(NULL, L"Служба не смогла выполнить резервирование базы данных удаленной загрузки с сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2637:
	{
		MessageBox(NULL, L"Запись адаптера не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2638:
	{
		MessageBox(NULL, L"Запись поставщика не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2639:
	{
		MessageBox(NULL, L"Имя поставщика используется в другой записи поставщика.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2640:
	{
		MessageBox(NULL, L"(имя загрузки, код поставщика) используется в другой записи блока загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2641:
	{
		MessageBox(NULL, L"Имя конфигурации уже используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2660:
	{
		MessageBox(NULL, L"Внутренняя база данных службы распределенной файловой системы DFS повреждена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2661:
	{
		MessageBox(NULL, L"Одна из записей внутренней базы данных службы DFS повреждена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2662:
	{
		MessageBox(NULL, L"Указанному пути входа не соответствует ни одного DFS-имени", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2663:
	{
		MessageBox(NULL, L"Корень или ссылка с указанным именем уже существует", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2664:
	{
		MessageBox(NULL, L"Указанный общий ресурс сервера уже включен в распределенную файловую систему DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2665:
	{
		MessageBox(NULL, L"Указанный общий ресурс сервера не поддерживает указанное пространство имен DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2666:
	{
		MessageBox(NULL, L"Эта операция не применима в этой части пространства имен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2667:
	{
		MessageBox(NULL, L"Эта операция не применима в этой части пространства имен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2668:
	{
		MessageBox(NULL, L"Операция неоднозначна, так как для этой ссылки имеется несколько серверов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2669:
	{
		MessageBox(NULL, L"Не удалось создать ссылку", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2670:
	{
		MessageBox(NULL, L"Сервер не поддерживает распределенную файловую систему DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2671:
	{
		MessageBox(NULL, L"Указан недопустимый конечный путь для переименования", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2672:
	{
		MessageBox(NULL, L"Указанная ссылка DFS отключена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2673:
	{
		MessageBox(NULL, L"Выбранный сервер не является сервером для данной ссылки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2674:
	{
		MessageBox(NULL, L"Обнаружена циклическая ссылка в имени DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2675:
	{
		MessageBox(NULL, L"Операция не поддерживается для распределенной файловой системы DFS на сервере", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2676:
	{
		MessageBox(NULL, L"Эта ссылка уже поддерживается указанным сервером-ресурсом", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2677:
	{
		MessageBox(NULL, L"Невозможно удалить последний сервер-ресурс, поддерживающий этот корень или ссылку", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2678:
	{
		MessageBox(NULL, L"Эта операция не поддерживается для ссылок между DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2679:
	{
		MessageBox(NULL, L"Внутреннее состояние службы DFS стало противоречивым", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2680:
	{
		MessageBox(NULL, L"Служба DFS установлена на указанном сервере", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2681:
	{
		MessageBox(NULL, L"Данные DFS, для которых выполняется согласование, идентичны", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2682:
	{
		MessageBox(NULL, L"Корень DFS не может быть удален — требуется отмена установки DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2683:
	{
		MessageBox(NULL, L"Дочерняя или родительская папка этого общего ресурса уже содержится в DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2690:
	{
		MessageBox(NULL, L"Внутренняя ошибка распределенной файловой системы DFS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2691:
	{
		MessageBox(NULL, L"Этот компьютер уже присоединен к домену.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2692:
	{
		MessageBox(NULL, L"Этот компьютер в данный момент не присоединен к домену.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2693:
	{
		MessageBox(NULL, L"Этот компьютер является контроллером домена и не может быть исключен из домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2694:
	{
		MessageBox(NULL, L"Конечный контроллер домена не поддерживает создания учетных записей компьютеров в подразделениях.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2695:
	{
		MessageBox(NULL, L"Указанное имя рабочей группы недопустимо.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2696:
	{
		MessageBox(NULL, L"Указанное имя компьютера несовместимо с языком системы, используемым контроллером домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2697:
	{
		MessageBox(NULL, L"Указанная учетная запись компьютера не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2698:
	{
		MessageBox(NULL, L"Компьютер с этой версией Windows не может быть присоединен к домену.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 2999:
	{
		MessageBox(NULL, L"Это последняя ошибка в диапазоне NERR.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3000:
	{
		MessageBox(NULL, L"Указан неизвестный монитор печати.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3001:
	{
		MessageBox(NULL, L"Указанный драйвер принтера занят.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3002:
	{
		MessageBox(NULL, L"Не найден файл диспетчера очереди.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3003:
	{
		MessageBox(NULL, L"Не был произведен вызов StartDocPrinter.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3004:
	{
		MessageBox(NULL, L"Не был произведен вызов AddJob.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3005:
	{
		MessageBox(NULL, L"Указанный процессор печати уже установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3006:
	{
		MessageBox(NULL, L"Указанный монитор печати уже установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3007:
	{
		MessageBox(NULL, L"Указанный монитор печати не имеет требуемых функций.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3008:
	{
		MessageBox(NULL, L"Указанный монитор печати сейчас уже используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3009:
	{
		MessageBox(NULL, L"Требуемая операция не разрешена, если другие задания ждут очереди на печать.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3010:
	{
		MessageBox(NULL, L"Требуемая операция выполнена успешно. Чтобы сделанные изменения вступили в силу, следует перезагрузить систему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3011:
	{
		MessageBox(NULL, L"Требуемая операция выполнена успешно. Чтобы сделанные изменения вступили в силу, следует перезагрузить компьютер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3012:
	{
		MessageBox(NULL, L"Не найдено ни одного принтера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3013:
	{
		MessageBox(NULL, L"Есть сведения о ненадежности работы драйвера принтера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3014:
	{
		MessageBox(NULL, L"Есть сведения о вреде, который наносит системе работа драйвера принтера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3020:
	{
		MessageBox(NULL, L"Сбой питания для %1. Работа сервера приостановлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3021:
	{
		MessageBox(NULL, L"Восстановлено питание для %1. Работа сервера возобновлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3022:
	{
		MessageBox(NULL, L"Служба бесперебойного питания начала отключение %1 из-за разрядки аккумуляторов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3023:
	{
		MessageBox(NULL, L"Имеется проблема с настройкой указанного пользователемкомандного файла отключения. Тем не менее, служба UPS запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3025:
	{
		MessageBox(NULL, L"Поврежденный сектор на диске %1 заменен (восстановлен).Данные не потеряны. Необходимо срочно выполнить CHKDSK для полноговосстановления быстродействия и пополнения банка запасных секторов для тома.Восстановление выполнено при обработке удаленного запроса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3026:
	{
		MessageBox(NULL, L"Ошибка на диске для тома HPFS на диске %1.Ошибка возникла при обработке удаленного запроса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3027:
	{
		MessageBox(NULL, L"База данных учетных записей пользователей (NET.ACC) повреждена.Локальная система защиты заменяет базу данных NET.ACC на резервнуюкопию, сохраненную на %1 в %2.Любые обновления базы данных после этого времени потеряны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3028:
	{
		MessageBox(NULL, L"База данных учетных записей пользователей (NET.ACC) отсутствует.Локальная система защиты восстанавливает резервную базу данных,сохраненную на %1 в %2.Любые обновления базы данных после этого времени потеряны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3029:
	{
		MessageBox(NULL, L"Невозможно запустить локальную систему защиты, так как база данныхучетных записей пользователей (NET.ACC) отсутствует или повреждена и нетгодной для использования резервной базы данных.СИСТЕМА НЕ ЗАЩИЩЕНА.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3030:
	{
		MessageBox(NULL, L"Сервер не может экспортировать каталог %1 клиенту %2.Каталог экспортируется с другого сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3031:
	{
		MessageBox(NULL, L"Сервер репликации не может обновить каталог %2 по источникуна %3 из-за ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3032:
	{
		MessageBox(NULL, L"Основная реплика %1 не посылала для каталога %2 уведомленияоб обновлении в ожидаемое время.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3033:
	{
		MessageBox(NULL, L"Пользователь %1 превысил ограничение учетной записи %2 на сервере %3.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3034:
	{
		MessageBox(NULL, L"Сбой основного контроллера домена для домена %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3035:
	{
		MessageBox(NULL, L"Сбой при проверке имени на %2, контроллере домена Windows NT или Windows 2000для домена %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3036:
	{
		MessageBox(NULL, L"Сбой при попытке регистрации службы репликации на %2 как %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3037:
	{
		MessageBox(NULL, L"@I *ЧАСЫ ВХОДА", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3038:
	{
		MessageBox(NULL, L"Служба репликации не может получить доступ к %2на %3 из-за системной ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3039:
	{
		MessageBox(NULL, L"Превышен предел службы репликации на число файлов в каталоге.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3040:
	{
		MessageBox(NULL, L"Превышен предел службы репликации на глубину дерева.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3041:
	{
		MessageBox(NULL, L"Служба репликации не может обновить каталог %1. Он имеетусловие целостности дерева и является текущим для процесса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3042:
	{
		MessageBox(NULL, L"Сетевая ошибка %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3045:
	{
		MessageBox(NULL, L"Системная ошибка %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3046:
	{
		MessageBox(NULL, L"Не удалось выполнить вход. Пользователь уже вошели аргумент TRYUSER имеет значение NO.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3047:
	{
		MessageBox(NULL, L"Путь импорта %1 не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3048:
	{
		MessageBox(NULL, L"Путь экспорта %1 не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3049:
	{
		MessageBox(NULL, L"Реплицированные данные изменены в каталоге %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3050:
	{
		MessageBox(NULL, L"Служба репликации не может обновить сигнальный файл в каталоге %2из-за системной ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3051:
	{
		MessageBox(NULL, L"Реестр или введенные данные содержат недопустимоезначение для «%1».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3052:
	{
		MessageBox(NULL, L"Требуемый параметр не был задан в команднойстроке или в файле настройки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3053:
	{
		MessageBox(NULL, L"Диспетчер LAN не распознает «%1» как допустимый параметр.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3054:
	{
		MessageBox(NULL, L"Невозможно удовлетворить запрос на ресурсы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3055:
	{
		MessageBox(NULL, L"Проблема с системной настройкой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3056:
	{
		MessageBox(NULL, L"Системная ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3057:
	{
		MessageBox(NULL, L"Внутренняя ошибка согласования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3058:
	{
		MessageBox(NULL, L"Неизвестный параметр в файле настройки или в командной строке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3059:
	{
		MessageBox(NULL, L"Повторяющийся параметр в файле настройки или в командной строке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3060:
	{
		MessageBox(NULL, L"Служба не реагирует на команды управления и остановленас помощью функции DosKillProc.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3061:
	{
		MessageBox(NULL, L"Ошибка при попытке запуска программы службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3062:
	{
		MessageBox(NULL, L"Сбой при запуске подчиненной службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3063:
	{
		MessageBox(NULL, L"Конфликт в значениях или при использовании параметров: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3064:
	{
		MessageBox(NULL, L"Проблемы с файлом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3070:
	{
		MessageBox(NULL, L"память", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3071:
	{
		MessageBox(NULL, L"место на диске", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3072:
	{
		MessageBox(NULL, L"поток", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3073:
	{
		MessageBox(NULL, L"процесс", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3074:
	{
		MessageBox(NULL, L"Ошибка безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3075:
	{
		MessageBox(NULL, L"Неправильный или отсутствующий корневой каталог диспетчера LAN.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3076:
	{
		MessageBox(NULL, L"Сетевое программное обеспечение не установлено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3077:
	{
		MessageBox(NULL, L"Сервер не запущен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3078:
	{
		MessageBox(NULL, L"Нет доступа с сервера к базе данных учетных записей (NET.ACC).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3079:
	{
		MessageBox(NULL, L"В дереве LANMAN установлены несовместимые файлы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3080:
	{
		MessageBox(NULL, L"Неправильный каталог LANMAN\LOGS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3081:
	{
		MessageBox(NULL, L"Невозможно использовать указанный домен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3082:
	{
		MessageBox(NULL, L"Имя компьютера используется как псевдоним сообщений на другом компьютере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3083:
	{
		MessageBox(NULL, L"Сбой при объявлении имени сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3084:
	{
		MessageBox(NULL, L"Неправильная конфигурация базы данных учетных записей пользователей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3085:
	{
		MessageBox(NULL, L"Сервер не запущен с защитой на уровне пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3087:
	{
		MessageBox(NULL, L"Неправильная конфигурация рабочей станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3088:
	{
		MessageBox(NULL, L"Подробности см. в журнале ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3089:
	{
		MessageBox(NULL, L"Не удалось выполнить запись в файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3090:
	{
		MessageBox(NULL, L"Файл ADDPAK поврежден. Удалите LANMAN\NETPROG\ADDPAK.SERи вновь примените все ADDPAK.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3091:
	{
		MessageBox(NULL, L"Невозможно запустить сервер LM386, так как не выполняется программа CACHE.EXE.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3092:
	{
		MessageBox(NULL, L"Нет записи для данного компьютера в базе данных защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3093:
	{
		MessageBox(NULL, L"Данный компьютер не является членом группы SERVERS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3094:
	{
		MessageBox(NULL, L"В базе данных локальной защиты нет группы SERVERS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3095:
	{
		MessageBox(NULL, L"Этот компьютер является членом рабочей группы, а не домена. В данном случае нет необходимости запускать службу Netlogon.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3096:
	{
		MessageBox(NULL, L"Не удалось найти основной контроллер домена для данного домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3097:
	{
		MessageBox(NULL, L"Основной контроллер домена уже выполняется в данном домене.Тем не менее, компьютер %1выдал требование на роль основного контроллера доме в данном домене.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3098:
	{
		MessageBox(NULL, L"Служба не смогла выполнить проверку имени на основном контроллере домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3099:
	{
		MessageBox(NULL, L"Ошибочные дата создания или серийный номер базы данных защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3100:
	{
		MessageBox(NULL, L"Сбой в операции из-за ошибки сетевой программы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3101:
	{
		MessageBox(NULL, L"В системе исчерпан ресурс, управляемый параметром %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3102:
	{
		MessageBox(NULL, L"Служба не может наложить долговременную блокировку на сегментсетевых управляющих блоков (NCB). Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3103:
	{
		MessageBox(NULL, L"Служба не может снять долговременную блокировку сегментасетевых управляющих блоков (NCB). Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3104:
	{
		MessageBox(NULL, L"Ошибка при остановке службы %1.Данные содержат код ошибки от NetServiceControl.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3105:
	{
		MessageBox(NULL, L"Сбой при инициализации из-за ошибки при выполнении системы на пути%1. Данные содержат код системной ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3106:
	{
		MessageBox(NULL, L"Принят неизвестный сетевой управляющий блок (NCB). Данные содержат NCB.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3107:
	{
		MessageBox(NULL, L"Сеть не запущена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3108:
	{
		MessageBox(NULL, L"Сбой при обращении DosDevIoctl или DosFsCtl к NETWKSTA.SYS.Данные представлены в следующем формате:DWORD ~ CS:IP вызова ioctl или fsctlWORD код ошибкиWORD номер ioctl или fsctl", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3109:
	{
		MessageBox(NULL, L"Не удалось создать или открыть системный семафор %1.Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3110:
	{
		MessageBox(NULL, L"Сбой при инициализации из-за ошибки при открытии/созданиифайла %1. Код системной ошибки представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3111:
	{
		MessageBox(NULL, L"Неизвестная ошибка NetBIOS.Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3112:
	{
		MessageBox(NULL, L"Принят неправильный блок сообщений сервера (SMB).Данные содержат SMB.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3113:
	{
		MessageBox(NULL, L"Сбой при инициализации, так как затребованную службу %1запустить невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3114:
	{
		MessageBox(NULL, L"Некоторые элементы в журнале ошибок были потеряныиз-за переполнения буфера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3120:
	{
		MessageBox(NULL, L"Параметры инициализации, управляющие использованием всех ресурсов,кроме буферов сети, имеют размеры, требующие слишком много памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3121:
	{
		MessageBox(NULL, L"Сервер не может увеличить размер сегмента памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3122:
	{
		MessageBox(NULL, L"Сбой при инициализации, так как файл учетных записей %1 не веренили отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3123:
	{
		MessageBox(NULL, L"Сбой при инициализации, так как сеть %1 не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3124:
	{
		MessageBox(NULL, L"Сервер не запустился. Все три параметра chdevдолжны одновременно иметь нулевое или ненулевое значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3125:
	{
		MessageBox(NULL, L"Удаленный запрос API остановлен из-за следующейнеправильной строки описания: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3126:
	{
		MessageBox(NULL, L"В сети %1 исчерпаны сетевые управляющие блоки (NCB). Требуется увеличить число NCBдля этой сети. Следующие сведения включаютчисло NCB, представленных сервером при возникновении данной ошибки:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3127:
	{
		MessageBox(NULL, L"Сервер не может создать слот сообщений %1, требуемый для отправкиоповещения ReleaseMemory. Принята ошибка:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3128:
	{
		MessageBox(NULL, L"Сервер не смог зарегистрировать оповещение ReleaseMemoryс получателем %1. Данные содержаткод ошибки от NetAlertStart.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3129:
	{
		MessageBox(NULL, L"Сервер не может обновить файл расписания AT. Файлповрежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3130:
	{
		MessageBox(NULL, L"Сервер обнаружил ошибку при вызовеNetIMakeLMFileName. Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3131:
	{
		MessageBox(NULL, L"Сбой при инициализации из-за системной ошибки при выполнениина пути %1. Не хватает памяти для запуска процесса.Данные содержат код системной ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3132:
	{
		MessageBox(NULL, L"Сбой при долговременной блокировке буферов сервера.Проверьте свободный объем на диске подкачки и перезагрузите систему для запуска сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3140:
	{
		MessageBox(NULL, L"Служба остановлена из-за последовательно повторяющихсяошибок сетевого управляющего блока NCB. За последним поврежденным NCBследуют необработанные данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3141:
	{
		MessageBox(NULL, L"Сервер сообщений остановлен из-за блокировкисегмента общих данных на сервере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3150:
	{
		MessageBox(NULL, L"Ошибка файловой системы при открытии или записив журнал системных сообщений %1. Регистрация сообщенийотключена из-за ошибки. Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3151:
	{
		MessageBox(NULL, L"Не удалось вывести сообщение POPUP из-за системной ошибки вызова VIO.Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3152:
	{
		MessageBox(NULL, L"Принят неправильный блок сообщений сервера (SMB). Данные содержат SMB.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3160:
	{
		MessageBox(NULL, L"Размер сегмента сведений о рабочей станции превышает 64 К.Размер представлен в формате DWORD:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3161:
	{
		MessageBox(NULL, L"Рабочая станция не смогла получить имя и номер компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3162:
	{
		MessageBox(NULL, L"Рабочая станция не смогла инициализировать Async NetBIOS Thread.Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3163:
	{
		MessageBox(NULL, L"Рабочая станция не смогла открыть начальный общий сегмент.Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3164:
	{
		MessageBox(NULL, L"Таблица обслуживающего компьютера рабочей станции заполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3165:
	{
		MessageBox(NULL, L"Принят блок сообщений сервера (SMB) с неправильным слотом сообщений. SMB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3166:
	{
		MessageBox(NULL, L"Ошибка при запуске базы данных учетных записей пользователей с рабочей станции.Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3167:
	{
		MessageBox(NULL, L"Ошибка при ответе рабочей станции на запрос на подтверждение SSI.Данные содержат код функции и код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3170:
	{
		MessageBox(NULL, L"Ошибка в службе оповещений при создании спискаполучателей оповещения. Код ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3171:
	{
		MessageBox(NULL, L"Ошибка при раскрытии %1 как имени группы. Попытайтесьразбить группу на две или несколько меньших групп.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3172:
	{
		MessageBox(NULL, L"Ошибка при передаче %2 оповещения -(%3 )Код ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3173:
	{
		MessageBox(NULL, L"Ошибка при создании или чтении слота сообщений оповещателя.Код ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3174:
	{
		MessageBox(NULL, L"Сервер не может прочитать файл расписания AT.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3175:
	{
		MessageBox(NULL, L"Сервер обнаружил неправильную запись расписания AT.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3176:
	{
		MessageBox(NULL, L"Сервер не смог найти файл расписания AT и создал новый.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3177:
	{
		MessageBox(NULL, L"Сервер не может получить доступ к сети %1 с NetBiosOpen.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3178:
	{
		MessageBox(NULL, L"Обработчик команд AT не может выполнить %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3180:
	{
		MessageBox(NULL, L"ПРЕДУПРЕЖДЕНИЕ. Из-за ошибки отложенной записи диск %1 теперьсодержит поврежденные данные. Буферизация остановлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3181:
	{
		MessageBox(NULL, L"Поврежденный сектор на диске %1 заменен (восстановлен).Данные не потеряны. Необходимо срочно выполнить CHKDSK для полноговосстановления быстродействия и пополнения банка запасных секторов для тома.Восстановление выполнено при обработке удаленного запроса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3182:
	{
		MessageBox(NULL, L"Ошибка на диске для тома HPFS на диске %1.Ошибка возникла при обработке удаленного запроса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3183:
	{
		MessageBox(NULL, L"База данных учетных записей пользователей (NET.ACC) повреждена.Локальная система защиты заменяет поврежденную NET.ACCна резервную копию от %1.Любые обновления базы данных после этого времени потеряны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3184:
	{
		MessageBox(NULL, L"База данных учетных записей пользователей (NET.ACC) отсутствует.Локальная система защиты восстанавливаетрезервную копию от %1.Любые обновления базы данных после этого времени потеряны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3185:
	{
		MessageBox(NULL, L"Невозможно запустить локальную систему защиты, так как база данныхучетных записей пользователей (NET.ACC) отсутствует или повреждена и нетгодной для использования резервной базы данных.СИСТЕМА НЕ ЗАЩИЩЕНА.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3186:
	{
		MessageBox(NULL, L"Невозможно запустить локальную систему защиты из-за ошибкипри инициализации. Возращен код ошибки %1.СИСТЕМА НЕ ЗАЩИЩЕНА.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3190:
	{
		MessageBox(NULL, L"Внутренняя ошибка NetWksta:%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3191:
	{
		MessageBox(NULL, L"Исчерпан ресурс системы перенаправления: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3192:
	{
		MessageBox(NULL, L"Ошибка блока сообщений сервера (SMB) для подключения к %1.Заголовок SMB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3193:
	{
		MessageBox(NULL, L"Ошибка виртуальной линии связи в сеансе с %1.Данные содержат команду и возвращаемый код сетевого управляющего блока (NCB).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3194:
	{
		MessageBox(NULL, L"Окончание задержанного сеанса с %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3195:
	{
		MessageBox(NULL, L"Ошибка (%1) сетевого управляющего блока (NCB).NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3196:
	{
		MessageBox(NULL, L"Сбой при записи в %1.Возможна потеря данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3197:
	{
		MessageBox(NULL, L"При восстановлении драйвера %1 не завершен сетевой управляющий блок (NCB).NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3198:
	{
		MessageBox(NULL, L"Затребованный объем ресурса %1 превышаетмаксимальный. Выделен максимальный объем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3204:
	{
		MessageBox(NULL, L"Сервер не может создать поток команд.Необходимо увеличить параметр THREADS в файле CONFIG.SYS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3205:
	{
		MessageBox(NULL, L"Сервер не может закрыть %1.Вероятно, файл поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3206:
	{
		MessageBox(NULL, L"Служба репликации не может обновить каталог %1. Он имеетусловие целостности дерева и является текущим для процесса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3207:
	{
		MessageBox(NULL, L"Сервер не может экспортировать каталог %1 клиенту %2.Каталог экспортируется с другого сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3208:
	{
		MessageBox(NULL, L"Сервер репликации не может обновить каталог %2 по источникуна %3 из-за ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3209:
	{
		MessageBox(NULL, L"Основная реплика %1 не посылала для каталога %2 уведомленияоб обновлении в ожидаемое время.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3210:
	{
		MessageBox(NULL, L"Произошла ошибка при проверке имени этого компьютера на контроллере %2,являющимся контроллером домена Windows для домена %1, и в результате этот компьютер может отвергать попытки входа в систему. Неспособность проверитьимя может быть вызвана наличием в этой сети другого компьютера с таким жеименем или тем, что не опознан пароль для этой учетной записи компьютера.Если это сообщение повторяется, обратитесь к сетевому администратору.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3211:
	{
		MessageBox(NULL, L"Сбой при попытке регистрации службы репликации на %2 как %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3212:
	{
		MessageBox(NULL, L"Сетевая ошибка %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3213:
	{
		MessageBox(NULL, L"Превышен предел службы репликации на число файлов в каталоге.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3214:
	{
		MessageBox(NULL, L"Превышен предел службы репликации на глубину дерева.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3215:
	{
		MessageBox(NULL, L"В слот сообщений принято неопознанное сообщение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3216:
	{
		MessageBox(NULL, L"Системная ошибка %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3217:
	{
		MessageBox(NULL, L"Не удалось выполнить вход. Пользователь уже вошели аргумент TRYUSER имеет значение NO.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3218:
	{
		MessageBox(NULL, L"Путь импорта %1 не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3219:
	{
		MessageBox(NULL, L"Путь экспорта %1 не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3220:
	{
		MessageBox(NULL, L"Служба репликации не может обновить сигнальный файл в каталоге %2из-за системной ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3221:
	{
		MessageBox(NULL, L"Ошибка отказоустойчивости диска%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3222:
	{
		MessageBox(NULL, L"Служба репликации не может получить доступ к %2на %3 из-за системной ошибки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3223:
	{
		MessageBox(NULL, L"Вероятный сбой основного контроллера домена для домена %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3224:
	{
		MessageBox(NULL, L"Сбой при изменении пароля учетной записи %1 на машинес ошибкой: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3225:
	{
		MessageBox(NULL, L"Ошибка при обновлении сведений о входе или выходе для %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3226:
	{
		MessageBox(NULL, L"Ошибка при синхронизации с основным контроллером домена %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3227:
	{
		MessageBox(NULL, L"Установка сеанса к %1, контроллеру домена Windows NT или Windows 2000 для домена %2не выполнена, поскольку %1 не поддерживает подписывание или запечатываниесеанса Netlogon.Следует либо обновить контроллер домена, либо установить элемент реестраRequireSignOrSeal для этого компьютера равным 0.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3230:
	{
		MessageBox(NULL, L"Сбой питания на сервере.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3231:
	{
		MessageBox(NULL, L"Сервер выключен службой UPS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3232:
	{
		MessageBox(NULL, L"Служба UPS не завершила выполнение указанногопользователем командного файла выключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3233:
	{
		MessageBox(NULL, L"Не удалось открыть драйвер UPS. Код ошибкипредставляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3234:
	{
		MessageBox(NULL, L"Питание восстановлено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3235:
	{
		MessageBox(NULL, L"Неправильная конфигурация указанного пользователемкомандного файла выключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3236:
	{
		MessageBox(NULL, L"Служба UPS не завершила выполнение указанного пользователемкомандного файла выключения %1. Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3250:
	{
		MessageBox(NULL, L"Сбой при инициализации из-за неправильного или отсутствующегопараметра в файле настройки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3251:
	{
		MessageBox(NULL, L"Сбой при инициализации из-за неправильной строки в файленастройки %1. Неправильная строка представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3252:
	{
		MessageBox(NULL, L"Сбой при инициализации из-за ошибкив файле настройки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3253:
	{
		MessageBox(NULL, L"Файл %1 был изменен после инициализации.Загрузка блока загрузки временно прекращена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3254:
	{
		MessageBox(NULL, L"Файлы не соответствуют блоку загрузки в файленастройки %1. Измените описания BASE и ORG илипорядок файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3255:
	{
		MessageBox(NULL, L"Сбой при инициализации, так как возвращеннеправильный номер версии библиотеки %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3256:
	{
		MessageBox(NULL, L"Непоправимая ошибка в библиотеке динамическойкомпоновки службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3257:
	{
		MessageBox(NULL, L"Система возвращает неизвестный код ошибки.Данные содержат код ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3258:
	{
		MessageBox(NULL, L"Файл журнала ошибок отказоустойчивости, LANROOT\LOGS\FT.LOG,имеет размер более 64 К.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3259:
	{
		MessageBox(NULL, L"В файле журнала ошибок отказоустойчивости, LANROOT\LOGS\FT.LOG,при открытии установлен бит выполняющегося обновления. Это означает, чтобыл обнаружен фатальный сбой системы при работе с журналом ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3260:
	{
		MessageBox(NULL, L"Этот компьютер был успешно присоединен к %1 ‘%2\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3299:
	{
		MessageBox(NULL, L"%1 %2 %3 %4 %5 %6 %7 %8 %9.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3301:
	{
		MessageBox(NULL, L"Удаленный IPC", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3302:
	{
		MessageBox(NULL, L"Удаленный Admin", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3303:
	{
		MessageBox(NULL, L"Общий сервер входа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3304:
	{
		MessageBox(NULL, L"Ошибка в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3400:
	{
		MessageBox(NULL, L"Недостаточно памяти для запуска службы рабочей станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3401:
	{
		MessageBox(NULL, L"Ошибка при чтении элемента NETWORKS в файле LANMAN.INI.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3402:
	{
		MessageBox(NULL, L"Недопустимый аргумент: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3403:
	{
		MessageBox(NULL, L"Элемент %1 NETWORKS в файле LANMAN.INI содержитошибку синтаксиса и будет игнорироваться.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3404:
	{
		MessageBox(NULL, L"Слишком много элементов NETWORKS в файле LANMAN.INI.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3406:
	{
		MessageBox(NULL, L"Ошибка при открытии драйвера сетевогоустройства %1 = %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3407:
	{
		MessageBox(NULL, L"Драйвер устройства %1 посылает неправильный отклик BiosLinkage.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3408:
	{
		MessageBox(NULL, L"Программа не может использоваться с данной операционной системой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3409:
	{
		MessageBox(NULL, L"Перенаправитель уже установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3410:
	{
		MessageBox(NULL, L"Устанавливается NETWKSTA.SYS Версия %1.%2.%3 (%4)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3411:
	{
		MessageBox(NULL, L"Ошибка при установке NETWKSTA.SYS.Для продолжения нажмите клавишу ENTER.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3412:
	{
		MessageBox(NULL, L"Ошибка в системе разрешения конфликтов связи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3413:
	{
		MessageBox(NULL, L"Ваше время входа на %1 заканчивается в %2.Пожалуйста, выполните очистку и выход.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3414:
	{
		MessageBox(NULL, L"Вы будете автоматически отключены в %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3415:
	{
		MessageBox(NULL, L"Ваше время входа на %1 закончилось.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3416:
	{
		MessageBox(NULL, L"Ваше время входа на %1 закончилось в %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3417:
	{
		MessageBox(NULL, L"ПРЕДУПРЕЖДЕНИЕ: необходимо выйти до %1. Если не осуществитьвыход своевременно, сеанс будет отключени любые открытые вами файлы или устройствамогут потерять данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3418:
	{
		MessageBox(NULL, L"ПРЕДУПРЕЖДЕНИЕ: необходимо немедленно выйти из %1.У вас осталось 2 минуты на выход до отключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3419:
	{
		MessageBox(NULL, L"У вас имеются открытые файлы или устройства и принудительноеотключение может привести к потере данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3420:
	{
		MessageBox(NULL, L"Общий ресурс по умолчанию для внутреннего использования", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3421:
	{
		MessageBox(NULL, L"Служба сообщений", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3500:
	{
		MessageBox(NULL, L"Команда выполнена успешно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3501:
	{
		MessageBox(NULL, L"Использован недопустимый параметр.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3502:
	{
		MessageBox(NULL, L"Системная ошибка %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3503:
	{
		MessageBox(NULL, L"Неправильное число аргументов команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3504:
	{
		MessageBox(NULL, L"Команда выполнена с одной или несколькими ошибками.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3505:
	{
		MessageBox(NULL, L"Использован параметр с недопустимым значением.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3506:
	{
		MessageBox(NULL, L"Неизвестный параметр %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3507:
	{
		MessageBox(NULL, L"Непонятный параметр %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3510:
	{
		MessageBox(NULL, L"Используется команда с конфликтующими ключами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3511:
	{
		MessageBox(NULL, L"Не удалось найти подпрограмму %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3512:
	{
		MessageBox(NULL, L"Для программы требуется более поздняя версияоперационной системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3513:
	{
		MessageBox(NULL, L"Имеется больше данных, чем может возвратить Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3514:
	{
		MessageBox(NULL, L"Для вызова дополнительной справки наберите NET HELPMSG %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3515:
	{
		MessageBox(NULL, L"Эта команда может использоваться только для контроллера домена Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3516:
	{
		MessageBox(NULL, L"Эта команда не может использоваться для контроллера домена Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3520:
	{
		MessageBox(NULL, L"Запущены следующие службы Windows:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3521:
	{
		MessageBox(NULL, L"Служба «%1» не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3522:
	{
		MessageBox(NULL, L"Служба «%1» запускается", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3523:
	{
		MessageBox(NULL, L"Не удалось запустить службу «%1».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3524:
	{
		MessageBox(NULL, L"Служба «%1» успешно запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3525:
	{
		MessageBox(NULL, L"Останов службы рабочей станции приведет также к останову службы сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3526:
	{
		MessageBox(NULL, L"На рабочей станции имеются открытые файлы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3527:
	{
		MessageBox(NULL, L"Служба «%1» останавливается", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3528:
	{
		MessageBox(NULL, L"Не удалось остановить службу «%1».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3529:
	{
		MessageBox(NULL, L"Служба «%1» успешно остановлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3530:
	{
		MessageBox(NULL, L"Следующие службы являются зависимыми от службы «%1».Останов службы «%1» приведет также к останову этих служб.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3533:
	{
		MessageBox(NULL, L"Служба запускается или останавливается. Повторите попытку позже.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3534:
	{
		MessageBox(NULL, L"Служба не сообщает об ошибке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3535:
	{
		MessageBox(NULL, L"Ошибка при управлении устройством.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3536:
	{
		MessageBox(NULL, L"Служба «%1» успешно возобновлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3537:
	{
		MessageBox(NULL, L"Служба «%1» успешно приостановлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3538:
	{
		MessageBox(NULL, L"Не удалось возобновить службу «%1».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3539:
	{
		MessageBox(NULL, L"Не удалось приостановить службу «%1».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3540:
	{
		MessageBox(NULL, L"Ожидается возобновление службы «%1»", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3541:
	{
		MessageBox(NULL, L"Ожидается приостановка службы «%1»", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3542:
	{
		MessageBox(NULL, L"«%1» успешно возобновлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3543:
	{
		MessageBox(NULL, L"«%1» успешно приостановлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3544:
	{
		MessageBox(NULL, L"Служба «%1» запущена другим процессом и находится в состоянии ожидания.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3547:
	{
		MessageBox(NULL, L"Специфическая ошибка службы: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3660:
	{
		MessageBox(NULL, L"Следующие рабочие станции имеют сеансы на сервере:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3661:
	{
		MessageBox(NULL, L"Следующие рабочие станции имеют на сервере сеансы с открытыми файлами:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3666:
	{
		MessageBox(NULL, L"Направлен псевдоним сообщений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3670:
	{
		MessageBox(NULL, L"Имеются следующие удаленные подключения:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3671:
	{
		MessageBox(NULL, L"Продолжение приведет к отмене подключений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3675:
	{
		MessageBox(NULL, L"В сеансе от %1 имеются открытые файлы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3676:
	{
		MessageBox(NULL, L"Новые подключения будут запомнены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3677:
	{
		MessageBox(NULL, L"Новые подключения не будут запомнены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3678:
	{
		MessageBox(NULL, L"Ошибка при сохранении конфигурации. Запоминаемые подключения не были изменены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3679:
	{
		MessageBox(NULL, L"Ошибка при чтении конфигурации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3680:
	{
		MessageBox(NULL, L"Ошибка при восстановлении подключения к %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3682:
	{
		MessageBox(NULL, L"Сетевые службы не запущены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3683:
	{
		MessageBox(NULL, L"В списке нет элементов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3688:
	{
		MessageBox(NULL, L"Пользователи имеют на %1 открытые файлы. Продолжение операции приведет к закрытию файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3689:
	{
		MessageBox(NULL, L"Служба рабочей станции уже запущена. Windows будет игнорировать командные параметры для рабочей станции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3691:
	{
		MessageBox(NULL, L"В подключения к %1 имеются открытые файлы и/или незавершенные операции поиска в каталогах.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3693:
	{
		MessageBox(NULL, L"Этот запрос будет обрабатываться контроллером домена %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3694:
	{
		MessageBox(NULL, L"Невозможно удалить очередь общего доступа, содержащую задание печати.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3695:
	{
		MessageBox(NULL, L"%1 имеет запоминаемое подключение к %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3710:
	{
		MessageBox(NULL, L"Ошибка при открытии файла справки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3711:
	{
		MessageBox(NULL, L"Файл справки пуст.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3712:
	{
		MessageBox(NULL, L"Файл справки поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3713:
	{
		MessageBox(NULL, L"Не удалось найти контроллер домена для домена %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3714:
	{
		MessageBox(NULL, L"Эта операция является привилегированной на системахс ранней версией программного обеспечения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3716:
	{
		MessageBox(NULL, L"Неизвестный тип устройства.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3717:
	{
		MessageBox(NULL, L"Файл журнала поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3718:
	{
		MessageBox(NULL, L"Имена программных файлов должны иметь окончание .EXE.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3719:
	{
		MessageBox(NULL, L"Не удалось найти соответствующий общий ресурс. Удаление не выполнено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3720:
	{
		MessageBox(NULL, L"Неправильное значение в поле числа единиц за неделю в записи пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3721:
	{
		MessageBox(NULL, L"Недействительный пароль для %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3722:
	{
		MessageBox(NULL, L"Ошибка при передаче сообщения на %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3723:
	{
		MessageBox(NULL, L"Недействительные пароль или имя пользователя для %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3725:
	{
		MessageBox(NULL, L"Ошибка при удалении общего ресурса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3726:
	{
		MessageBox(NULL, L"Недействительное имя пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3727:
	{
		MessageBox(NULL, L"Недействительный пароль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3728:
	{
		MessageBox(NULL, L"Пароли не совпадают.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3729:
	{
		MessageBox(NULL, L"Не восстановлены все постоянные подключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3730:
	{
		MessageBox(NULL, L"Имя не является правильным именем компьютера или домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3732:
	{
		MessageBox(NULL, L"Для данного ресурса не могут быть заданы стандартные разрешения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3734:
	{
		MessageBox(NULL, L"Не был введен действительный пароль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3735:
	{
		MessageBox(NULL, L"Не было введено действительное имя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3736:
	{
		MessageBox(NULL, L"Этот ресурс нельзя сделать общим.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3737:
	{
		MessageBox(NULL, L"Строка разрешений содержит неправильные значения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3738:
	{
		MessageBox(NULL, L"Данная операция выполняется только для принтеров или устройств связи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3742:
	{
		MessageBox(NULL, L"%1 представляет недействительное имя пользователя или группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3743:
	{
		MessageBox(NULL, L"Сервер не настроен для удаленного администрирования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3752:
	{
		MessageBox(NULL, L"Нет пользователей, имеющих сеансы с данным сервером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3753:
	{
		MessageBox(NULL, L"Пользователь %1 не входит в группу %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3754:
	{
		MessageBox(NULL, L"Пользователь %1 уже включен в группу %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3755:
	{
		MessageBox(NULL, L"Такого пользователя нет: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3756:
	{
		MessageBox(NULL, L"Неправильный отклик.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3757:
	{
		MessageBox(NULL, L"Не был получен допустимый отклик.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3758:
	{
		MessageBox(NULL, L"Представленный список назначений не совпадает со списком назначений очереди принтера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3759:
	{
		MessageBox(NULL, L"Ваш пароль не может быть изменен до %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3760:
	{
		MessageBox(NULL, L"%1 не распознается как день недели.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3761:
	{
		MessageBox(NULL, L"Указанный временной интервал заканчивается раньше, чем начинается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3762:
	{
		MessageBox(NULL, L"%1 не распознается как час.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3763:
	{
		MessageBox(NULL, L"%1 не является допустимой спецификацией минут.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3764:
	{
		MessageBox(NULL, L"Неполный час в указанном времени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3765:
	{
		MessageBox(NULL, L"Нельзя смешивать12- и 24-часовой форматы времени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3766:
	{
		MessageBox(NULL, L"%1 не является допустимым суффиксом 12-часового формата.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3767:
	{
		MessageBox(NULL, L"Введен недопустимый формат даты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3768:
	{
		MessageBox(NULL, L"Введен недопустимый диапазон дней.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3769:
	{
		MessageBox(NULL, L"Введен недопустимый диапазон времени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3770:
	{
		MessageBox(NULL, L"Недопустимые аргументы NET USER. Проверьте минимальнуюдлину пароля и/или указанные аргументы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3771:
	{
		MessageBox(NULL, L"Для ENABLESCRIPT требуется значение YES.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3773:
	{
		MessageBox(NULL, L"Введен неправильный код страны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3774:
	{
		MessageBox(NULL, L"Пользователь был успешно создан, но не добавленв локальную группу USERS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3775:
	{
		MessageBox(NULL, L"Представлен неправильный контекст для пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3776:
	{
		MessageBox(NULL, L"Невозможность загрузки библиотеки динамической компоновки %1или ошибка при попытке ее использования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3777:
	{
		MessageBox(NULL, L"Отправка файлов более не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3778:
	{
		MessageBox(NULL, L"Возможно, не указаны пути для общих ресурсов ADMIN$ и IPC$.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3779:
	{
		MessageBox(NULL, L"Пользователь или группа %1 уже является членом локальной группы %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3780:
	{
		MessageBox(NULL, L"Несуществующий пользователь или группа: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3781:
	{
		MessageBox(NULL, L"Несуществующий компьютер: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3782:
	{
		MessageBox(NULL, L"Компьютер %1 уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3783:
	{
		MessageBox(NULL, L"Несуществующий глобальный пользователь или группа: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3784:
	{
		MessageBox(NULL, L"Только дисковые общие ресурсы могут быть помечены как кэшируемые", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3790:
	{
		MessageBox(NULL, L"Система не может найти сообщение: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3802:
	{
		MessageBox(NULL, L"Неправильная дата в расписании.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3803:
	{
		MessageBox(NULL, L"Корневой каталог LANMAN недоступен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3804:
	{
		MessageBox(NULL, L"Не удалось открыть файл SCHED.LOG.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3805:
	{
		MessageBox(NULL, L"Служба сервера не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3806:
	{
		MessageBox(NULL, L"Идентификатор задания AT не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3807:
	{
		MessageBox(NULL, L"Файл расписания AT поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3808:
	{
		MessageBox(NULL, L"Сбой при удалении из-за ошибки в файле расписания AT.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3809:
	{
		MessageBox(NULL, L"Длина командной строки не может превышать 259 символов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3810:
	{
		MessageBox(NULL, L"Невозможно обновить файл расписания AT, так как диск заполнен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3812:
	{
		MessageBox(NULL, L"Неправильный файл расписания AT. Удалите этот файл и создайте новый.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3813:
	{
		MessageBox(NULL, L"Файл расписания AT был удален.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3814:
	{
		MessageBox(NULL, L"Синтаксис данной команды:AT [код] [/DELETE]AT время [/EVERY:дата | /NEXT:дата] командаКоманда AT устанавливает расписание запуска программной командыс более поздней датой и временем на сервере. Кроме того, онавыводит список стоящих в расписании выполняемых программ и команд.День можно указать как Пн,Вт,Ср,Чт,Пт,Сб,Вс или 1-31.Время можно указать в 24-часовом формате ЧЧ:ММ.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3815:
	{
		MessageBox(NULL, L"Истек интервал ожидания команды AT.Повторите попытку позже.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3816:
	{
		MessageBox(NULL, L"Минимальный срок действия пароля учетной записи пользователяне может превышать максимальный срок действия пароля.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3817:
	{
		MessageBox(NULL, L"Указанное значение несовместимо с серверамис программами нижнего уровня. Укажите меньшее значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3870:
	{
		MessageBox(NULL, L"%1 не является допустимым именем компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3871:
	{
		MessageBox(NULL, L"%1 не является допустимым номером сетевого сообщения Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3900:
	{
		MessageBox(NULL, L"Сообщение от %1 для %2 на %3", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3901:
	{
		MessageBox(NULL, L"****", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3902:
	{
		MessageBox(NULL, L"**** неожиданный конец сообщения ****", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3905:
	{
		MessageBox(NULL, L"Нажмите ESC для выхода", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3906:
	{
		MessageBox(NULL, L"…", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3910:
	{
		MessageBox(NULL, L"Текущее время на %1 равно %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3911:
	{
		MessageBox(NULL, L"Текущие локальные часы %1Установить для локального компьютера время, совпадающеес временем на %2? %3:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3912:
	{
		MessageBox(NULL, L"Не удалось найти сервер времени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3913:
	{
		MessageBox(NULL, L"Не удалось найти контроллер домена для домена %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3914:
	{
		MessageBox(NULL, L"Местное время (GMT%3) на %1 — %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3915:
	{
		MessageBox(NULL, L"Не удалось определить основной каталог пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3916:
	{
		MessageBox(NULL, L"Не был указан основной каталог пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3917:
	{
		MessageBox(NULL, L"Указанное имя основного каталога пользователя (%1) не является универсальным именем UNC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3918:
	{
		MessageBox(NULL, L"Диск %1 сейчас подключен к %2. Ваш основной каталог %3\%4.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3919:
	{
		MessageBox(NULL, L"Диск %1 сейчас подключен к %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3920:
	{
		MessageBox(NULL, L"Не осталось свободных букв диска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3932:
	{
		MessageBox(NULL, L"%1 не является допустимым именем домена или рабочей группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3935:
	{
		MessageBox(NULL, L"Текущее значение SNTP: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3936:
	{
		MessageBox(NULL, L"Этот компьютер в данный момент не настроен на использование конкретного SNTP-сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3937:
	{
		MessageBox(NULL, L"Текущее автоматически выбранное значение SNTP: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3951:
	{
		MessageBox(NULL, L"Для параметра %1 указано слишком много значений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3952:
	{
		MessageBox(NULL, L"Для параметра %1 введено недопустимое значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3953:
	{
		MessageBox(NULL, L"Неправильный синтаксис.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3960:
	{
		MessageBox(NULL, L"Указан недопустимый номер файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3961:
	{
		MessageBox(NULL, L"Указан недопустимый номер задания печати.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3963:
	{
		MessageBox(NULL, L"Не удалось найти указанную учетную запись пользователя или группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3965:
	{
		MessageBox(NULL, L"Пользователь был добавлен, но не удалось разрешить пользованиеслужбой доступа к файлам и принтерам NetWare.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3966:
	{
		MessageBox(NULL, L"Служба доступа к файлам и принтерам NetWare не установлена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3967:
	{
		MessageBox(NULL, L"Не удалось задать свойства пользователя для службы доступа к файлам и принтерам NetWare.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3968:
	{
		MessageBox(NULL, L"Пароль для %1 имеет вид: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 3969:
	{
		MessageBox(NULL, L"NetWare-совместимый вход", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4000:
	{
		MessageBox(NULL, L"Ошибка WINS при обработке команды.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4001:
	{
		MessageBox(NULL, L"Нельзя удалить локальную часть WINS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4002:
	{
		MessageBox(NULL, L"Ошибка при импорте из файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4003:
	{
		MessageBox(NULL, L"Ошибка при архивации данных. Производилась ли ранее полная архивация?", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4004:
	{
		MessageBox(NULL, L"Ошибка при архивации данных. Проверьте папку, в которую производится архивация базы данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4005:
	{
		MessageBox(NULL, L"Имя не существует в базе данных WINS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4006:
	{
		MessageBox(NULL, L"Репликация невозможна без предварительной настройки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4100:
	{
		MessageBox(NULL, L"DHCP-клиент запросил IP-адрес, который уже используется в сети. Локальный интерфейс будет отключен до тех пор, пока DHCP-клиент сможет получить новый адрес.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4200:
	{
		MessageBox(NULL, L"Переданный GUID не был распознан поставщиком данных WMI как правильный GUID.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4201:
	{
		MessageBox(NULL, L"Переданное имя копии не было распознано поставщиком данных WMI как допустимое имя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4202:
	{
		MessageBox(NULL, L"Переданный идентификатор данных не был распознан поставщиком данных WMI как допустимый.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4203:
	{
		MessageBox(NULL, L"Не удается завершить запрос WMI. Запрос нужно повторить.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4204:
	{
		MessageBox(NULL, L"Не удается найти поставщика данных WMI.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4205:
	{
		MessageBox(NULL, L"Поставщик данных WMI ссылается на незарегистрированный элемент .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4206:
	{
		MessageBox(NULL, L"Блок данных WMI или оповещение о событиях уже включено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4207:
	{
		MessageBox(NULL, L"Блок данных WMI более недоступен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4208:
	{
		MessageBox(NULL, L"Служба данных WMI более недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4209:
	{
		MessageBox(NULL, L"Поставщик данных WMI не смог выполнить запрос.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4210:
	{
		MessageBox(NULL, L"Информация WMI MOF неверна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4211:
	{
		MessageBox(NULL, L"Регистрационная информация WMI неверна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4212:
	{
		MessageBox(NULL, L"Блок данных WMI или оповещение о событиях уже отключено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4213:
	{
		MessageBox(NULL, L"Элемент данных или блок данных WMI предназначен только для чтения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4214:
	{
		MessageBox(NULL, L"Нельзя изменить элемент данных или блок данных WMI.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4300:
	{
		MessageBox(NULL, L"Идентификатор носителя не представляет правильный носитель.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4301:
	{
		MessageBox(NULL, L"Идентификатор библиотеки не представляет правильной библиотеки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4302:
	{
		MessageBox(NULL, L"Идентификатор пула носителей не представляет правильный пул.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4303:
	{
		MessageBox(NULL, L"Дисковод и носитель несовместимы или принадлежат разным библиотекам.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4304:
	{
		MessageBox(NULL, L"Этот носитель сейчас находится в автономном режиме. Для выполнения операции его надо подключить.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4305:
	{
		MessageBox(NULL, L"Эту операцию выполнить нельзя выполнить на автономной библиотеке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4306:
	{
		MessageBox(NULL, L"Библиотека, дисковод или носитель пусты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4307:
	{
		MessageBox(NULL, L"Библиотека, дисковод или носитель должны быть пусты для выполнения этой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4308:
	{
		MessageBox(NULL, L"Отсутствует носитель в библиотеке или пуле.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4309:
	{
		MessageBox(NULL, L"Ресурс, требуемый для этой операции, отключен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4310:
	{
		MessageBox(NULL, L"Идентификатор носителя представляет неверный носитель.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4311:
	{
		MessageBox(NULL, L"Очистка диска невозможна или этот диск ее не поддерживает.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4312:
	{
		MessageBox(NULL, L"Идентификатор объекта представляет неверный объект.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4313:
	{
		MessageBox(NULL, L"Чтение и запись в базу данных невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4314:
	{
		MessageBox(NULL, L"База данных заполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4315:
	{
		MessageBox(NULL, L"Носитель несовместим с устройством или пулом носителей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4316:
	{
		MessageBox(NULL, L"Ресурс, требуемый для осуществления операции, не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4317:
	{
		MessageBox(NULL, L"Неверный идентификатор операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4318:
	{
		MessageBox(NULL, L"Носитель не смонтирован или не готов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4319:
	{
		MessageBox(NULL, L"Устройство не готово.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4320:
	{
		MessageBox(NULL, L"Оператор или администратор отклонили запрос.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4321:
	{
		MessageBox(NULL, L"Идентификатор диска представляет неверный диск.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4322:
	{
		MessageBox(NULL, L"Библиотека заполнена. Свободные гнезда отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4323:
	{
		MessageBox(NULL, L"Этот транспорт не может получить доступ к носителю.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4324:
	{
		MessageBox(NULL, L"Не удается загрузить носитель в устройство.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4325:
	{
		MessageBox(NULL, L"Информация о статусе устройства недоступна .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4326:
	{
		MessageBox(NULL, L"Невозможно получить информацию о состоянии гнезда.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4327:
	{
		MessageBox(NULL, L"Невозможно получить информацию о состоянии гнезда.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4328:
	{
		MessageBox(NULL, L"Невозможно использовать этот транспорт, т.к. он уже используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4329:
	{
		MessageBox(NULL, L"Не удается открыть или закрыть порт вставки/извлечения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4330:
	{
		MessageBox(NULL, L"Не удается извлечь носитель, т.к. он находится в устройстве.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4331:
	{
		MessageBox(NULL, L"Гнездо очистителя уже зарезервировано.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4332:
	{
		MessageBox(NULL, L"Гнездо очистителя не зарезервировано.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4333:
	{
		MessageBox(NULL, L"Чистящий картридж выполнил наибольшее из возможных число чисток диска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4334:
	{
		MessageBox(NULL, L"Непредвиденный идентификатор на носителе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4335:
	{
		MessageBox(NULL, L"Невозможно удалить последний из оставшихся элементов группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4336:
	{
		MessageBox(NULL, L"В полученном сообщении превышен наибольший размер, допустимый для данного параметра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4337:
	{
		MessageBox(NULL, L"Том содержит системные файлы или файлы подкачки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4338:
	{
		MessageBox(NULL, L"Этот тип носителя нельзя удалить из библиотеки, т.к. по меньшей мере один из дисков библиотеки подтверждает возможность поддержки этого типа носителя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4339:
	{
		MessageBox(NULL, L"Этот автономный носитель не может быть подключен к системе, т.к. отсутствуют работающие диски, которые можно использовать.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4340:
	{
		MessageBox(NULL, L"В ленточной библиотеке установлен чистящий картридж.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4341:
	{
		MessageBox(NULL, L"(Y-да/N-нет) [N]", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4342:
	{
		MessageBox(NULL, L"Ошибка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4343:
	{
		MessageBox(NULL, L"OK", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4344:
	{
		MessageBox(NULL, L"Y", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4345:
	{
		MessageBox(NULL, L"N", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4346:
	{
		MessageBox(NULL, L"Любой", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4347:
	{
		MessageBox(NULL, L"A", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4348:
	{
		MessageBox(NULL, L"P", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4349:
	{
		MessageBox(NULL, L"(не найден)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4350:
	{
		MessageBox(NULL, L"Служба удаленного хранилища не смогла отозвать файл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4351:
	{
		MessageBox(NULL, L"Служба съемных носителей сейчас неработоспособна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4352:
	{
		MessageBox(NULL, L"Служба съемных носителей обнаружила ошибку на носителе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4354:
	{
		MessageBox(NULL, L"Введите пароль:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4357:
	{
		MessageBox(NULL, L"Введите пароль для %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4358:
	{
		MessageBox(NULL, L"Введите пароль для пользователя:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4359:
	{
		MessageBox(NULL, L"Введите пароль для общего ресурса:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4360:
	{
		MessageBox(NULL, L"Введите ваш пароль:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4361:
	{
		MessageBox(NULL, L"Повторите ввод пароля для подтверждения:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4362:
	{
		MessageBox(NULL, L"Введите старый пароль пользователя:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4363:
	{
		MessageBox(NULL, L"Введите новый пароль пользователя:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4364:
	{
		MessageBox(NULL, L"Введите ваш новый пароль:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4365:
	{
		MessageBox(NULL, L"Введите пароль службы Replicator:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4366:
	{
		MessageBox(NULL, L"Введите ваше имя пользователя или нажмите клавишу ВВОД, если это имя %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4367:
	{
		MessageBox(NULL, L"Введите имя домена или сервера, на котором меняется пароль, илинажмите ENTER, если это домен %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4368:
	{
		MessageBox(NULL, L"Введите ваше имя пользователя:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4369:
	{
		MessageBox(NULL, L"Статистика сети для \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4370:
	{
		MessageBox(NULL, L"Параметры печати для %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4371:
	{
		MessageBox(NULL, L"Доступ для очередей устройства связи %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4372:
	{
		MessageBox(NULL, L"Сведения о задании печати", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4373:
	{
		MessageBox(NULL, L"Очереди устройства связи на \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4374:
	{
		MessageBox(NULL, L"Принтеры на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4375:
	{
		MessageBox(NULL, L"Доступ для принтеров %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4376:
	{
		MessageBox(NULL, L"Задания печати для %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4377:
	{
		MessageBox(NULL, L"Общие ресурсы на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4378:
	{
		MessageBox(NULL, L"Допускается управление следующими выполняющимися службами:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4379:
	{
		MessageBox(NULL, L"Доступна статистика для следующих выполняющихся служб:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4380:
	{
		MessageBox(NULL, L"Учетные записи пользователей для \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4381:
	{
		MessageBox(NULL, L"Синтаксис данной команды:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4382:
	{
		MessageBox(NULL, L"Параметры данной команды:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4383:
	{
		MessageBox(NULL, L"Введите имя основного контроллера домена:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4384:
	{
		MessageBox(NULL, L"Введена слишком длинная строка. Максимальнаядлина %1. Повторите ввод.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4385:
	{
		MessageBox(NULL, L"Воскресенье", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4386:
	{
		MessageBox(NULL, L"Понедельник", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4387:
	{
		MessageBox(NULL, L"Вторник", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4388:
	{
		MessageBox(NULL, L"Среда", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4389:
	{
		MessageBox(NULL, L"Четверг", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4390:
	{
		MessageBox(NULL, L"Этот файл или папка не являются точкой повторной обработки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4391:
	{
		MessageBox(NULL, L"Нельзя установить атрибут точки повторной обработки, т.к. он конфликтует с существующим атрибутом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4392:
	{
		MessageBox(NULL, L"Данные в буфере точки повторной обработки являются недопустимыми.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4393:
	{
		MessageBox(NULL, L"Тег в буфере точки повторной обработки являются недопустимыми.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4394:
	{
		MessageBox(NULL, L"Имеется несовпадение между тегом, указанном в запросе, и теге в буфере точки повторной обработки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4395:
	{
		MessageBox(NULL, L"Ср", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4396:
	{
		MessageBox(NULL, L"Чт", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4397:
	{
		MessageBox(NULL, L"Пт", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4398:
	{
		MessageBox(NULL, L"Сб", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4399:
	{
		MessageBox(NULL, L"Сб", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4400:
	{
		MessageBox(NULL, L"Учетные записи групп для \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4401:
	{
		MessageBox(NULL, L"Имя группы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4402:
	{
		MessageBox(NULL, L"Комментарий", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4403:
	{
		MessageBox(NULL, L"Члены", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4405:
	{
		MessageBox(NULL, L"Псевдонимы для \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4406:
	{
		MessageBox(NULL, L"Имя псевдонима", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4407:
	{
		MessageBox(NULL, L"Комментарий", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4408:
	{
		MessageBox(NULL, L"Члены", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4410:
	{
		MessageBox(NULL, L"Учетные записи пользователей для \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4411:
	{
		MessageBox(NULL, L"Имя пользователя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4412:
	{
		MessageBox(NULL, L"Полное имя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4413:
	{
		MessageBox(NULL, L"Комментарий", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4414:
	{
		MessageBox(NULL, L"Комментарий пользователя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4415:
	{
		MessageBox(NULL, L"Параметры", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4416:
	{
		MessageBox(NULL, L"Код страны", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4417:
	{
		MessageBox(NULL, L"Уровень привилегий", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4418:
	{
		MessageBox(NULL, L"Привилегии оператора", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4419:
	{
		MessageBox(NULL, L"Учетная запись активна", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4420:
	{
		MessageBox(NULL, L"Учетная запись просрочена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4421:
	{
		MessageBox(NULL, L"Последний пароль задан", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4422:
	{
		MessageBox(NULL, L"Действие пароля завершается", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4423:
	{
		MessageBox(NULL, L"Пароль допускает изменение", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4424:
	{
		MessageBox(NULL, L"Разрешенные рабочие станции", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4425:
	{
		MessageBox(NULL, L"Максимальный объем диска", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4426:
	{
		MessageBox(NULL, L"Без ограничений", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4427:
	{
		MessageBox(NULL, L"Членство в локальных группах", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4428:
	{
		MessageBox(NULL, L"Контроллер домена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4429:
	{
		MessageBox(NULL, L"Сценарий входа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4430:
	{
		MessageBox(NULL, L"Последний вход", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4431:
	{
		MessageBox(NULL, L"Членство в глобальных группах", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4432:
	{
		MessageBox(NULL, L"Разрешенные часы входа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4433:
	{
		MessageBox(NULL, L"Все", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4434:
	{
		MessageBox(NULL, L"Нет", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4435:
	{
		MessageBox(NULL, L"Ежедневно %1 — %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4436:
	{
		MessageBox(NULL, L"Основной каталог", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4437:
	{
		MessageBox(NULL, L"Требуется пароль", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4438:
	{
		MessageBox(NULL, L"Пользователь может изменить пароль", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4439:
	{
		MessageBox(NULL, L"Конфигурация пользователя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4440:
	{
		MessageBox(NULL, L"Блокировка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4450:
	{
		MessageBox(NULL, L"Имя компьютера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4451:
	{
		MessageBox(NULL, L"Имя пользователя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4452:
	{
		MessageBox(NULL, L"Версия программы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4453:
	{
		MessageBox(NULL, L"Активная рабочая станция на", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4454:
	{
		MessageBox(NULL, L"Корневой каталог Windows NT", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4455:
	{
		MessageBox(NULL, L"Домен рабочей станции", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4456:
	{
		MessageBox(NULL, L"Домен входа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4457:
	{
		MessageBox(NULL, L"Другие домены", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4458:
	{
		MessageBox(NULL, L"Интервал ожидания открытия COM-порта (с)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4459:
	{
		MessageBox(NULL, L"Отсчет передачи COM-порта (байт)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4460:
	{
		MessageBox(NULL, L"Таймаут передачи COM-порта (мс)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4461:
	{
		MessageBox(NULL, L"Таймаут печати сеанса DOS (с)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4462:
	{
		MessageBox(NULL, L"Максимальный размер журнала ошибок (К)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4463:
	{
		MessageBox(NULL, L"Максимальный размер временного буфера (К)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4464:
	{
		MessageBox(NULL, L"Число сетевых буферов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4465:
	{
		MessageBox(NULL, L"Число символьных буферов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4466:
	{
		MessageBox(NULL, L"Размер сетевых буферов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4467:
	{
		MessageBox(NULL, L"Размер символьных буферов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4468:
	{
		MessageBox(NULL, L"Полное имя компьютера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4469:
	{
		MessageBox(NULL, L"DNS-имя домена рабочей станции", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4470:
	{
		MessageBox(NULL, L"Windows 2002", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4481:
	{
		MessageBox(NULL, L"Имя сервера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4482:
	{
		MessageBox(NULL, L"Комментарий для сервера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4483:
	{
		MessageBox(NULL, L"Отправка административных оповещений", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4484:
	{
		MessageBox(NULL, L"Версия программы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4485:
	{
		MessageBox(NULL, L"Сервер одноранговой сети", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4486:
	{
		MessageBox(NULL, L"Windows NT", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4487:
	{
		MessageBox(NULL, L"Уровень сервера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4488:
	{
		MessageBox(NULL, L"Windows NT для сервера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4489:
	{
		MessageBox(NULL, L"Активный сервер на", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4492:
	{
		MessageBox(NULL, L"Скрытый сервер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4500:
	{
		MessageBox(NULL, L"Хранилище единственных копий на этом томе недоступно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4506:
	{
		MessageBox(NULL, L"Максимальное число пользователей", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4507:
	{
		MessageBox(NULL, L"Максимальное число работающих администраторов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4508:
	{
		MessageBox(NULL, L"Максимальное число общих ресурсов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4509:
	{
		MessageBox(NULL, L"Максимальное число подключений к ресурсам", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4510:
	{
		MessageBox(NULL, L"Максимальное число открытых файлов на сервере", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4511:
	{
		MessageBox(NULL, L"Максимальное число открытых файлов в сеансе", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4512:
	{
		MessageBox(NULL, L"Максимальное число блокировок файлов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4520:
	{
		MessageBox(NULL, L"Время холостого хода сеанса (мин)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4526:
	{
		MessageBox(NULL, L"Общий уровень", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4527:
	{
		MessageBox(NULL, L"Уровень пользователя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4530:
	{
		MessageBox(NULL, L"Неограниченный сервер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4570:
	{
		MessageBox(NULL, L"Принудительный выход по истечении времени через:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4571:
	{
		MessageBox(NULL, L"Блокировка учетной записи после ввода ошибочных паролей:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4572:
	{
		MessageBox(NULL, L"Минимальный срок действия пароля (дней):", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4573:
	{
		MessageBox(NULL, L"Максимальный срок действия пароля (дней):", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4574:
	{
		MessageBox(NULL, L"Минимальная длина пароля:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4575:
	{
		MessageBox(NULL, L"Хранение неповторяющихся паролей:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4576:
	{
		MessageBox(NULL, L"Роль компьютера:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4577:
	{
		MessageBox(NULL, L"Основной контроллер для домена рабочей станции:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4578:
	{
		MessageBox(NULL, L"Блокировка после ошибок ввода пароля:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4579:
	{
		MessageBox(NULL, L"Длительность блокировки (минут):", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4580:
	{
		MessageBox(NULL, L"Сброс счетчика блокировок через (минут):", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4600:
	{
		MessageBox(NULL, L"Статистика после", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4601:
	{
		MessageBox(NULL, L"Принятые сеансы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4602:
	{
		MessageBox(NULL, L"Сеансы с истекшим интервалом", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4603:
	{
		MessageBox(NULL, L"Сеансы с ошибками", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4604:
	{
		MessageBox(NULL, L"Послано КБ", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4605:
	{
		MessageBox(NULL, L"Принято КБ", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4606:
	{
		MessageBox(NULL, L"Среднее время отклика (мс)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4607:
	{
		MessageBox(NULL, L"Ошибки сети", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4608:
	{
		MessageBox(NULL, L"Доступ к файлам", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4609:
	{
		MessageBox(NULL, L"Задания печати в очереди", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4610:
	{
		MessageBox(NULL, L"Системные ошибки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4611:
	{
		MessageBox(NULL, L"Нарушение паролей", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4612:
	{
		MessageBox(NULL, L"Нарушение разрешений", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4613:
	{
		MessageBox(NULL, L"Доступ к устройствам связи", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4614:
	{
		MessageBox(NULL, L"Запущенные сеансы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4615:
	{
		MessageBox(NULL, L"Переключенные сеансы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4616:
	{
		MessageBox(NULL, L"Сбои при запуске сеансов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4617:
	{
		MessageBox(NULL, L"Отключенные сеансы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4618:
	{
		MessageBox(NULL, L"Сетевые операции ввода/вывода", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4619:
	{
		MessageBox(NULL, L"Доступ к файлам и каналам", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4620:
	{
		MessageBox(NULL, L"Исчерпанные буферы времени", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4621:
	{
		MessageBox(NULL, L"Большие буферы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4622:
	{
		MessageBox(NULL, L"Затребованные буферы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4623:
	{
		MessageBox(NULL, L"Статистика рабочей станции для \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4624:
	{
		MessageBox(NULL, L"Статистика сервера для \\%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4625:
	{
		MessageBox(NULL, L"Статистика после %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4626:
	{
		MessageBox(NULL, L"Выполненные подключения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4627:
	{
		MessageBox(NULL, L"Неудачные подключения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4630:
	{
		MessageBox(NULL, L"Получено байт", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4631:
	{
		MessageBox(NULL, L"Принятые блоки сообщений сервера SMB", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4632:
	{
		MessageBox(NULL, L"Передано байт", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4633:
	{
		MessageBox(NULL, L"Переданные блоки сообщений сервера SMB", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4634:
	{
		MessageBox(NULL, L"Операции чтения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4635:
	{
		MessageBox(NULL, L"Операции записи", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4636:
	{
		MessageBox(NULL, L"Отказано в чтении", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4637:
	{
		MessageBox(NULL, L"Отказано в записи", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4638:
	{
		MessageBox(NULL, L"Ошибки сети", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4639:
	{
		MessageBox(NULL, L"Выполненные подключения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4640:
	{
		MessageBox(NULL, L"Повторные подключения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4641:
	{
		MessageBox(NULL, L"Отключений от сервера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4642:
	{
		MessageBox(NULL, L"Запущенные сеансы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4643:
	{
		MessageBox(NULL, L"Зависание сеансов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4644:
	{
		MessageBox(NULL, L"Сбои в сеансах", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4645:
	{
		MessageBox(NULL, L"Сбои в операциях", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4646:
	{
		MessageBox(NULL, L"Счетчик использования", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4647:
	{
		MessageBox(NULL, L"Счетчик сбоев при использовании", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4650:
	{
		MessageBox(NULL, L"%1 успешно удален.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4651:
	{
		MessageBox(NULL, L"%1 успешно использован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4652:
	{
		MessageBox(NULL, L"Сообщение успешно отправлено %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4653:
	{
		MessageBox(NULL, L"Имя сообщения %1 успешно направлено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4654:
	{
		MessageBox(NULL, L"Имя сообщения %1 успешно добавлено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4655:
	{
		MessageBox(NULL, L"Направление имени сообщения успешно отменено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4656:
	{
		MessageBox(NULL, L"%1 успешно назначен общим.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4657:
	{
		MessageBox(NULL, L"Вход на сервер %1 под именем %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4658:
	{
		MessageBox(NULL, L"Для %1 успешно выполнен выход.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4659:
	{
		MessageBox(NULL, L"%1 успешно удален из списка общих ресурсов, создаваемых серверомпри запуске.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4661:
	{
		MessageBox(NULL, L"Пароль успешно изменен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4662:
	{
		MessageBox(NULL, L"Скопировано файлов: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4663:
	{
		MessageBox(NULL, L"Перемещено файлов: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4664:
	{
		MessageBox(NULL, L"Сообщение успешно отослано всем пользователям в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4665:
	{
		MessageBox(NULL, L"Сообщение успешно отослано в домен %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4666:
	{
		MessageBox(NULL, L"Сообщение успешно отослано всем пользователям данного сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4667:
	{
		MessageBox(NULL, L"Сообщение успешно отослано группе*%1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4695:
	{
		MessageBox(NULL, L"Microsoft LAN Manager, версия %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4696:
	{
		MessageBox(NULL, L"Windows NT Server", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4697:
	{
		MessageBox(NULL, L"Windows NT Workstation", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4698:
	{
		MessageBox(NULL, L"Рабочая станция MS-DOS", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4699:
	{
		MessageBox(NULL, L"Создан в %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4700:
	{
		MessageBox(NULL, L"Имя сервера Заметки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4702:
	{
		MessageBox(NULL, L"(UNC)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4703:
	{
		MessageBox(NULL, L"…", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4704:
	{
		MessageBox(NULL, L"Домен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4705:
	{
		MessageBox(NULL, L"Ресурсы на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4706:
	{
		MessageBox(NULL, L"Неправильный поставщик сетевых услуг. Доступные сети:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4710:
	{
		MessageBox(NULL, L"Диск", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4711:
	{
		MessageBox(NULL, L"Печать", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4712:
	{
		MessageBox(NULL, L"Порт", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4713:
	{
		MessageBox(NULL, L"IPC", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4714:
	{
		MessageBox(NULL, L"Состояние Локальный Удаленный Сеть", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4715:
	{
		MessageBox(NULL, L"OK", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4716:
	{
		MessageBox(NULL, L"Ожидание", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4717:
	{
		MessageBox(NULL, L"Пауза", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4718:
	{
		MessageBox(NULL, L"Отсоединен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4719:
	{
		MessageBox(NULL, L"Ошибка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4720:
	{
		MessageBox(NULL, L"Подключение", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4721:
	{
		MessageBox(NULL, L"Переподключение", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4722:
	{
		MessageBox(NULL, L"Состояние", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4723:
	{
		MessageBox(NULL, L"Локальное имя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4724:
	{
		MessageBox(NULL, L"Удаленное имя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4725:
	{
		MessageBox(NULL, L"Тип ресурса", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4726:
	{
		MessageBox(NULL, L"Открыто", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4727:
	{
		MessageBox(NULL, L"Подключено", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4728:
	{
		MessageBox(NULL, L"Нет доступа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4730:
	{
		MessageBox(NULL, L"Общее имя Ресурс Заметки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4731:
	{
		MessageBox(NULL, L"Имя общего ресурса", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4732:
	{
		MessageBox(NULL, L"Ресурс", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4733:
	{
		MessageBox(NULL, L"Очередь", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4734:
	{
		MessageBox(NULL, L"Разрешение", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4735:
	{
		MessageBox(NULL, L"Макс. число пользователей", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4736:
	{
		MessageBox(NULL, L"Не ограничен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4737:
	{
		MessageBox(NULL, L"Пользователи", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4738:
	{
		MessageBox(NULL, L"Введенное сетевое имя может оказаться недоступным для некоторых рабочих станций MS-DOS.Использовать данное сетевое имя? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4739:
	{
		MessageBox(NULL, L"Кэширование", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4740:
	{
		MessageBox(NULL, L"Код Путь Пользователь # блокировок", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4741:
	{
		MessageBox(NULL, L"Идентификатор файла", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4742:
	{
		MessageBox(NULL, L"Блокировки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4743:
	{
		MessageBox(NULL, L"Разрешения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4744:
	{
		MessageBox(NULL, L"Имя общего ресурса", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4745:
	{
		MessageBox(NULL, L"Тип", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4746:
	{
		MessageBox(NULL, L"Используется как", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4747:
	{
		MessageBox(NULL, L"Комментарий", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4750:
	{
		MessageBox(NULL, L"Компьютер Пользователь Тип клиента Ожидание открытия", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4751:
	{
		MessageBox(NULL, L"Компьютер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4752:
	{
		MessageBox(NULL, L"Время сеанса", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4753:
	{
		MessageBox(NULL, L"Время простоя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4754:
	{
		MessageBox(NULL, L"Сетевое имя Тип Открыто", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4755:
	{
		MessageBox(NULL, L"Тип клиента", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4756:
	{
		MessageBox(NULL, L"Вход гостя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4770:
	{
		MessageBox(NULL, L"Документы кэшируются вручную", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4771:
	{
		MessageBox(NULL, L"Документы кэшируются автоматически", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4772:
	{
		MessageBox(NULL, L"Программы и документы кэшируются автоматически", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4773:
	{
		MessageBox(NULL, L"Кэширование отключено", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4774:
	{
		MessageBox(NULL, L"Автоматически", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4775:
	{
		MessageBox(NULL, L"Вручную", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4776:
	{
		MessageBox(NULL, L"Документы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4777:
	{
		MessageBox(NULL, L"Программы", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4778:
	{
		MessageBox(NULL, L"Отсутствует", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4800:
	{
		MessageBox(NULL, L"Имя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4801:
	{
		MessageBox(NULL, L"Направлен на", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4802:
	{
		MessageBox(NULL, L"Направлен вам от", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4803:
	{
		MessageBox(NULL, L"Пользователи данного сервера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4804:
	{
		MessageBox(NULL, L"Операция Net Send прервана нажатием клавиш Ctrl+Break пользователем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4810:
	{
		MessageBox(NULL, L"Имя Задание # Размер Состояние", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4811:
	{
		MessageBox(NULL, L"задания", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4812:
	{
		MessageBox(NULL, L"Печать", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4813:
	{
		MessageBox(NULL, L"Имя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4814:
	{
		MessageBox(NULL, L"Задание №", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4815:
	{
		MessageBox(NULL, L"Размер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4816:
	{
		MessageBox(NULL, L"Состояние", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4817:
	{
		MessageBox(NULL, L"Файл разделителя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4818:
	{
		MessageBox(NULL, L"Комментарий", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4819:
	{
		MessageBox(NULL, L"Приоритет", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4820:
	{
		MessageBox(NULL, L"Печать после", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4821:
	{
		MessageBox(NULL, L"Печать до", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4822:
	{
		MessageBox(NULL, L"Обработчик заданий печати", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4823:
	{
		MessageBox(NULL, L"Дополнительные сведения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4824:
	{
		MessageBox(NULL, L"Параметры", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4825:
	{
		MessageBox(NULL, L"Устройства печати", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4826:
	{
		MessageBox(NULL, L"Активный принтер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4827:
	{
		MessageBox(NULL, L"Задержанный принтер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4828:
	{
		MessageBox(NULL, L"Ошибка принтера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4829:
	{
		MessageBox(NULL, L"Принтер был удален", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4830:
	{
		MessageBox(NULL, L"Состояние принтера неизвестно", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4840:
	{
		MessageBox(NULL, L"Задержан до %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4841:
	{
		MessageBox(NULL, L"Задание №", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4842:
	{
		MessageBox(NULL, L"Получено от пользователя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4843:
	{
		MessageBox(NULL, L"Уведомить", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4844:
	{
		MessageBox(NULL, L"Тип данных задания", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4845:
	{
		MessageBox(NULL, L"Параметры задания", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4846:
	{
		MessageBox(NULL, L"Ожидание", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4847:
	{
		MessageBox(NULL, L"Содержится в очереди", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4848:
	{
		MessageBox(NULL, L"Постановка в очередь", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4849:
	{
		MessageBox(NULL, L"Пауза", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4850:
	{
		MessageBox(NULL, L"Отключение", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4851:
	{
		MessageBox(NULL, L"Ошибка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4852:
	{
		MessageBox(NULL, L"Нет бумаги", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4853:
	{
		MessageBox(NULL, L"Требуется вмешательство", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4854:
	{
		MessageBox(NULL, L"Идет печать", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4855:
	{
		MessageBox(NULL, L"на", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4856:
	{
		MessageBox(NULL, L"Пауза на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4857:
	{
		MessageBox(NULL, L"Отключение на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4858:
	{
		MessageBox(NULL, L"Ошибка на%1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4859:
	{
		MessageBox(NULL, L"Нет бумаги на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4860:
	{
		MessageBox(NULL, L"Проверка принтера на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4861:
	{
		MessageBox(NULL, L"Печатается на %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4862:
	{
		MessageBox(NULL, L"Драйвер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4930:
	{
		MessageBox(NULL, L"Пользователь Тип Дата", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4931:
	{
		MessageBox(NULL, L"Взаимоблокировка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4932:
	{
		MessageBox(NULL, L"Служба", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4933:
	{
		MessageBox(NULL, L"Сервер", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4934:
	{
		MessageBox(NULL, L"Сервер запущен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4935:
	{
		MessageBox(NULL, L"Пауза на сервере", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4936:
	{
		MessageBox(NULL, L"Продолжение работы сервера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4937:
	{
		MessageBox(NULL, L"Сервер остановлен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4938:
	{
		MessageBox(NULL, L"Сеанс", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4939:
	{
		MessageBox(NULL, L"Вход гостя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4940:
	{
		MessageBox(NULL, L"Вход пользователя", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4941:
	{
		MessageBox(NULL, L"Вход администратора", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4942:
	{
		MessageBox(NULL, L"Обычный выход", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4943:
	{
		MessageBox(NULL, L"Вход", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4944:
	{
		MessageBox(NULL, L"Ошибка при выходе", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4945:
	{
		MessageBox(NULL, L"Автоотключение при выходе", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4946:
	{
		MessageBox(NULL, L"Отключение администратором при выходе", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4947:
	{
		MessageBox(NULL, L"Выход из-за ограничений на число входов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4948:
	{
		MessageBox(NULL, L"Служба", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4949:
	{
		MessageBox(NULL, L"%1 установлена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4950:
	{
		MessageBox(NULL, L"%1: ожидается установка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4951:
	{
		MessageBox(NULL, L"%1 приостановлена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4952:
	{
		MessageBox(NULL, L"%1: ожидается приостановка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4953:
	{
		MessageBox(NULL, L"%1 продолжается", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4954:
	{
		MessageBox(NULL, L"%1 ожидает продолжения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4955:
	{
		MessageBox(NULL, L"%1 остановлена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4956:
	{
		MessageBox(NULL, L"%1 ожидает остановки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4957:
	{
		MessageBox(NULL, L"Учетная запись", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4958:
	{
		MessageBox(NULL, L"Учетная запись пользователя %1 была изменена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4959:
	{
		MessageBox(NULL, L"Учетная запись группы %1 была изменена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4960:
	{
		MessageBox(NULL, L"Учетная запись пользователя %1 была удалена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4961:
	{
		MessageBox(NULL, L"Учетная запись группы %1 была удалена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4962:
	{
		MessageBox(NULL, L"Учетная запись пользователя %1 была добавлена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4963:
	{
		MessageBox(NULL, L"Учетная запись группы %1 была добавлена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4964:
	{
		MessageBox(NULL, L"Системные параметры записи были изменены", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4965:
	{
		MessageBox(NULL, L"Ограничения на вход", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4966:
	{
		MessageBox(NULL, L"Превышен предел: НЕИЗВЕСТНЫЙ", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4967:
	{
		MessageBox(NULL, L"Превышен предел: Часы входа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4968:
	{
		MessageBox(NULL, L"Превышен предел: Учетная запись просрочена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4969:
	{
		MessageBox(NULL, L"Превышен предел: Неправильный код рабочей станции", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4970:
	{
		MessageBox(NULL, L"Превышен предел: Учетная запись отключена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4971:
	{
		MessageBox(NULL, L"Превышен предел: Учетная запись удалена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4972:
	{
		MessageBox(NULL, L"Общий ресурс", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4973:
	{
		MessageBox(NULL, L"Используется %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4974:
	{
		MessageBox(NULL, L"Не используется %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4975:
	{
		MessageBox(NULL, L"Отключение сеансов пользователя %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4976:
	{
		MessageBox(NULL, L"Общее использование ресурса %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4977:
	{
		MessageBox(NULL, L"Пользователем достигнут предел для %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4978:
	{
		MessageBox(NULL, L"Неправильный пароль", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4979:
	{
		MessageBox(NULL, L"Требуется привилегия администратора", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4980:
	{
		MessageBox(NULL, L"Доступ", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4981:
	{
		MessageBox(NULL, L"Добавлено разрешений: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4982:
	{
		MessageBox(NULL, L"Изменено разрешений: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4983:
	{
		MessageBox(NULL, L"Удалено разрешений: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4984:
	{
		MessageBox(NULL, L"Отказано в доступе", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4985:
	{
		MessageBox(NULL, L"Неизвестный", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4986:
	{
		MessageBox(NULL, L"Другой", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4987:
	{
		MessageBox(NULL, L"Длительность:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4988:
	{
		MessageBox(NULL, L"Длительность: нет доступа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4989:
	{
		MessageBox(NULL, L"Длительность: менее одной секунды", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4990:
	{
		MessageBox(NULL, L"(отсутствует)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4991:
	{
		MessageBox(NULL, L"Закрыт %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4992:
	{
		MessageBox(NULL, L"Закрыт %1 (отключен)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4993:
	{
		MessageBox(NULL, L"Администратор закрыл %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4994:
	{
		MessageBox(NULL, L"Доступ закончен", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4995:
	{
		MessageBox(NULL, L"Вход в сеть", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4996:
	{
		MessageBox(NULL, L"Отказано во входе", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4997:
	{
		MessageBox(NULL, L"Программа Сообщение Время", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4998:
	{
		MessageBox(NULL, L"Учетная запись блокирована из-за %1 неправильных паролей", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 4999:
	{
		MessageBox(NULL, L"Учетная запись разблокирована администратором", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5000:
	{
		MessageBox(NULL, L"Выход из сети", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5001:
	{
		MessageBox(NULL, L"Ресурс кластера не может быть перемещен в другую групп, т.к. от него зависят другие ресурсы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5002:
	{
		MessageBox(NULL, L"Не удается найти зависимость ресурса кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5003:
	{
		MessageBox(NULL, L"Ресурс кластера нельзя сделать зависимым от указанного ресурса, т.к. он уже является зависимым.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5004:
	{
		MessageBox(NULL, L"Ресурс кластера находится в автономном режиме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5005:
	{
		MessageBox(NULL, L"Узел кластера недоступен для этой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5006:
	{
		MessageBox(NULL, L"Ресурс кластера недоступен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5007:
	{
		MessageBox(NULL, L"Не удается найти ресурс кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5008:
	{
		MessageBox(NULL, L"Кластер отключен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5009:
	{
		MessageBox(NULL, L"Узел кластера нельзя отделить от кластера, пока узел не будет отключен, или пока этот узел не является последним.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5010:
	{
		MessageBox(NULL, L"Этот объект уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5011:
	{
		MessageBox(NULL, L"Этот объект уже присутствует в списке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5012:
	{
		MessageBox(NULL, L"Группа кластеров недоступна для новых запросов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5013:
	{
		MessageBox(NULL, L"Не удается найти группу кластеров.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5014:
	{
		MessageBox(NULL, L"Невозможно завершить эту операцию, т.к. группа кластеров недоступна по сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5015:
	{
		MessageBox(NULL, L"Узел кластера не является владельцем этого ресурса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5016:
	{
		MessageBox(NULL, L"Узел кластера не является владельцем этой группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5017:
	{
		MessageBox(NULL, L"Ресурс кластера не может быть создан в указанном мониторе ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5018:
	{
		MessageBox(NULL, L"Ресурс кластера не может быть подключен по сети с помощью монитора ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5019:
	{
		MessageBox(NULL, L"Невозможно завершить эту операцию, т.к. ресурс кластера подключен по сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5020:
	{
		MessageBox(NULL, L"Ресурс кластера не может быть удален или переведен в автономный режим, т.к. это ресурс кворума.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5021:
	{
		MessageBox(NULL, L"Кластер не может сделать выбранный ресурс как ресурс кворума, т.к. у нет соответствующих характеристик.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5022:
	{
		MessageBox(NULL, L"Идет завершение работы программного обеспечения кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5023:
	{
		MessageBox(NULL, L"Группа или ресурс не находятся в нужном состоянии для выполнения требуемой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5024:
	{
		MessageBox(NULL, L"Свойства были сохранены, но не все изменения смогут вступить в силу до тех пор, пока ресурс окажется в сети следующий раз.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5025:
	{
		MessageBox(NULL, L"Кластер не может сделать существующий ресурс ресурсом кворума, т.к. это он не соответствует классу общего хранилища.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5026:
	{
		MessageBox(NULL, L"Ресурс кластера не может быть удален, т.к. является ресурсом ядра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5027:
	{
		MessageBox(NULL, L"Не удалось подключить к сети ресурс кворума.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5028:
	{
		MessageBox(NULL, L"Не удается создать или подключить журнал кворума.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5029:
	{
		MessageBox(NULL, L"Журнал кворума поврежден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5030:
	{
		MessageBox(NULL, L"Эту запись сделать в журнале нельзя, т.к. превышен максимальный размер записи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5031:
	{
		MessageBox(NULL, L"Размер журнал превысил максимально допустимое значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5032:
	{
		MessageBox(NULL, L"В журнале кластера не найдено записи контрольной точки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5033:
	{
		MessageBox(NULL, L"На диске отсутствует даже минимально необходимое место для размещения журнала.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5034:
	{
		MessageBox(NULL, L"Узел кластера не смог взять управление над ресурсом кворума, т.к. этот ресурс принадлежит другому активному узлу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5035:
	{
		MessageBox(NULL, L"Сеть кластеров недоступна для этой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5036:
	{
		MessageBox(NULL, L"Узел кластера недоступен для этой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5037:
	{
		MessageBox(NULL, L"Узлы кластеров должны быть во включенном состоянии для выполнения этой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5038:
	{
		MessageBox(NULL, L"Ошибка ресурса кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5039:
	{
		MessageBox(NULL, L"Недопустимый ресурс кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5040:
	{
		MessageBox(NULL, L"Узел кластера уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5041:
	{
		MessageBox(NULL, L"Идет процесс присоединения узла к кластеру.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5042:
	{
		MessageBox(NULL, L"Узел кластера не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5043:
	{
		MessageBox(NULL, L"Информация о локальном узле кластера не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5044:
	{
		MessageBox(NULL, L"Сеть кластеров уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5045:
	{
		MessageBox(NULL, L"Сеть кластеров не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5046:
	{
		MessageBox(NULL, L"Интерфейс сети кластеров уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5047:
	{
		MessageBox(NULL, L"Интерфейс сети кластеров не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5048:
	{
		MessageBox(NULL, L"Недопустимый запрос от кластера к этому объекту.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5049:
	{
		MessageBox(NULL, L"Недопустимый поставщик сетевого кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5050:
	{
		MessageBox(NULL, L"Узел кластера отключен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5051:
	{
		MessageBox(NULL, L"Нет доступа к узлу кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5052:
	{
		MessageBox(NULL, L"Этот узел кластера не входит в состав кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5053:
	{
		MessageBox(NULL, L"Операция присоединения к кластеру не запущена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5054:
	{
		MessageBox(NULL, L"Недопустимая сеть кластеров.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5055:
	{
		MessageBox(NULL, L"Мар", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5056:
	{
		MessageBox(NULL, L"Узел кластера включен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5057:
	{
		MessageBox(NULL, L"IP-адрес кластера уже используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5058:
	{
		MessageBox(NULL, L"Узел кластера не приостановлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5059:
	{
		MessageBox(NULL, L"Контекст безопасности кластера недоступен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5060:
	{
		MessageBox(NULL, L"Сеть кластеров не настроена для передачи данных внутри кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5061:
	{
		MessageBox(NULL, L"Узел кластера уже включен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5062:
	{
		MessageBox(NULL, L"Узел кластера уже отключен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5063:
	{
		MessageBox(NULL, L"Сеть кластеров уже подключена по сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5064:
	{
		MessageBox(NULL, L"Сеть кластеров уже находится в автономном режиме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5065:
	{
		MessageBox(NULL, L"Этот узел кластера уже является членом кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5066:
	{
		MessageBox(NULL, L"Только сеть кластеров настроена для взаимодействия между двумя или более активными узлами кластеров. Возможность внутренней связи между узлами не может быть удалена (из сети).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5067:
	{
		MessageBox(NULL, L"Один или несколько ресурсов кластера используют сеть для работы клиентских служб. Нельзя удалить функцию доступа клиентов по сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5068:
	{
		MessageBox(NULL, L"Данная операция не может быть выполнена на ресурсе кластера, т.к. это ресурс кворума. Нельзя переключить ресурс кворума в автономный режим или изменить его список возможных владельцев.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5069:
	{
		MessageBox(NULL, L"Ресурс кворума кластера не может иметь никаких зависимых отношений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5070:
	{
		MessageBox(NULL, L"Узел кластера приостановлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5071:
	{
		MessageBox(NULL, L"Не удалось подключить ресурс кластера по сети. Узел владельца не может запустить этот ресурс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5072:
	{
		MessageBox(NULL, L"Узел кластера не готов для выполнения запрошенной операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5073:
	{
		MessageBox(NULL, L"Идет отключение узла кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5074:
	{
		MessageBox(NULL, L"Операция присоединения к кластеру была прервана.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5075:
	{
		MessageBox(NULL, L"Сбой операции присоединения к кластеру вследствие несовместимости версий программ между присоединяемым узлом и его спонсором.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5076:
	{
		MessageBox(NULL, L"Невозможно создать ресурс, т.к. для кластера достигнут предел числа контролируемых ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5077:
	{
		MessageBox(NULL, L"Конфигурация системы изменилась в течение операции формирования или присоединения к домену. Операция формирования или присоединения прервана.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5078:
	{
		MessageBox(NULL, L"Указанный тип ресурса не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5079:
	{
		MessageBox(NULL, L"Указанный узел не поддерживает ресурс такого типа. Это может быть вследствие несовпадения версий или отсутствия библиотеки ресурсов (DLL) на этом узле.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5080:
	{
		MessageBox(NULL, L"Указанное имя ресурса не поддерживается этой библиотекой ресурсов (DLL). Это м.б. вследствие неверного (или поврежденного) имени, полученного библиотекой ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5081:
	{
		MessageBox(NULL, L"Для RPC-сервера нельзя зарегистрировать пакеты проверки подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5082:
	{
		MessageBox(NULL, L"Эту группу нельзя подключить по сети, т.к. владелец группы не находится в списке предпочтений группы. Чтобы изменить узел владельца для группы, переместите группу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5083:
	{
		MessageBox(NULL, L"Сбой операции присоединения вследствие того, что номер последовательности базы данных кластера изменился или несовместим с узлом блокиратора.Это могло случиться в течение операции присоединения, если база данных кластера была изменена в тот момент.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5084:
	{
		MessageBox(NULL, L"Монитор ресурсов не позволит выполнить ошибочную операци, пока ресурс находится в своем текущем состоянии. Это может случиться, если ресурс находится в состоянии ожидания.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5085:
	{
		MessageBox(NULL, L"Код, не принадлежащий блокиратору, получил запрос на резервирование блока для проведения общего обновления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5086:
	{
		MessageBox(NULL, L"Служба кластера не может найти диск кворума.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5087:
	{
		MessageBox(NULL, L"Возможно, резервная копия базы данных кластера повреждена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5088:
	{
		MessageBox(NULL, L"Корень DFS уже существует в этом узле кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5089:
	{
		MessageBox(NULL, L"Не удалась попытка изменить свойство ресурса, т.к. имеется конфликт с другим существующим свойством.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5090:
	{
		MessageBox(NULL, L"Испания", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5091:
	{
		MessageBox(NULL, L"Дания", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5092:
	{
		MessageBox(NULL, L"Швеция", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5093:
	{
		MessageBox(NULL, L"Норвегия", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5094:
	{
		MessageBox(NULL, L"Германия", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5095:
	{
		MessageBox(NULL, L"Австралия", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5096:
	{
		MessageBox(NULL, L"Япония", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5097:
	{
		MessageBox(NULL, L"Корея", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5098:
	{
		MessageBox(NULL, L"Китай (КНР)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5099:
	{
		MessageBox(NULL, L"Тайвань", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5100:
	{
		MessageBox(NULL, L"Азия", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5101:
	{
		MessageBox(NULL, L"Португалия", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5102:
	{
		MessageBox(NULL, L"Финляндия", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5103:
	{
		MessageBox(NULL, L"Арабский", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5104:
	{
		MessageBox(NULL, L"Иврит", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5150:
	{
		MessageBox(NULL, L"Сбой питания на %1. Прекратите все действия с этим сервером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5151:
	{
		MessageBox(NULL, L"Питание восстановлено на %1. Возобновлены нормальные операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5152:
	{
		MessageBox(NULL, L"Служба UPS начинает отключение %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5153:
	{
		MessageBox(NULL, L"Служба UPS приступает к окончательному отключению.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5170:
	{
		MessageBox(NULL, L"Для запуска рабочей станции необходима команда NET START.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5175:
	{
		MessageBox(NULL, L"Удаленный IPC", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5176:
	{
		MessageBox(NULL, L"Удаленный Admin", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5177:
	{
		MessageBox(NULL, L"Стандартный общий ресурс", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5280:
	{
		MessageBox(NULL, L"Введенный пароль длиннее 14 символов. Компьютеры с версиейWindows, предшествующей Windows 2000, не смогут использовать эту учетную запись. Продолжить эту операцию? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5281:
	{
		MessageBox(NULL, L"%1 имеет запоминаемое подключение к %2.Переписать запоминаемое подключение? %3:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5282:
	{
		MessageBox(NULL, L"Возобновить загрузку конфигурации? Команда, вызвавшая ошибку,будет игнорироваться. %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5284:
	{
		MessageBox(NULL, L"Продолжить операцию? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5285:
	{
		MessageBox(NULL, L"Добавить следующее? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5286:
	{
		MessageBox(NULL, L"Продолжить операцию? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5287:
	{
		MessageBox(NULL, L"Запустить? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5288:
	{
		MessageBox(NULL, L"Запустить службу рабочей станции? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5289:
	{
		MessageBox(NULL, L"Продолжить отключение и закрыть? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5290:
	{
		MessageBox(NULL, L"Принтер не существует. Создать? %1:", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5291:
	{
		MessageBox(NULL, L"Никогда", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5292:
	{
		MessageBox(NULL, L"Никогда", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5293:
	{
		MessageBox(NULL, L"Никогда", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5295:
	{
		MessageBox(NULL, L"NET.HLP", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5296:
	{
		MessageBox(NULL, L"NET.HLP", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5300:
	{
		MessageBox(NULL, L"Запрос сетевого управляющего блока (NCB) успешно завершен.Данные содержат NCB.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5301:
	{
		MessageBox(NULL, L"Недопустимый размер буфера сетевого управляющего блока (NCB) на SEND DATAGRAM,SEND BROADCAST, ADAPTER STATUS или SESSION STATUS.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5302:
	{
		MessageBox(NULL, L"В сетевом управляющем блоке (NCB) указан недопустимый массив дескрипторовданных. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5303:
	{
		MessageBox(NULL, L"В сетевом управляющем блоке (NCB) указана недопустимая команда.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5304:
	{
		MessageBox(NULL, L"В сетевом управляющем блоке (NCB) указан недопустимый корреляторсообщений. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5305:
	{
		MessageBox(NULL, L"Истек интервал ожидания команды сетевого управляющего блока (NCB). Возможноаномальное завершение сеанса. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5306:
	{
		MessageBox(NULL, L"Получено неполное сообщение сетевого управляющего блока (NCB).NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5307:
	{
		MessageBox(NULL, L"В сетевом управляющем блоке (NCB) указан недопустимый адрес буфера.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5308:
	{
		MessageBox(NULL, L"Сеанс с номером, указанным в сетевом управляющем блоке (NCB), не активен.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5309:
	{
		MessageBox(NULL, L"Нет ресурса, доступного для сетевой платы.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5310:
	{
		MessageBox(NULL, L"Сеанс, указанный в сетевом управляющем блоке (NCB), был закрыт.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5311:
	{
		MessageBox(NULL, L"Команда сетевого управляющего блока (NCB) была отменена.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5312:
	{
		MessageBox(NULL, L"Сегмент сообщения, указанный в сетевом управляющем блоке (NCB),не имеет смысла. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5313:
	{
		MessageBox(NULL, L"Имя уже существует в локальной таблице имен адаптеров.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5314:
	{
		MessageBox(NULL, L"Таблиц имен сетевых адаптеров заполнена.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5315:
	{
		MessageBox(NULL, L"Для сетевого имени имеются активные сеансы. Выполняется отключение.Выполнение команды сетевого управляющего блока (NCB) завершено. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5316:
	{
		MessageBox(NULL, L"Ранее полученная команда Receive Lookahead активнав данном сеансе. Команде сетевого управляющего блока (NCB) отказано в выполнении.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5317:
	{
		MessageBox(NULL, L"Таблица локальных сеансов заполнена. Отказ на запрос сетевого управляющего блока (NCB).NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5318:
	{
		MessageBox(NULL, L"Отказ в открытии сеанса сетевого управляющего блока (NCB). Нет команд LISTENна удаленном компьютере. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5319:
	{
		MessageBox(NULL, L"В сетевом управляющем блоке (NCB) указан недопустимый номер имени.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5320:
	{
		MessageBox(NULL, L"Вызываемое имя, указанное в сетевом управляющем блоке (NCB), не найденоили не отвечает. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5321:
	{
		MessageBox(NULL, L"Имя, указанное в сетевом управляющем блоке (NCB), не найдено. Нельзя включать ‘*\' или00h в имя в NCB. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5322:
	{
		MessageBox(NULL, L"Имя, указанное в сетевом управляющем блоке (NCB), используется удаленным адаптером.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5323:
	{
		MessageBox(NULL, L"Имя, указанное в сетевом управляющем блоке (NCB), было удалено.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5324:
	{
		MessageBox(NULL, L"Аномальное завершение сеанса, указанного в сетевом управляющем блоке (NCB).NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5325:
	{
		MessageBox(NULL, L"Сетевой протокол удалил два или несколько одинаковыхимен в сети.	Сетевой управляющий блок (NCB) представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5326:
	{
		MessageBox(NULL, L"Принят неправильный пакет протокола. Возможно, существуетнесовместимое удаленное устройство. Сетевой управляющий блок (NCB) представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5333:
	{
		MessageBox(NULL, L"Интерфейс NetBIOS занят.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5334:
	{
		MessageBox(NULL, L"Слишком много ожидающих команд в сетевом управляющем блоке (NCB).Отказ на запрос (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5335:
	{
		MessageBox(NULL, L"В сетевом управляющем блоке (NCB) указан неправильный номер платы.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5336:
	{
		MessageBox(NULL, L"Команда сетевого управляющего блока (NCB) была завершена в момент команды отмены.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5337:
	{
		MessageBox(NULL, L"Имя, указанное в сетевом управляющем блоке (NCB), зарезервировано.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5338:
	{
		MessageBox(NULL, L"Команда сетевого управляющего блока (NCB) не допускает отмены.NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5351:
	{
		MessageBox(NULL, L"Имеется несколько запросов сетевых управляющих блоков (NCB) на один сеанс.Отказ на запрос NCB. NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5352:
	{
		MessageBox(NULL, L"Ошибка сетевой платы. Единственной допустимой командой NetBIOSявляется команда NCB RESET. Сетевой управляющий блок (NCB) представляетданные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5354:
	{
		MessageBox(NULL, L"Превышено максимальное число приложений.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5356:
	{
		MessageBox(NULL, L"Затребованные ресурсы недоступны.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5364:
	{
		MessageBox(NULL, L"Системная ошибка.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5365:
	{
		MessageBox(NULL, L"Сбой контрольной суммы ROM.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5366:
	{
		MessageBox(NULL, L"Сбой при проверке RAM.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5367:
	{
		MessageBox(NULL, L"Ошибка цифрового сигнала замыкания на себя.Отказ на запрос сетевого управляющего блока (NCB). NCB представлен в данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5368:
	{
		MessageBox(NULL, L"Ошибка аналогового сигнала замыкания на себя.Отказ на запрос сетевого управляющего блока (NCB). NCB представлен в данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5369:
	{
		MessageBox(NULL, L"Сбой интерфейса.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5370:
	{
		MessageBox(NULL, L"Возвращен нераспознаваемый код сетевого управляющего блока (NCB).NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5380:
	{
		MessageBox(NULL, L"Неисправность сетевой платы.Отказ на запрос сетевого управляющего блока (NCB). NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5381:
	{
		MessageBox(NULL, L"Ожидается команда сетевого управляющего блока (NCB).NCB представляет данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5500:
	{
		MessageBox(NULL, L"Журнал обновлений на %1 заполнен более чем на 80%%. Основнойконтроллер домена %2 прекратил загрузку обновлений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5501:
	{
		MessageBox(NULL, L"Журнал обновлений на %1 заполнен. Добавление обновленийневозможно, пока основной контроллер домена %2загружает обновления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5502:
	{
		MessageBox(NULL, L"Разница во времени с основным контроллером домена %1превышает максимальный сдвиг в %2 с.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5503:
	{
		MessageBox(NULL, L"Учетная запись пользователя %1 заблокирована на %2из-за %3 попыток с неправильным паролем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5504:
	{
		MessageBox(NULL, L"Не удалось открыть файл журнала %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5505:
	{
		MessageBox(NULL, L"Файл журнала %1 поврежден и будет очищен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5506:
	{
		MessageBox(NULL, L"Не удается открыть файл журнала приложений. «%1» будет использоваться как файл журнала по умолчанию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5507:
	{
		MessageBox(NULL, L"Журнал %1 заполнен. Если это сообщение появляется в первый раз, выполнитеследующие действия:Пуск, Настройка, Панель управления, Администрирование, Просмотр событийВыберите журнал %1, в меню «Действие» выберите «Стереть все события»,и откажитесь от сохранения.Если сообщение продолжает появляться, обратитесь к системному администратору.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5508:
	{
		MessageBox(NULL, L"Сервер %1 начал полную синхронизацию базы данных защиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5509:
	{
		MessageBox(NULL, L"Невозможно запустить Windows 2000 в текущей конфигурации.Использована предыдущая рабочая конфигурация.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5510:
	{
		MessageBox(NULL, L"Ошибка 0x%1 в приложении %2 в позиции 0x%3.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5511:
	{
		MessageBox(NULL, L"Серверы %1 и %3 одновременно претендуют на роль контроллера домена NTдля домена %2. Необходимо удалить из домена один из серверов,поскольку эти серверы имеют разные идентификаторы системы защиты(SID).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5512:
	{
		MessageBox(NULL, L"Серверы %1 и %2 одновременно претендуют на рольосновного контроллера домена %3. Роль одного из серверов должна бытьпонижена или он должен быть удален из домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5513:
	{
		MessageBox(NULL, L"Компьютер %1 пытается подключиться к серверу %2 с использованиемдоверительных отношений, установленных доменом %3.Однако компьютер потерял правильный идентификатор защиты (SID)при изменении конфигурации домена. Восстановитедоверительные отношения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5514:
	{
		MessageBox(NULL, L"Компьютер перезагружен после отладки. Отладка:%1.%2Полная копия памяти не сохранена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5515:
	{
		MessageBox(NULL, L"Компьютер перезагружен после отладки. Отладка:%1.%2Копия памяти сохранена в: %3.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5516:
	{
		MessageBox(NULL, L"Компьютер или домен %1 доверяет домену %2. (Возможны косвенныедоверительные отношения). Однако %1 и %2 имеют одинаковые идентификаторызащиты (SID). Необходимо переустановить NT на %1 или %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5517:
	{
		MessageBox(NULL, L"Компьютер или домен %1 доверяет домену %2. (Возможны косвенные доверительныеотношения). Однако %2 не является допустимым именем для доверенного домена.Необходимо изменить имя доверенного домена на допустимое.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5600:
	{
		MessageBox(NULL, L"Не удалось сделать общим путь к папкам User или Script.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5601:
	{
		MessageBox(NULL, L"Пароль данного компьютера не найден в локальнойбазе данных зашиты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5602:
	{
		MessageBox(NULL, L"Внутренняя ошибка при доступе к локальнойили сетевой базе данных защиты компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5700:
	{
		MessageBox(NULL, L"Служба Netlogon не может успешно инициализировать структурырепликации данных. Служба остановлена.Ошибка: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5701:
	{
		MessageBox(NULL, L"Служба Netlogon не смогла обновить список доверительных отношений домена.Ошибка: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5702:
	{
		MessageBox(NULL, L"Служба Netlogon не смогла добавить интерфейс RPC.Служба остановлена. Ошибка: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5703:
	{
		MessageBox(NULL, L"Служба Netlogon не может прочитать сообщение в слоте от %1из-за ошибки: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5704:
	{
		MessageBox(NULL, L"Служба Netlogon не может зарегистрировать службув котроллере служб. Служба остановлена.Ошибка: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5705:
	{
		MessageBox(NULL, L"Буфер журнала изменений, поддерживаемый службой Netlogonдля изменений базы данных, поврежден. Служба Netlogonвосстанавливает исходное состояние журнала изменений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5706:
	{
		MessageBox(NULL, L"Служба Netlogon не может создать общий ресурс сервера %1.Ошибка: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5707:
	{
		MessageBox(NULL, L"Сбой в запросе нижнего уровня на вход для пользователя %1 от %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5708:
	{
		MessageBox(NULL, L"Сбой в запросе нижнего уровня на выход для пользователя %1 от %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5709:
	{
		MessageBox(NULL, L"Сбой в запросе на вход в Windows NT или Windows 2000 %1 для пользователя %2\%3 от %4 (через %5).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5710:
	{
		MessageBox(NULL, L"Сбой в запросе на выход из Windows NT или Windows 2000 %1 для пользователя %2\%3 от %4.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5711:
	{
		MessageBox(NULL, L"Запрос на частичную синхронизацию от сервера %1 выполненуспешно. %2 изменений возвращеновызывающему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5712:
	{
		MessageBox(NULL, L"Запрос на частичную синхронизацию от сервера %1 не выполнен.Ошибка: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5713:
	{
		MessageBox(NULL, L"Запрос на полную синхронизацию от сервера %1 выполненуспешно. %2 объект(ов) возвращеновызывающему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5714:
	{
		MessageBox(NULL, L"Запрос на полную синхронизацию от сервера %1 не выполнен.Ошибка: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5715:
	{
		MessageBox(NULL, L"Частичная синхронизация реплицированной базы данных %1 основным контроллером домена %2 выполнена успешно. %3 измененийв базе данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5716:
	{
		MessageBox(NULL, L"Частичная синхронизация реплицированной базы данных %1 основным контроллером домена %2 не выполнена. Ошибка: %3", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5717:
	{
		MessageBox(NULL, L"Полная синхронизация реплицированной базы данных %1 основным контроллером домена %2 выполнена успешно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5718:
	{
		MessageBox(NULL, L"Полная синхронизация реплицированной базы данных %1 основным контроллером домена %2 не выполнена. Ошибка: %3", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5719:
	{
		MessageBox(NULL, L"Для домена %1 нет доступного контроллера домена. Ошибка: %2.Убедитесь в том, что компьютер подключен к сети и повторите попытку.Если ошибка повторяется, обратитесь к сетевому администратору.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5720:
	{
		MessageBox(NULL, L"Установка сеанса к контроллеру домена Windows NT или Windows 2000 %1 для домена %2не выполнена, так как компьютер %3 не имеет учетной записи в локальной базе данных безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5721:
	{
		MessageBox(NULL, L"Установка сеанса к контроллеру домена Windows NT или Windows 2000 %1 для домена %2не выполнена, так как контроллер домена не имеет учетнойзаписи для компьютера %3.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5722:
	{
		MessageBox(NULL, L"При установке сеанса с компьютера %1 не получено подтверждение имен.В базе данных безопасности содержатся ссылки на учетные записи%2. Ошибка: %3", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5723:
	{
		MessageBox(NULL, L"Установка сеанса с компьютера %1 не выполнена, так как для этого компьютерав базе данных защиты нет учетной записи с доверительными отношениями.В базе данных защиты содержится ссылка на учетную запись %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5724:
	{
		MessageBox(NULL, L"Не удалось зарегистрировать обработчик команд для контроллера службы %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5725:
	{
		MessageBox(NULL, L"Не удалось задать состояние службы в контроллере службы %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5726:
	{
		MessageBox(NULL, L"Не удалось найти имя компьютера %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5727:
	{
		MessageBox(NULL, L"Не удалось загрузить драйвер устройства %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5728:
	{
		MessageBox(NULL, L"Не удалось загрузить ни один транспорт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5729:
	{
		MessageBox(NULL, L"Репликация %1 объекта домена «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5730:
	{
		MessageBox(NULL, L"Репликация %1 глобальной группы «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5731:
	{
		MessageBox(NULL, L"Репликация %1 локальной группы «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5732:
	{
		MessageBox(NULL, L"Репликация %1 пользователя «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5733:
	{
		MessageBox(NULL, L"Репликация %1 объекта политики «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5734:
	{
		MessageBox(NULL, L"Репликация %1 объекта доверенного домена «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5735:
	{
		MessageBox(NULL, L"Репликация %1 объекта учетной записи «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5736:
	{
		MessageBox(NULL, L"Репликация %1 секрета «%2» основным контроллером домена%3 не выполнена. Ошибка: %4", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5737:
	{
		MessageBox(NULL, L"Система возвращает следующий код неизвестной ошибки: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5738:
	{
		MessageBox(NULL, L"Служба Netlogon обнаружила две учетные записи машины для сервера «%1».Сервер может быть либо сервером Windows 2000, который является членомдомена, либо сервером диспетчера LAN с учетной записью в глобальнойгруппе SERVERS. Выполнять обе роли одновременно невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5739:
	{
		MessageBox(NULL, L"Этот домен содержит больше глобальных групп, чем может быть реплицировано LanManBDC. Либо удалите часть глобальных групп, либо удалите LanManBDC из домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5740:
	{
		MessageBox(NULL, L"Драйвер координатора сети возвращает следующую ошибку службе Netlogon: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5741:
	{
		MessageBox(NULL, L"Netlogon не может зарегистрировать имя %1<1B> по следующей причине: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5742:
	{
		MessageBox(NULL, L"Служба не может загрузить сообщения, требуемые для загрузки клиентов удаленной загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5743:
	{
		MessageBox(NULL, L"Служба обнаружила серьезную ошибку и не может обеспечить удаленную загрузкудля клиентов 3Com 3Start.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5744:
	{
		MessageBox(NULL, L"Служба обнаружила серьезную системную ошибку и закрывается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5745:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не подтвердил приемзагрузочных данных. Удаленная загрузка этого клиента не завершена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5746:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен из-за ошибкипри открытии файла %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5747:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен из-за ошибкипри чтении файла %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5748:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен из-за недостаткапамяти на сервере загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5749:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 будет загружен без использования контрольных сумм,так как не удалось найти контрольную сумму для файла %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5750:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен из-за слишкомбольшого числа строк в файле %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5751:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен, так как блок загрузкифайла настройки %2 для данного клиента не содержит строкиблока загрузки и/или строки загрузчика.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5752:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен из-за неправильногоразмера файла %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5753:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен из-за внутреннейошибки сервера загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5754:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен, так как файл %2имеет неправильный загрузочный заголовок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5755:
	{
		MessageBox(NULL, L"Клиент с именем компьютера %1 не был загружен из-за ошибки в сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5756:
	{
		MessageBox(NULL, L"Клиент с кодом адаптера %1 не был загружен из-за недостатка ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5757:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при копировании файла или каталога %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5758:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при удалении файла или каталога %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5759:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при установке разрешений для файла или каталога %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5760:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при проверке настройки RPL.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5761:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при создании конфигураций RPL для всех настроек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5762:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при доступе к реестру.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5763:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при замене просроченного файла RPLDISK.SYS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5764:
	{
		MessageBox(NULL, L"Служба обнаружила ошибку при добавлении учетных записей защиты или установкеразрешений к файлам. Эти записи входят в локальную группу RPLUSERлибо являются записями на отдельных рабочих станциях RPL.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5765:
	{
		MessageBox(NULL, L"Служба не смогла выполнить резервирование собственной базы данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5766:
	{
		MessageBox(NULL, L"Служба не смогла выполнить инициализацию по своей базе данных. Вероятно,база данных отсутствует или повреждена. Предпринимается попытка восстановитьбазу данных по резервной копии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5767:
	{
		MessageBox(NULL, L"Служба не смогла восстановить собственную базу данных по резервной копии.Служба запущена не будет.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5768:
	{
		MessageBox(NULL, L"Служба успешно восстановила собственную базу данных по резервной копии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5769:
	{
		MessageBox(NULL, L"Служба не смогла выполнить инициализацию по восстановленной базе данных.Служба запущена не будет.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5770:
	{
		MessageBox(NULL, L"Установка сеанса к котроллеру домена Windows NT или Windows 2000 %1 с компьютера%2 с помощью учетной записи %4 не выполнена. %2 объявлен резервным контроллером домена %3.Однако, %2 пытается подключиться либо как контроллер в доверенном домене,либо как рабочая станция в домене %3, либо как сервер в домене %3.С помощью диспетчера серверов или программы Active Directory «Пользователи и компьютеры» удалите учетную запись резервного контроллера домена для %2.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5771:
	{
		MessageBox(NULL, L"База данных удаленной загрузки с сервера имеет формат NT 3.5 / NT 3.51.NT пытается конвертировать ее в формат NT 4.0. Конвертер JETCONVпосле окончания работы внесет запись в журнал событий приложений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5772:
	{
		MessageBox(NULL, L"Непустая глобальная группа SERVERS существует в домене %1.Эта группа определяет резервные контроллеры домена Lan Manager в этом домене.Резервные контроллеры Lan Manager недопустимы в доменах NT.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5773:
	{
		MessageBox(NULL, L"DNS-сервер (с IP-адресом %1) для этого контроллера домена не поддерживает динамическую DNS. Добавьте DNS-записи из файла ‘%SystemRoot%\System32\Config\netlogon.dns\' на DNS-сервер, обслуживающий домен, на который есть ссылка в этом файле. DNS-сервер возвратил код ошибки, указанный в поле данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5774:
	{
		MessageBox(NULL, L"Не удалось выполнить регистрацию DNS-записи ‘%1\' на DNS-сервере (с IP-адресом %3)из-за следующей ошибки: %2.DNS-сервер возвратил код ошибки, указанный в поле данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5775:
	{
		MessageBox(NULL, L"Не удалось отменить регистрацию DNS-записи ‘%1\' на DNS-сервере (с IP-адресом %3)из-за следующей ошибки: %2.DNS-сервер возвратил код ошибки, указанный в поле данных.Хотя это не является критической ошибкой и не нарушает нормальную работуконтроллера домена, настоятельно рекомендуется удалить эту запись из DNS,чтобы предотвратить лишние подключения к этому компьютеру.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5776:
	{
		MessageBox(NULL, L"Не удалось создать или открыть файл %1 из-за следующей ошибки: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5777:
	{
		MessageBox(NULL, L"Получена следующая ошибка Netlogon при попытке получения информациисопоставления подсети и сайта из службы каталогов: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5778:
	{
		MessageBox(NULL, L"‘%1\' пытался определить свой сайт, выполняя поиск своего IP-адреса (‘%2\')в контейнере Configuration\Sites\Subnets службы каталогов. Ни одна подсетьне соответствует этому IP-адресу. Возможно, следует добавить объект-подсеть для этого IP-адреса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5779:
	{
		MessageBox(NULL, L"Имя сайта для этого компьютера — «%1». Это имя сайта не является допустимым именем сайта. Имя сайта должно быть допустимым именем DNS.Переименуйте этот сайт, дав ему допустимое имя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5780:
	{
		MessageBox(NULL, L"Объект подсети «%1» находится в контейнере Configuration\Sites\Subnetsв DS. Это имя имеет синтаксическую ошибку. Правильный синтаксис — xx.xx.xx.xx/yy, где xx.xx.xx.xx — это допустимый IP-номер подсети,а yy — это длина в битах для маски подсети.Исправьте имя для объекта подсети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5781:
	{
		MessageBox(NULL, L"Не удалось выполнить динамическую регистрацию или отмену регистрации одной или нескольких DNS-записей, поскольку нет доступных DNS-серверов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5782:
	{
		MessageBox(NULL, L"Не удалось выполнить динамическую регистрацию или отмену регистрации одной или нескольких DNS-записей из-за следующей ошибки: %1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5783:
	{
		MessageBox(NULL, L"Установка сеанса к контроллеру домена Windows NT или Windows 2000 %1 для домена %2не отвечает. Текущий вызов RPC от Netlogon на \\%3 к %1 отменен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5784:
	{
		MessageBox(NULL, L"Сайт ‘%2\' не имеет контроллеров домена для домена ‘%3\'.Контроллеры домена сайта ‘%1\' были автоматически выбраны для обслуживания сайта ‘%2\' для домена ‘%3\' на основании настройки параметров стоимостирепликации на сервере каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5785:
	{
		MessageBox(NULL, L"Этот контроллер домена больше не будет автоматически обслуживать сайт ‘%1\' для домена ‘%2\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5786:
	{
		MessageBox(NULL, L"Сайт ‘%2\' не имеет серверов глобального каталога.Серверы глобального каталога сайта ‘%1\' были автоматически выбраны для обслуживания сайта ‘%2\' для леса ‘%3\' на основании настройки параметров стоимостирепликации на сервере каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5787:
	{
		MessageBox(NULL, L"Этот сервер глобального каталога больше не будет автоматически обслуживать сайт ‘%1\' для леса ‘%2\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5788:
	{
		MessageBox(NULL, L"Не удалось обновить имена участника службы (SPN) для объекта-компьютера в службе каталогов Active Directory. Обновляемые значения — ‘%1\' и ‘%2\'.Произошла следующая ошибка: %3", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5789:
	{
		MessageBox(NULL, L"Не удалось обновить имя узла DNS для объекта-компьютера в службе каталогов Active Directory. Обновляемое значение — ‘%1\'.Произошла следующая ошибка: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5790:
	{
		MessageBox(NULL, L"Не найдено подходящего контроллера домена для домена %1. Найден контроллер домена NT4 или более старый, но он не может использоваться для проверки подлинности в домене Windows 2000 или более новом домене, членом которого является этот компьютер. Произошла следующая ошибка:%2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5791:
	{
		MessageBox(NULL, L"Домен этого компьютера, %1 был понижен в роли от Windows 2000 или более нового до Windows NT4 или более старого. Этот компьютер более не может использоваться для проверки подлинности. Этот компьютер надо заново присоединить к домену.Произошла следующая ошибка:%2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5792:
	{
		MessageBox(NULL, L"Сайт ‘%2\' не имеет LDAP-серверов для недоменного контекста именования ‘%3\'.LDAP-серверы в сайте ‘%1\' были автоматически выбраны для обслуживания сайта ‘%2\' для недоменного контекста именования ‘%3\' на основании настройки параметров стоимости репликации на сервере каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5793:
	{
		MessageBox(NULL, L"Этот LDAP-сервер больше не будет автоматически обслуживать сайт ‘%1\' для недоменного контекста именования ‘%2\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5794:
	{
		MessageBox(NULL, L"Сайт ‘%2\' больше не сконфигурирован вручную в реестре как обслуживаемый этим контроллером домена для домена ‘%3\'. В результате сайт ‘%2\' больше не имел контроллеров домена для домена ‘%3\'. Контроллеры домена сайта ‘%1\' были автоматически выбраны для обслуживания сайта ‘%2\' для домена ‘%3\' на основании настройки параметров стоимости репликации на сервере каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5795:
	{
		MessageBox(NULL, L"Этот контроллер домена более не охватывает сайт ‘%1′ для домена\'%2\' автоматически.Однако, сайт ‘%1\' все еще охватывается (не автоматически) этим контроллер домена для домена ‘%2\', поскольку этот сайт был вручную настроен в реестре.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5796:
	{
		MessageBox(NULL, L"Сайт ‘%2\' больше не сконфигурирован вручную в реестре как обслуживаемый этим сервером глобального каталога для леса ‘%3\'. В результате сайт ‘%2\' больше не имел серверов глобального каталога для леса ‘%3\'. Серверы глобального каталога сайта ‘%1\' были автоматически выбраны для обслуживания сайта ‘%2\' для леса ‘%3\' на основании настройки параметров стоимости репликации на сервере каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5797:
	{
		MessageBox(NULL, L"Этот сервер глобального каталога более не охватывает сайт ‘%1\' для леса ‘%2\' автоматически.However, сайт ‘%1\' все еще охватывается (не автоматически) этим сервером глобального каталога для леса ‘%2\', поскольку этот сайт был вручную настроен в реестре.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5798:
	{
		MessageBox(NULL, L"Сайт ‘%2\' больше не сконфигурирован вручную в реестре как обслуживаемый этим LDAP-сервером для недоменного контекста именования ‘%3\'. В результате сайт ‘%2\'больше не имел LDAP-серверов для недоменного контекста именования ‘%3\'. LDAP-серверы в сайте ‘%1\' были автоматически выбраны для обслуживания сайта ‘%2\' для недоменного контекста именования ‘%3\' на основании настройки параметров стоимости репликации на сервере каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5799:
	{
		MessageBox(NULL, L"Этот LDAP-сервер более не охватывает сайт ‘%1\' для недоменного контекста именования ‘%2\' автоматически. Однако, сайт ‘%1\' все еще охватывается (не автоматически) этим LDAP-сервером для недоменного контекста именования ‘%2\', поскольку этот сайт был вручную настроен в реестре.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5800:
	{
		MessageBox(NULL, L"Не удалось обновить атрибуты DnsHostName и имени участника службы (SPN) для объекта-компьютера в службе каталогов Active Directory, поскольку контроллер домена ‘%1\' содержит более одной учетной записи с именем ‘%2\', соответствующим этому компьютеру.Если SPN останется незарегистрированным, это может привести к ошибкам проверки подлинности для этого компьютера.Обратитесь к сетевому администратору, поскольку может понадобиться устранение конфликта учетных записей вручную.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5801:
	{
		MessageBox(NULL, L"Не удалось обновить атрибуты DnsHostName и имени участника службы (SPN) для объекта-компьютера в службе каталогов Active Directory, поскольку учетную запись этого компьютера, ‘%2\', не удалось сопоставить ни с каким объектом-компьютером на контроллере домена ‘%1\'.Если SPN останется незарегистрированным, это может привести к ошибкам проверки подлинности для этого компьютера.Обратитесь к сетевому администратору. При этом может оказаться полезной следующая информация для разрешения этой проблемы:Состояние DsCrackNames = 0x%3, ошибка = 0x%4.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5802:
	{
		MessageBox(NULL, L"Ни один из IP-адресов (%2) этого контроллера домена не сопоставляется с настроенным сайтом ‘%1\'.Хотя это может быть временным явлением из-за изменения IP-адреса, рекомендуется,чтобы IP-адрес контроллера домена (доступного для других компьютеров в этомдомене) сопоставлялся с сайтом, который он обслуживает. Если приведенный вышесписок IP-адресов не изменяется, возможно, следует переместить этот сервер в такойсайт (или создать новый, если он не существует), чтобы эти IP-адреса сопоставлялисьвыбранному сайту. Это может потребовать создания нового объекта-подсети (чей диапазонбудет включать указанный IP-адрес), сопоставляемого выбранному объекту-сайту.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5803:
	{
		MessageBox(NULL, L"Произошла следующая ошибка при чтении параметра ‘%2\' в разделе %1 реестра Netlogon:%3", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5804:
	{
		MessageBox(NULL, L"Раздел реестра %1 Netlogon содержит недопустимое значение 0x%2 для параметра ‘%3′.Минимальное и максимальное значение, разрешенные для этого параметра, равны 0x%4 и 0x%5, соответственно.Этому параметру присвоено значение 0x%6.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5805:
	{
		MessageBox(NULL, L"Не удалось выполнить проверку подлинности для сеанса компьютера %1.Произошла следующая ошибка: %2", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5807:
	{
		MessageBox(NULL, L"За последние %1 часов было зарегистрировано %2 подключений к этому контроллерудомена от клиентских компьютеров, чьи IP-адреса не удалось сопоставить ни содним из существующих сайтов сети предприятия. Эти клиенты, тем самым, не имелиопределенного сайта и могли подключаться к любому контроллеру домена, включая те,которые могли находиться на очень далеком расстоянии от клиента. Сайт клиентаопределяется на основе сопоставления его маски подсети с масками существующихсайтов. Чтобы поместить этих клиентов в один из сайтов, возможно, следует создать новыеобъекты, покрывающие эти IP-адреса и сопоставляемые существующим сайтам. Именаи IP-адреса этих клиентов были записаны на этом компьютере в файле журнала\'%SystemRoot%\debug\netlogon.log\' или, возможно, в файле журнала\'%SystemRoot%\debug\netlogon.bak\', создаваемом в том случае, если первыйиз упомянутых журналов оказывается заполненным.Журналы могут содержать другую не связанную с этой проблемой информацию,собираемую для отладки. Чтобы отфильтровать нужные данные, следует выполнитьпоиск строк, содержащих текст ‘NO_CLIENT_SITE:\'. Первое слово после этойстроки является именем клиента, а второе — его IP-адресом. Максимальныйразмер журналов определяется следующим DWORD-параметром в реестре:\'HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\Netlogon\Parameters\LogFileMaxSize\';по умолчанию принимается размер %3 байт. Текущий максимальный размер — %4 байт.Чтобы изменить максимальный размер, следует создать вышеупомянутый параметрв реестре и задать желаемый размер в байтах.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5890:
	{
		MessageBox(NULL, L"Операция несовместима с текущим состоянием узла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5891:
	{
		MessageBox(NULL, L"Ресурс кворума не содержит журнал кворума.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5892:
	{
		MessageBox(NULL, L"Отвечающий за членство модуль потребовал закрытия кластерной службы на этом узле.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5893:
	{
		MessageBox(NULL, L"Ошибка операции присоединения из-за несоответствия идентификаторов экземпляров кластера присоединяющегося узла и его спонсора.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5894:
	{
		MessageBox(NULL, L"Не удалось найти сеть, соответствующую указанному IP-адресу. Укажите маску подсети и кластерную сеть.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5895:
	{
		MessageBox(NULL, L"Реальный тип данных свойства не соответствует ожидаемому.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5896:
	{
		MessageBox(NULL, L"Узел был успешно исключен из кластера, однако не очищен. Имеются дополнительные сведения о причинах этого.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5897:
	{
		MessageBox(NULL, L"Два или более значения, заданных для свойств ресурса, конфликтуют друг с другом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5898:
	{
		MessageBox(NULL, L"Этот компьютер нельзя включить в кластер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5899:
	{
		MessageBox(NULL, L"Этот компьютер нельзя включить в кластер, так как на нем установлена неверная версия Windows.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 5900:
	{
		MessageBox(NULL, L"Кластер с указанным именем не может быть создан, поскольку кластер с данным именем уже существует. Укажите другое имя кластера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6000:
	{
		MessageBox(NULL, L"Указанный файл не может быть зашифрован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6001:
	{
		MessageBox(NULL, L"Указанный файл не может быть расшифрован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6002:
	{
		MessageBox(NULL, L"Указанный файл зашифрован и не может быть расшифрован этим пользователем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6003:
	{
		MessageBox(NULL, L"Для этой системы отсутствует политика надежного восстановления шифрования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6004:
	{
		MessageBox(NULL, L"В системе не загружен требуемый драйвер шифрования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6005:
	{
		MessageBox(NULL, L"Этот файл был зашифрован с помощью драйвера иной версии, чем драйвер, загруженный в данный момент.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6006:
	{
		MessageBox(NULL, L"Отсутствуют EFS-ключи, определенные для этого пользователя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6007:
	{
		MessageBox(NULL, L"Указанный файл не зашифрован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6008:
	{
		MessageBox(NULL, L"Указанный файл не имеет определенного формата экспорта EFS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6009:
	{
		MessageBox(NULL, L"Указанный файл имеет атрибут «только для чтения».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6010:
	{
		MessageBox(NULL, L"Запрещено шифрование этой папки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6011:
	{
		MessageBox(NULL, L"Операции удаленного шифрования на этом сервере не имеет достаточно доверия.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6012:
	{
		MessageBox(NULL, L"Политика восстановления, заданная для системы, содержит неверный сертификат восстановления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6013:
	{
		MessageBox(NULL, L"Алгоритм шифрования, использованный для исходного файла, нуждается в более длинном буфере для ключа, чем у конечного файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6014:
	{
		MessageBox(NULL, L"Этот раздел диска не поддерживает шифрование файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6015:
	{
		MessageBox(NULL, L"На компьютере отключено шифрование файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6016:
	{
		MessageBox(NULL, L"Для расшифровки файла требуется более новая система.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6118:
	{
		MessageBox(NULL, L"Недоступен список серверов для этой рабочей группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 6200:
	{
		MessageBox(NULL, L"Служба планировщика заданий должна запускаться с использованием системной учетной записи. Отдельные задания могут использовать другие учетные записи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7001:
	{
		MessageBox(NULL, L"Указано недопустимое имя сеанса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7002:
	{
		MessageBox(NULL, L"Указан недопустимый драйвер протокола.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7003:
	{
		MessageBox(NULL, L"Указанный драйвер протокола не найден в системном пути.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7004:
	{
		MessageBox(NULL, L"Указанный драйвер терминального подключения не найден в системном пути.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7005:
	{
		MessageBox(NULL, L"Для этого сеанса нельзя создать раздел реестра для записи событий в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7006:
	{
		MessageBox(NULL, L"В системе уже существует служба с таким именем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7007:
	{
		MessageBox(NULL, L"В сеансе отложена операция закрытия.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7008:
	{
		MessageBox(NULL, L"Свободные выходные буферы отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7009:
	{
		MessageBox(NULL, L"Не найден файл MODEM.INF.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7010:
	{
		MessageBox(NULL, L"В файле MODEM.INF не найдено имя этого модема.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7011:
	{
		MessageBox(NULL, L"Модем не принял отправленную ему команду. Проверьте, что имя сконфигурированного модема соответствует подключенному модему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7012:
	{
		MessageBox(NULL, L"Модем не отвечает на отправленную ему команду. Проверьте электропитание и правильность подключения к модему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7013:
	{
		MessageBox(NULL, L"Несущий сигнал не обнаружен, или он сброшен в результате отключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7014:
	{
		MessageBox(NULL, L"Сигнал станции (зуммер) не получен за отведенное время. Проверьте подключение телефонного кабеля и отсутствие его повреждений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7015:
	{
		MessageBox(NULL, L"При ответном вызове удаленного компьютера обнаружен сигнал «занято».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7016:
	{
		MessageBox(NULL, L"При ответном вызове удаленного компьютера обнаружен ответ голосом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7017:
	{
		MessageBox(NULL, L"Ошибка драйвера транспорта", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7022:
	{
		MessageBox(NULL, L"Указанный сеанс не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7023:
	{
		MessageBox(NULL, L"Введенное имя сеанса уже используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7024:
	{
		MessageBox(NULL, L"Не удается завершить требуемую операцию, поскольку терминальное соединение сейчас занято, выполняя операцию одну из операций: подключение, отключение, сброс, удаление.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7025:
	{
		MessageBox(NULL, L"Была сделана попытка подключения к сеансу с режимом экрана, не поддерживаемым данным клиентом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7035:
	{
		MessageBox(NULL, L"Данное приложение попыталось включить графический режим DOS. Графический режим DOS не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7037:
	{
		MessageBox(NULL, L"Интерактивные привилегии входа в систему отключены.Обратитесь за помощью к системному администратору.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7038:
	{
		MessageBox(NULL, L"Требуемая операция может быть выполнена только на системной консоли.Это обычно результат того, что драйвер или системная библиотека требуют прямого доступа к консоли.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7040:
	{
		MessageBox(NULL, L"Клиент не смог ответить на сообщение сервера о подключении.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7041:
	{
		MessageBox(NULL, L"Отключение сеанса консоли не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7042:
	{
		MessageBox(NULL, L"Повторное подключение к консоли отключенного сеанса не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7044:
	{
		MessageBox(NULL, L"Запрос на удаленное управление другим сеансом отклонен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7045:
	{
		MessageBox(NULL, L"Доступ к требуемому сеансу отклонен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7049:
	{
		MessageBox(NULL, L"Недопустимый драйвер терминального подключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7050:
	{
		MessageBox(NULL, L"Удаленное управление требуемым сеансом невозможно.Возможно, сеанс отключен или в нем отсутствуют работающие пользователи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7051:
	{
		MessageBox(NULL, L"Указанный сеанс не настроен для осуществления удаленного управления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7052:
	{
		MessageBox(NULL, L"Запрос на подключение к серверу терминалов отклонен. Этот номер клиентской лицензии сервера терминалов используется сейчас другим пользователем.Обратитесь к системному администратору за уникальным номером лицензии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7053:
	{
		MessageBox(NULL, L"Запрос на подключение к серверу терминалов отклонен. Этот номер клиентской лицензии сервера терминалов не введен для данной копии клиента.Обратитесь к системному администратору за помощью.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7054:
	{
		MessageBox(NULL, L"Достигнут предел числа лицензированных входов в систему.Повторите попытку входа позже.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7055:
	{
		MessageBox(NULL, L"Используемый клиент не имеет лицензии для использования этой системы Запрос на вход в систему отклонен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7056:
	{
		MessageBox(NULL, L"Срок действия системной лицензии истек. Запрос на вход в систему отклонен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7057:
	{
		MessageBox(NULL, L"Нельзя прекратить удаленное управление, так как указанный сеанс не управляется в удаленном режиме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 7058:
	{
		MessageBox(NULL, L"Удаленное управление консолью прекращено, поскольку изменен режим экрана. Изменение режима отображения в удаленно управляемом сеансе невозможно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8001:
	{
		MessageBox(NULL, L"Недопустимый вызов API службы репликации файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8002:
	{
		MessageBox(NULL, L"Невозможно запустить службу репликации файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8003:
	{
		MessageBox(NULL, L"Невозможно остановить службу репликации файлов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8004:
	{
		MessageBox(NULL, L"API службы репликации файлов прервал запрос.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8005:
	{
		MessageBox(NULL, L"Служба репликации файлов прервала запрос.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8006:
	{
		MessageBox(NULL, L"Нет доступа к службе репликации файлов.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8007:
	{
		MessageBox(NULL, L"Служба репликации файлов не может удовлетворить запрос, т.к. у пользователя недостаточно привилегий.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8008:
	{
		MessageBox(NULL, L"Служба репликации файлов не может удовлетворить запрос, т.к. отсутствует проверенный RPC.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8009:
	{
		MessageBox(NULL, L"Служба репликации файлов не может удовлетворить запрос, т.к. у пользователя недостаточно привилегий на данном котроллере домена.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8010:
	{
		MessageBox(NULL, L"Служба репликации файлов не может удовлетворить запрос, т.к. отсутствует проверенный RPC в контроллере домена.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8011:
	{
		MessageBox(NULL, L"Служба репликации файлов не может взаимодействовать со службой репликации файлов контроллера домена.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8012:
	{
		MessageBox(NULL, L"Служба репликации файлов контроллера домена не может взаимодействовать со службой репликации файлов этого компьютера.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8013:
	{
		MessageBox(NULL, L"Служба репликации файлов не может заполнить данными системный том вследствие внутренней ошибки.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8014:
	{
		MessageBox(NULL, L"Служба репликации файлов не может заполнить данными системный том вследствие внутренней ошибки.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8015:
	{
		MessageBox(NULL, L"Служба репликации файлов не может обработать запрос. Системный том занят на обработке предыдущего запроса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8016:
	{
		MessageBox(NULL, L"Служба репликации файлов не может прервать репликацию системного тома вследствие внутренней ошибки.Более подробные сведения могут находиться в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8017:
	{
		MessageBox(NULL, L"Служба репликации файлов обнаружила недопустимый параметр.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8200:
	{
		MessageBox(NULL, L"Произошла ошибка при установке службы каталогов. Более подробные сведения находятся в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8201:
	{
		MessageBox(NULL, L"Служба каталогов проверила принадлежность к группам локально.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8202:
	{
		MessageBox(NULL, L"Указанное значение или атрибут службы каталогов не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8203:
	{
		MessageBox(NULL, L"Для службы каталогов указан недопустимый синтаксис атрибута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8204:
	{
		MessageBox(NULL, L"Для службы каталогов указан неопределенный тип атрибута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8205:
	{
		MessageBox(NULL, L"Указанный атрибут или значение службы каталогов уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8206:
	{
		MessageBox(NULL, L"Служба каталогов занята.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8207:
	{
		MessageBox(NULL, L"Служба каталогов недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8208:
	{
		MessageBox(NULL, L"Служба каталогов не смогла выделить относительный идентификатор.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8209:
	{
		MessageBox(NULL, L"Служба каталогов исчерпала пул относительных идентификаторов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8210:
	{
		MessageBox(NULL, L"Невозможно выполнить требуемую операцию, поскольку служба каталогов не является хозяином операций такого типа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8211:
	{
		MessageBox(NULL, L"Служба каталогов не смогла инициализировать подсистему, которая выделяет относительные идентификаторы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8212:
	{
		MessageBox(NULL, L"Требуемая операция не удовлетворяет одному или нескольким ограничениям для объектов этого класса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8213:
	{
		MessageBox(NULL, L"Служба каталогов может выполнять эту операцию только на оконечном листовом объекте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8214:
	{
		MessageBox(NULL, L"Служба каталогов не может выполнить операцию на RDN-атрибуте объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8215:
	{
		MessageBox(NULL, L"Служба каталогов обнаружила попытку изменить класс объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8216:
	{
		MessageBox(NULL, L"Затребованная операция меж-доменного перемещения не может быть выполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8217:
	{
		MessageBox(NULL, L"Не удается установить связь с сервером глобального каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8218:
	{
		MessageBox(NULL, L"К объекту политики имеется общий доступ, объект можно изменить только в его корне.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8219:
	{
		MessageBox(NULL, L"Объект политики не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8220:
	{
		MessageBox(NULL, L"Информация о требуемой политике имеется только в службе каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8221:
	{
		MessageBox(NULL, L"Повышение роли контроллера домена сейчас активно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8222:
	{
		MessageBox(NULL, L"Повышение роли контроллера домена сейчас не активно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8224:
	{
		MessageBox(NULL, L"Произошла ошибка операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8225:
	{
		MessageBox(NULL, L"Произошла ошибка протокола.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8226:
	{
		MessageBox(NULL, L"Для этого запроса превышен предел времени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8227:
	{
		MessageBox(NULL, L"Для этого запроса превышен предел размера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8228:
	{
		MessageBox(NULL, L"Пределы администрирования для этого запроса были превышены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8229:
	{
		MessageBox(NULL, L"Отклик сравнения: ложный.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8230:
	{
		MessageBox(NULL, L"Отклик сравнения: истинный.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8231:
	{
		MessageBox(NULL, L"Требуемый метод проверки подлинности не поддерживается сервером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8232:
	{
		MessageBox(NULL, L"Для этого сервера требуется более безопасный метод проверки подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8233:
	{
		MessageBox(NULL, L"Недопустимая проверка подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8234:
	{
		MessageBox(NULL, L"Неизвестный механизм проверки подлинности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8235:
	{
		MessageBox(NULL, L"Сервер возвратил ссылку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8236:
	{
		MessageBox(NULL, L"Сервер не поддерживает требуемое критическое расширение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8237:
	{
		MessageBox(NULL, L"Этот запрос требует безопасного подключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8238:
	{
		MessageBox(NULL, L"Недопустимое соответствие.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8239:
	{
		MessageBox(NULL, L"Произошло нарушение ограничения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8240:
	{
		MessageBox(NULL, L"Такой объект на сервере отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8241:
	{
		MessageBox(NULL, L"Существует проблема с псевдонимом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8242:
	{
		MessageBox(NULL, L"Указан недопустимый dn-синтаксис.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8243:
	{
		MessageBox(NULL, L"Этот объект является оконечным листом дерева.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8244:
	{
		MessageBox(NULL, L"Существует проблема разыменования псевдонима.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8245:
	{
		MessageBox(NULL, L"Сервер не склонен обработать запрос.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8246:
	{
		MessageBox(NULL, L"Обнаружен цикл.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8247:
	{
		MessageBox(NULL, L"Произошло нарушение именования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8248:
	{
		MessageBox(NULL, L"Слишком большой результат.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8249:
	{
		MessageBox(NULL, L"Эта операция затрагивает несколько DSA", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8250:
	{
		MessageBox(NULL, L"Сервер неработоспособен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8251:
	{
		MessageBox(NULL, L"Произошла локальная ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8252:
	{
		MessageBox(NULL, L"Произошла ошибка кодирования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8253:
	{
		MessageBox(NULL, L"Произошла ошибка раскодирования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8254:
	{
		MessageBox(NULL, L"Фильтр поиска не опознан.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8255:
	{
		MessageBox(NULL, L"Один или несколько параметров недопустимы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8256:
	{
		MessageBox(NULL, L"указанный метод не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8257:
	{
		MessageBox(NULL, L"Не возвращено никаких результатов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8258:
	{
		MessageBox(NULL, L"Указанный элемент управления не поддерживается сервером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8259:
	{
		MessageBox(NULL, L"Клиент обнаружил зацикливание ссылок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8260:
	{
		MessageBox(NULL, L"Предустановленный предел ссылок исчерпан.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8261:
	{
		MessageBox(NULL, L"Операция поиска нуждается в операторе SORT.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8262:
	{
		MessageBox(NULL, L"Результаты поиска выходят за рамки указанного диапазона смещений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8301:
	{
		MessageBox(NULL, L"Корневой объект должен быть заголовком контекста именования. Корневой объект не может иметь присвоенного родителя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8302:
	{
		MessageBox(NULL, L"Невозможно выполнить операцию добавления реплики. Для создания реплики нужна возможность записи контекста именования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8303:
	{
		MessageBox(NULL, L"Ссылка на атрибут, который не определен в полученной схеме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8304:
	{
		MessageBox(NULL, L"Превышен наибольший допустимый размер объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8305:
	{
		MessageBox(NULL, L"Сделана попытка добавить к каталогу объект с уже существующим именем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8306:
	{
		MessageBox(NULL, L"Сделана попытка добавить объект из класса с неопределенным RDN в схеме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8307:
	{
		MessageBox(NULL, L"Сделана попытка добавить объект с неопределенным RDN в схеме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8308:
	{
		MessageBox(NULL, L"Ни один из требуемых атрибутов не найден в объектах.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8309:
	{
		MessageBox(NULL, L"Буфер пользователя слишком мал.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8310:
	{
		MessageBox(NULL, L"Указанный в операции атрибут отсутствует в объекте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8311:
	{
		MessageBox(NULL, L"Недопустимая операция изменения. Некоторые параметры изменения не разрешены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8312:
	{
		MessageBox(NULL, L"Указанный объект слишком велик.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8313:
	{
		MessageBox(NULL, L"Указан недопустимый тип.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8314:
	{
		MessageBox(NULL, L"Эта операция должна выполняться на главном DSA.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8315:
	{
		MessageBox(NULL, L"Должен быть указан атрибут класса объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8316:
	{
		MessageBox(NULL, L"Не указан обязательный атрибут.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8317:
	{
		MessageBox(NULL, L"Сделана попытка изменить объект включением в него атрибута, не разрешенного для данного класса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8318:
	{
		MessageBox(NULL, L"Указанный атрибут уже присутствует в этом объекте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8320:
	{
		MessageBox(NULL, L"Указанный атрибут не существует, или имеет нулевое значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8321:
	{
		MessageBox(NULL, L"Множественные значения были заданы для атрибута, которые должен иметь только единственное значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8322:
	{
		MessageBox(NULL, L"Значение этого атрибута находилось вне допустимых пределов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8323:
	{
		MessageBox(NULL, L"Указанное значение уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8324:
	{
		MessageBox(NULL, L"Этот атрибут не может быть удален, т.к. он отсутствует в объекте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8325:
	{
		MessageBox(NULL, L"Значение этого атрибута не может быть удалено, т.к. атрибут отсутствует в объекте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8326:
	{
		MessageBox(NULL, L"Указанный корневой объект не может быть подссылкой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8327:
	{
		MessageBox(NULL, L"Очистка не разрешена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8328:
	{
		MessageBox(NULL, L"Оценка очистки не разрешена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8329:
	{
		MessageBox(NULL, L"Эта операция не может быть выполнена, т.к. родитель объекта либо не подтвержден, либо удален.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8330:
	{
		MessageBox(NULL, L"Родительский объект не может быть псевдонимом. Псевдонимы являются оконечными листовыми объектами дерева.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8331:
	{
		MessageBox(NULL, L"Объект и его родитель должны иметь одинаковые типы, быть оба главными, или оба копиями.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8332:
	{
		MessageBox(NULL, L"Эта операция не может быть выполнена, т.к. существует дочерний объект. Эта операция может быть выполнена только на оконечном листовом объекте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8333:
	{
		MessageBox(NULL, L"Объект каталога не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8334:
	{
		MessageBox(NULL, L"Объект псевдонима не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8335:
	{
		MessageBox(NULL, L"Имя объекта имеет недопустимый синтаксис.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8336:
	{
		MessageBox(NULL, L"Не разрешается, чтобы псевдоним ссылался на другой псевдоним.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8337:
	{
		MessageBox(NULL, L"Не разрешается, чтобы у псевдонима отсутствовала ссылка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8338:
	{
		MessageBox(NULL, L"Эта операция вне диапазона.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8339:
	{
		MessageBox(NULL, L"Нельзя продолжить операцию, так как объект находится в процессе удаления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8340:
	{
		MessageBox(NULL, L"Невозможно удалить объект DSA.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8341:
	{
		MessageBox(NULL, L"Произошла ошибка службы каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8342:
	{
		MessageBox(NULL, L"Эта операция может быть выполнена только на главном объекте DSA.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8343:
	{
		MessageBox(NULL, L"Этот объект должен быть класса DSA.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8344:
	{
		MessageBox(NULL, L"Для выполнения операции права недостаточны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8345:
	{
		MessageBox(NULL, L"Этот объект не может быть добавлен, т.к. родитель отсутствует в списке возможных старших.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8346:
	{
		MessageBox(NULL, L"Доступ к атрибуту не разрешен, т.к. атрибут принадлежит диспетчеру защищенных учетных записей (SAM).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8347:
	{
		MessageBox(NULL, L"В имени слишком много частей.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8348:
	{
		MessageBox(NULL, L"Имя слишком длинно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8349:
	{
		MessageBox(NULL, L"Значение имени слишком длинно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8350:
	{
		MessageBox(NULL, L"Произошла ошибка службы каталогов при обработке имени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8351:
	{
		MessageBox(NULL, L"Служба каталогов не может получить для имени тип атрибута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8352:
	{
		MessageBox(NULL, L"Это имя не определяет объект; данное имя определяет объект-фантом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8353:
	{
		MessageBox(NULL, L"Дескриптор безопасности слишком короток.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8354:
	{
		MessageBox(NULL, L"Недопустимый дескриптор безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8355:
	{
		MessageBox(NULL, L"Невозможно создать имя для удаленного объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8356:
	{
		MessageBox(NULL, L"Родитель новой подссылки должен существовать.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8357:
	{
		MessageBox(NULL, L"Этот объект должен быть контекстом именования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8358:
	{
		MessageBox(NULL, L"Не разрешается добавление атрибута, который принадлежит системе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8359:
	{
		MessageBox(NULL, L"Класс этого объекта должен быть структурным; невозможно утвердить абстрактный класс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8360:
	{
		MessageBox(NULL, L"Не удалось найти объект схемы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8361:
	{
		MessageBox(NULL, L"Локальный объект с этим GUID («живым» или «мертвым») уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8362:
	{
		MessageBox(NULL, L"Операция не может быть выполнена на обратной ссылке.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8363:
	{
		MessageBox(NULL, L"Перекрестные ссылки для указанного контекста именования не могут быть найдены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8364:
	{
		MessageBox(NULL, L"Операция не может быть выполнена, поскольку служба каталогов отключена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8365:
	{
		MessageBox(NULL, L"Недопустимый запрос службы каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8366:
	{
		MessageBox(NULL, L"Атрибут владельца роли не может быть прочитан.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8367:
	{
		MessageBox(NULL, L"Ошибка требуемой операции FSMO. Нет связи с текущим владельцем FSMO.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8368:
	{
		MessageBox(NULL, L"Изменение DN через контекст именования не разрешено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8369:
	{
		MessageBox(NULL, L"Этот атрибут не может быть изменен, т.к. он принадлежит системе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8370:
	{
		MessageBox(NULL, L"Эту функцию может выполнить только репликатор.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8371:
	{
		MessageBox(NULL, L"Указанный класс не определен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8372:
	{
		MessageBox(NULL, L"Указанный класс не является подклассом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8373:
	{
		MessageBox(NULL, L"Ссылка на имя неверна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8374:
	{
		MessageBox(NULL, L"Перекрестная ссылка уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8375:
	{
		MessageBox(NULL, L"Удаление основной перекрестной ссылки не разрешено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8376:
	{
		MessageBox(NULL, L"Изменения поддеревьев поддерживаются только заголовками NC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8377:
	{
		MessageBox(NULL, L"Слишком сложный фильтр уведомления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8378:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: повторяющиеся RDN.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8379:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: повторяющиеся OID.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8380:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: повторяющиеся идентификаторы MAPI.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8381:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: повторяющиеся идентификаторы GUID.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8382:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: повторяющееся выводимое имя LDAP.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8383:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: нижнее значение выше, чем верхнее.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8384:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: несовпадение синтаксиса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8385:
	{
		MessageBox(NULL, L"Ошибка удаления схемы: атрибут использован в must-contain.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8386:
	{
		MessageBox(NULL, L"Ошибка удаления схемы: атрибут использован в may-contain.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8387:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: отсутствует атрибут в may-contain.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8388:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: отсутствует атрибут в must-contain.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8389:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: данный класс в списке дополнительных классов (aux-class) не существует или это особый класс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8390:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: данный класс в классах высшего уровня (poss-superiors) не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8391:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: класс в списке подклассов (subclassof) не существует или не соответствует правилам иерархии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8392:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: неверный синтаксис Rdn-Att-Id.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8393:
	{
		MessageBox(NULL, L"Ошибка удаления схемы: класс используется как особый класс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8394:
	{
		MessageBox(NULL, L"Ошибка удаления схемы: класс используется как подкласс.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8395:
	{
		MessageBox(NULL, L"Ошибка удаления схемы: класс используется как класс высшего ранга.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8396:
	{
		MessageBox(NULL, L"Ошибка обновления схемы при пересчете кэша проверки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8397:
	{
		MessageBox(NULL, L"Удаление дерева не завершено. Для продолжения процесса удаления запрос должен быть сделан повторно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8398:
	{
		MessageBox(NULL, L"Затребованная операция удаления не может быть выполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8399:
	{
		MessageBox(NULL, L"Невозможно прочесть идентификатор управления классом для этой записи схемы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8400:
	{
		MessageBox(NULL, L"Схема атрибута имеет неверный синтаксис.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8401:
	{
		MessageBox(NULL, L"Этот атрибут не может кэшироваться.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8402:
	{
		MessageBox(NULL, L"Этот класс не может кэшироваться.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8403:
	{
		MessageBox(NULL, L"Этот атрибут нельзя удалить из кэша.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8404:
	{
		MessageBox(NULL, L"Этот класс нельзя удалить из кэша.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8405:
	{
		MessageBox(NULL, L"Нельзя прочесть атрибут различающегося имени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8406:
	{
		MessageBox(NULL, L"Не найдена требуемая подссылка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8407:
	{
		MessageBox(NULL, L"Нельзя восстановить атрибут типа образца.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8408:
	{
		MessageBox(NULL, L"Произошла внутренняя ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8409:
	{
		MessageBox(NULL, L"Произошла ошибка базы данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8410:
	{
		MessageBox(NULL, L"Не найден атрибут GOVERNSID.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8411:
	{
		MessageBox(NULL, L"Не найден ожидаемый атрибут.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8412:
	{
		MessageBox(NULL, L"Указанный контекст именования не может найти перекрестную ссылку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8413:
	{
		MessageBox(NULL, L"Произошла ошибка проверки безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8414:
	{
		MessageBox(NULL, L"Эта схема не загружена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8415:
	{
		MessageBox(NULL, L"Сбой размещения схемы. Возможно, недостаточно памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8416:
	{
		MessageBox(NULL, L"Невозможно получить требуемый синтаксис для схемы атрибута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8417:
	{
		MessageBox(NULL, L"Произошла ошибка проверки глобального каталога. Глобальный каталог или недоступен, или не поддерживает такую операцию. Одна из частей службы каталогов сейчас не доступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8418:
	{
		MessageBox(NULL, L"Произошла ошибка операции репликации из-за несоответствия схемы задействованных серверов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8419:
	{
		MessageBox(NULL, L"Не удается найти объект DSA.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8420:
	{
		MessageBox(NULL, L"Не удается найти контекст именования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8421:
	{
		MessageBox(NULL, L"Не удается найти контекст именования в кэше.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8422:
	{
		MessageBox(NULL, L"Дочерний объект не может быть получен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8423:
	{
		MessageBox(NULL, L"По соображениям безопасности это изменение не разрешено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8424:
	{
		MessageBox(NULL, L"Эта операция не может заменить скрытую запись.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8425:
	{
		MessageBox(NULL, L"Файл иерархии недоступен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8426:
	{
		MessageBox(NULL, L"Не удалась попытка .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8427:
	{
		MessageBox(NULL, L"Параметр конфигурации каталога не найден в реестре.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8428:
	{
		MessageBox(NULL, L"Сбой попытки вычислить индекс адресной книги.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8429:
	{
		MessageBox(NULL, L"Сбой размещения таблицы иерархии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8430:
	{
		MessageBox(NULL, L"Внутренняя ошибка службы каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8431:
	{
		MessageBox(NULL, L"Неизвестная ошибка службы каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8432:
	{
		MessageBox(NULL, L"Корневой объект требует «верхнего» класса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8433:
	{
		MessageBox(NULL, L"Сервер каталогов прекращает работу и не может быть использован как владелец передаваемых монопольных операций (FSMO).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8434:
	{
		MessageBox(NULL, L"В службе каталогов утеряна обязательная информация и невозможно определить владельца передаваемых монопольных операций (FSMO).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8435:
	{
		MessageBox(NULL, L"Службе каталогов не удается передать владение одной или несколькими передаваемыми монопольными операциями (FSMO) на другие серверы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8436:
	{
		MessageBox(NULL, L"Ошибка операции репликации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8437:
	{
		MessageBox(NULL, L"Для этой операции репликации указан недопустимый параметр.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8438:
	{
		MessageBox(NULL, L"Служба каталогов занята и не может завершить сейчас операцию репликации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8439:
	{
		MessageBox(NULL, L"Для этой операции репликации указано недопустимое различающееся имя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8440:
	{
		MessageBox(NULL, L"Для этой операции репликации указан недопустимый контекст именования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8441:
	{
		MessageBox(NULL, L"Указанное для этой операции репликации различающееся имя уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8442:
	{
		MessageBox(NULL, L"В системе репликации произошла внутренняя ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8443:
	{
		MessageBox(NULL, L"Обнаружено несоответствие в базе данных при выполнении операции репликации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8444:
	{
		MessageBox(NULL, L"Нет доступа к серверу, выбранному для этой операции репликации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8445:
	{
		MessageBox(NULL, L"При выполнении операции репликации встречен объект недопустимого типа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8446:
	{
		MessageBox(NULL, L"Ошибка размещения в памяти при выполнении операции репликации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8447:
	{
		MessageBox(NULL, L"Произошла ошибка операции репликации, связанная с почтовой системой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8448:
	{
		MessageBox(NULL, L"Ссылочная информация о репликации для конечного сервера уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8449:
	{
		MessageBox(NULL, L"Ссылочная информация о репликации для конечного сервера не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8450:
	{
		MessageBox(NULL, L"Нельзя удалить контекст именования, т.к. он реплицирован на другой сервер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8451:
	{
		MessageBox(NULL, L"Произошла ошибка базы данных при выполнении репликации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8452:
	{
		MessageBox(NULL, L"Контекст именования находится в процессе удаления или не был реплицирован с указанного сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8453:
	{
		MessageBox(NULL, L"Доступ к репликации отвергнут.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8454:
	{
		MessageBox(NULL, L"Эта операция репликации не поддерживается в данной версии службы каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8455:
	{
		MessageBox(NULL, L"Репликация вызова удаленной процедуры была прервана.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8456:
	{
		MessageBox(NULL, L"Исходный сервер в настоящий момент отвергает запросы на репликацию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8457:
	{
		MessageBox(NULL, L"Конечный сервер в настоящий момент отвергает запросы на репликацию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8458:
	{
		MessageBox(NULL, L"Ошибка операции репликации из-за конфликта имен объектов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8459:
	{
		MessageBox(NULL, L"Источник репликации был установлен заново.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8460:
	{
		MessageBox(NULL, L"Ошибка операции репликации из-за отсутствия требуемого родительского объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8461:
	{
		MessageBox(NULL, L"Операция репликации была выполнена раньше других.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8462:
	{
		MessageBox(NULL, L"Попытка синхронизации репликации была прервана из-за отсутствия обновлений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8463:
	{
		MessageBox(NULL, L"Операция репликации была прервана, т.к. происходит выключение системы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8464:
	{
		MessageBox(NULL, L"Попытка синхронизации репликации завершена с ошибкой, т.к. конечный частный набор атрибутов не является подмножеством исходного частного набора атрибутов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8465:
	{
		MessageBox(NULL, L"Попытка синхронизации репликации завершена с ошибкой, т.к. мастер-реплика попыталась синхронизироваться с неполной реплики.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8466:
	{
		MessageBox(NULL, L"Получен доступ к серверу, указанному для операции репликации, но это сервер не смог связаться с другим сервером, необходимым для завершения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8467:
	{
		MessageBox(NULL, L"Версия схемы Active Directory исходного леса несовместима с версией Active Directory на этом компьютере. Чтобы добавить этот компьютер в лес в качестве контроллера домена, следует вначале обновить операционную систему на контроллере домена в исходном лесу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8468:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: атрибут с таким идентификатором ссылки уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8469:
	{
		MessageBox(NULL, L"Преобразование имен: общая ошибка обработки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8470:
	{
		MessageBox(NULL, L"Преобразование имен: не удается найти имя или права на чтение имени недостаточны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8471:
	{
		MessageBox(NULL, L"Преобразование имен: входящее имя сопоставлено более чем одному исходящему имени.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8472:
	{
		MessageBox(NULL, L"Преобразование имен: входящее имя найдено, но оно исходящий формат неверен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8473:
	{
		MessageBox(NULL, L"Преобразование имен: не удается разрешить имя полностью, найден только домен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8474:
	{
		MessageBox(NULL, L"Преобразование имен: не удается выполнить полное синтаксическое сопоставление у клиента без осуществления подключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8475:
	{
		MessageBox(NULL, L"Изменение построенного атрибута не допускается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8476:
	{
		MessageBox(NULL, L"Указанный OM-Object-Class неверен для атрибута с таким синтаксисом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8477:
	{
		MessageBox(NULL, L"Запрос на репликацию отправлен; ждите отклик.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8478:
	{
		MessageBox(NULL, L"Для выполнения требуемой операции нужна служба каталогов, которая недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8479:
	{
		MessageBox(NULL, L"Выводимое имя LDAP для класса или атрибута содержит символы, не входящие в ASCII.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8480:
	{
		MessageBox(NULL, L"Требуемая операция поиска поддерживается для простого поиска.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8481:
	{
		MessageBox(NULL, L"Операция поиска не смогла получить атрибуты из базы данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8482:
	{
		MessageBox(NULL, L"Операция обновления схемы попыталась добавить атрибут обратной ссылки, не имеющей соответствующей ссылки вперед.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8483:
	{
		MessageBox(NULL, L"Исходное и конечное расположение при перемещении между доменами не смогли быть согласованы по временным характеристикам объекта. Или исходное, или конечное место не обладают последней версией объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8484:
	{
		MessageBox(NULL, L"Исходное и конечное расположение при перемещении между доменами не смогли согласовать имя объекта. Или исходном, или в конечном месте отсутствует последняя версия объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8485:
	{
		MessageBox(NULL, L"Исходное и конечное расположение при перемещении между доменами совпадают. Следует использовать операцию локального перемещения вместо меж-доменного.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8486:
	{
		MessageBox(NULL, L"Исходное и конечное расположение при перемещении между доменами не согласованы по контексту именования в лесу. Или исходном, или в конечном месте отсутствует последняя версия контейнера разделов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8487:
	{
		MessageBox(NULL, L"Конечное расположение при перемещении между доменами не авторизовано для конечного контекста наименования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8488:
	{
		MessageBox(NULL, L"Исходное и конечное расположение при перемещении между доменами не согласовали подлинность исходного объекта. Или исходном, или в конечном месте отсутствует последняя версия исходного объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8489:
	{
		MessageBox(NULL, L"Объект перемещаемый между доменами уже помечен для удаления конечным сервером. На исходном сервере отсутствует последняя версия исходного объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8490:
	{
		MessageBox(NULL, L"Уже выполняется другая операция, требующая доступа к PDC FSMO.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8491:
	{
		MessageBox(NULL, L"Операция перемещения между доменами завершена с ошибкой, т.к. существуют две версии перемещаемого объекта, — по каждой в исходном и конечном домене. Конечный объект должен быть перемещен для восстановления системы в согласованное состояние.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8492:
	{
		MessageBox(NULL, L"Этот объект не может быть перемещен за границу домена, т.к. или меж-доменное перемещение для этого класса не разрешен, или объект имеет особые параметры, к примеру: ограничение RID или доверительная учетная запись, не разрешающие перемещение объектов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8493:
	{
		MessageBox(NULL, L"Перемещение объектов — членов группы невозможно, т.к. такое перемещение нарушит условия принадлежности к группе учетных записей. Удалите объект из любой из групп учетных записей и повторите попытку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8494:
	{
		MessageBox(NULL, L"Заголовок контекста именования должен быть непосредственным потомком другого заголовка контекста именования, но не внутреннего узла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8495:
	{
		MessageBox(NULL, L"Каталог не может проверить предлагаемый контекст именования для имени, т.к. он не содержит реплику предложенного контекста именования. Убедитесь, что роль хозяина именования доменов выполняется сервером, сконфигурированным как сервер глобального каталога, и что его состояние соответствует состоянию партнеров репликации. (Применяется только к хозяинам именования доменов Windows 2000)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8496:
	{
		MessageBox(NULL, L"Конечный домен должен быть в основном режиме.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8497:
	{
		MessageBox(NULL, L"Операция не может быть выполнена, т.к. сервер не имеет контейнера инфраструктуры в нужном домене.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8498:
	{
		MessageBox(NULL, L"Меж-доменное перемещение непустых групп учетных записей не разрешается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8499:
	{
		MessageBox(NULL, L"Меж-доменное перемещение непустых групп ресурсов не разрешается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8500:
	{
		MessageBox(NULL, L"Для атрибута заданы недопустимые параметры поиска. Бит ANR допускается только для атрибутов строк Юникод или Teletex.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8501:
	{
		MessageBox(NULL, L"Удаление дерева начато с объекта, имеющего NC-заголовок, т.к. потомки не разрешены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8502:
	{
		MessageBox(NULL, L"Служба каталогов не смогла заблокировать дерево при подготовке к его удалению, т.к. дерево на тот момент использовалось.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8503:
	{
		MessageBox(NULL, L"Служба каталогов не смогла определить список объектов на удаление при осуществлении попытки удаления дерева.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8504:
	{
		MessageBox(NULL, L"Ошибка инициализации диспетчера учетных записей безопасности: %1.Состояние ошибки: 0x%2. Нажмите «ОК» для перезагрузки системы в режим восстановления службы каталогов. Более подробные сведения находятся в журнале.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8505:
	{
		MessageBox(NULL, L"Только администратор может изменить список членов группы администраторов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8506:
	{
		MessageBox(NULL, L"Невозможно изменить основной идентификатор группы для учетной записи контроллера домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8507:
	{
		MessageBox(NULL, L"Сделана попытка изменить основную схему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8508:
	{
		MessageBox(NULL, L"Добавление нового обязательного атрибута в существующий класс или необязательного атрибута в специализированный класс TОР, который не является наследуемым атрибутом (явно или неявно через механизм наследования, к примеру, добавляя или удаляя вспомогательный класс), — недопустимо.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8509:
	{
		MessageBox(NULL, L"Обновление схемы не разрешено для DC, поскольку DC не является владельцем роли FSMO.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8510:
	{
		MessageBox(NULL, L"Объект данного класса не может быть создан в контейнере схемы. В контейнере схемы можно создать только объекты типа attribute-schema и class-schema.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8511:
	{
		MessageBox(NULL, L"Установка реплики или потомка не смогла получить атрибут objectVersion в контейнере схемы в исходном DC. Атрибут отсутствует в контейнере схемы или у вас отсутствуют права на чтение атрибута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8512:
	{
		MessageBox(NULL, L"Установка реплики или потомка не смогла получить атрибут objectVersion в секции SCHEMA файла schema.ini в папке system32.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8513:
	{
		MessageBox(NULL, L"Указан недопустимый тип группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8514:
	{
		MessageBox(NULL, L"Нельзя вложить глобальные группы в смешанный домен, если группа имеет включенную безопасность.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8515:
	{
		MessageBox(NULL, L"Нельзя вложить локальные группы в смешанный домен, если группа имеет включенную безопасность.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8516:
	{
		MessageBox(NULL, L"Локальная группа не может быть членом глобальной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8517:
	{
		MessageBox(NULL, L"Универсальная группа не может быть членом глобальной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8518:
	{
		MessageBox(NULL, L"Локальная группа не может быть членом универсальной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8519:
	{
		MessageBox(NULL, L"Глобальная группа не может иметь меж-доменного участника.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8520:
	{
		MessageBox(NULL, L"Локальная меж-доменная группа не может быть членом другой локальной группы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8521:
	{
		MessageBox(NULL, L"Группу с основными участниками нельзя изменить на группу с отключенной безопасностью.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8522:
	{
		MessageBox(NULL, L"Ошибка преобразования строки по умолчанию SD на объекте class-schema при загрузке кэша схемы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8523:
	{
		MessageBox(NULL, L"Только для DSA, настроенных как серверы глобального каталога, разрешена роль хозяина именования доменов FSMO. (Применяется только к серверам Windows 2000)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8524:
	{
		MessageBox(NULL, L"Операция DSA не смогла быть выполнена, т.к. произошла ошибка поиска в DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8525:
	{
		MessageBox(NULL, L"При изменении имени узла DNS для объекта, значения имени участника службы сохранить при синхронизации нельзя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8526:
	{
		MessageBox(NULL, L"Не удается прочесть атрибут дескриптора безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8527:
	{
		MessageBox(NULL, L"Требуемый объект не найден, но найден объект с таким разделом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8528:
	{
		MessageBox(NULL, L"Недопустимый синтаксис добавляемого связанного атрибута. Прямые ссылки могут иметь синтаксис 2.5.5.1, 2.5.5.7 и 2.5.5.14, а обратные ссылки — только синтаксис 2.5.5.1", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8529:
	{
		MessageBox(NULL, L"Диспетчеру учетных записей безопасности нужно получить пароль загрузки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8530:
	{
		MessageBox(NULL, L"Диспетчеру учетных записей безопасности нужно получить ключ загрузки с дискеты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8531:
	{
		MessageBox(NULL, L"Невозможно запустить службу каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8532:
	{
		MessageBox(NULL, L"Не удается запустить службы каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8533:
	{
		MessageBox(NULL, L"Подключение между сервером и клиентом требует пакетного или более высокого уровня безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8534:
	{
		MessageBox(NULL, L"Исходный домен не может быть в одном лесу с конечным доменом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8535:
	{
		MessageBox(NULL, L"Конечный домен должен быть в этом домене.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8536:
	{
		MessageBox(NULL, L"Операция требует включенного аудита конечного домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8537:
	{
		MessageBox(NULL, L"Операция не может найти контроллер домена для исходного домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8538:
	{
		MessageBox(NULL, L"Исходный объект должен быть группой или пользователем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8539:
	{
		MessageBox(NULL, L"SID исходного объекта уже существует в конечном лесу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8540:
	{
		MessageBox(NULL, L"Исходный и конечный объект должны быть одного типа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8541:
	{
		MessageBox(NULL, L"Ошибка инициализации диспетчера учетных записей безопасности: %1.Состояние ошибки: 0x%2. Нажмите «ОК» для перезагрузки системы в безопасном режиме. Более подробная информация содержится в журнале событий.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8542:
	{
		MessageBox(NULL, L"Не удалось включить информацию о схеме в запрос на репликацию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8543:
	{
		MessageBox(NULL, L"Не удалось завершить операцию репликации из-за несовместимости с предыдущей схемой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8544:
	{
		MessageBox(NULL, L"Не удалось завершить операцию репликации из-за несовместимости с предыдущей схемой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8545:
	{
		MessageBox(NULL, L"Обновление репликации не проведено, поскольку либо источник либо Приемник еще не получил информацию о последней операции перемещения между доменами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8546:
	{
		MessageBox(NULL, L"Не удалось удалить, указанный домен поскольку еще существуют контроллеры этого домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8547:
	{
		MessageBox(NULL, L"Выполнение запрошенной операции возможно только на сервере глобального каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8548:
	{
		MessageBox(NULL, L"Локальная группа может быть членом другой локальной группы только того же домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8549:
	{
		MessageBox(NULL, L"Участники внешней безопасности не могут быть членами универсальных групп.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8550:
	{
		MessageBox(NULL, L"Атрибут нельзя реплицировать в GC по причинам безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8551:
	{
		MessageBox(NULL, L"Не удается достичь контрольной точки PDC, поскольку в данный момент производится слишком много модификаций.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8552:
	{
		MessageBox(NULL, L"Операция требует включенного аудита конечного домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8553:
	{
		MessageBox(NULL, L"Основные объекты-участники безопасности могут быть созданы только внутри контекстов именования доменов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8554:
	{
		MessageBox(NULL, L"Не удалось создать имя участника службы (SPN), поскольку предложенное имя узла имеет неподходящий формат.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8555:
	{
		MessageBox(NULL, L"Пропущен фильтр, который использует построенные атрибуты.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8556:
	{
		MessageBox(NULL, L"Значение атрибута unicodePwd должно заключаться в двойные кавычки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8557:
	{
		MessageBox(NULL, L"Компьютер не может быть присоединен к домену. На этом домене превышено максимальное допустимое число учетных записей. Обратитесь к системному администратору с просьбой отменить это ограничение или увеличить значение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8558:
	{
		MessageBox(NULL, L"По причинам безопасности, операция должна выполняться на назначенном контроллере домена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8559:
	{
		MessageBox(NULL, L"По причинам безопасности, на исходном контроллере домена должен быть установлена Windows NT 4 с пакетом обновления 4 или более поздняя операционная система.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8560:
	{
		MessageBox(NULL, L"Критические объекты службы каталогов не могут быть удалены во время удаления дерева каталогов. Удаление дерева может выполнено лишь частично.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8561:
	{
		MessageBox(NULL, L"Не удается запустить службу каталогов из-за следующей ошибки: %1.Состояние ошибки: 0x%2. ОК — завершить работу. Дальнейшую диагностику можно провести с помощью консоли восстановления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8562:
	{
		MessageBox(NULL, L"Ошибка при запуске диспетчера учетных записей безопасности из-за следующей ошибки: %1.Состояние ошибки: 0x%2. ОК — завершить работу. Дальнейшую диагностику можно провести с помощью консоли восстановления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8563:
	{
		MessageBox(NULL, L"Эта версия Windows слишком стара для полной поддержки леса каталогов. Чтобы сервер смог стать контроллером домена в этом лесу, необходимо обновить на нем операционную систему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8564:
	{
		MessageBox(NULL, L"Эта версия Windows слишком стара для полной поддержки домена. Чтобы сервер смог стать контроллером домена, необходимо обновить на нем операционную систему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8565:
	{
		MessageBox(NULL, L"Эта версия Windows уже не поддерживает версию поведения для данного леса. Чтобы сервер мог стать контроллером домена в лесу, необходимо выбрать более новую версию поведения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8566:
	{
		MessageBox(NULL, L"Эта версия Windows уже не поддерживает версию поведения для данного домена. Чтобы сервер мог стать контроллером домена, необходимо выбрать более новую версию поведения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8567:
	{
		MessageBox(NULL, L"Эта версия Windows несовместима с версией поведения домена или леса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8568:
	{
		MessageBox(NULL, L"Версия поведения не может быть поднята до указанного значения, так как имеются контроллеры домена с версиями ниже запрошенной.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8569:
	{
		MessageBox(NULL, L"Версия поведения не может быть поднята, пока домен находится в смешанном режиме работы. Следует вначале перевести домен в основной режим работы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8570:
	{
		MessageBox(NULL, L"Требуемая порядок сортировки не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8571:
	{
		MessageBox(NULL, L"Найден объект не неуникальным именем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8572:
	{
		MessageBox(NULL, L"Учетная запись для компьютера была создана в системе версии ниже NT4. Ее следует создать заново.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8573:
	{
		MessageBox(NULL, L"Версия базы данных не соответствует версии хранилищу.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8574:
	{
		MessageBox(NULL, L"Не удается продолжить операцию из-за нескольких конфликтующих команд.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8575:
	{
		MessageBox(NULL, L"Не удается найти правильный домен ссылки на дескриптор безопасности для раздела.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8576:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: Это идентификатор связи зарезервирован.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8577:
	{
		MessageBox(NULL, L"Ошибка обновления схемы: Нет доступных идентификаторов связи.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8578:
	{
		MessageBox(NULL, L"Группа учетных записей не может иметь универсальную группу в качестве члена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8579:
	{
		MessageBox(NULL, L"Переименование и перемещение заголовков контекста именования и объектов, доступных только для чтения, запрещены.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8580:
	{
		MessageBox(NULL, L"Перемещение объектов из контекста именования схемы запрещено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8581:
	{
		MessageBox(NULL, L"Для объекта был установлен системный флаг, запрещающий его перемещение и переименование.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8582:
	{
		MessageBox(NULL, L"Объект не может менять прародительский контейнер. Перемещение для него не запрещено, однако ограничено родственными контейнерами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8583:
	{
		MessageBox(NULL, L"Полное сопоставление не удалось, будет создана ссылка на другой лес.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8584:
	{
		MessageBox(NULL, L"Запрошенное действие не поддерживается стандартным сервером.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8585:
	{
		MessageBox(NULL, L"Нет доступа к разделу Active Directory с удаленного сервера. Убедитесь в наличии хотя бы одного работающего сервера для этого раздела.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8586:
	{
		MessageBox(NULL, L"Не удается проверить предложенное имя контекста именования или раздела, так как каталог не содержит и/или не может обратиться вышестоящей реплике контекста именования. Проверьте правильность регистрации родительского контекста именования в DNS, а также доступность хотя бы одной реплики этого контекста хозяину именования доменов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8587:
	{
		MessageBox(NULL, L"Предел потоков для этого запроса был превышен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8588:
	{
		MessageBox(NULL, L"Глобальный сервер каталогов не входит в ближайший узел.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8589:
	{
		MessageBox(NULL, L"Служба каталогов не может создать имя участника службы (SPN), с помощью которого будет выполняться взаимная проверка подлинности с сервером, так как у соответствующего объекта для сервера в локальной базе данных службы каталогов отсутствует атрибут serverReference.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8590:
	{
		MessageBox(NULL, L"Службу каталогов не удалось перевести в однопользовательский режим.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8591:
	{
		MessageBox(NULL, L"Служба каталогов не может проинтерпретировать сценарий из-за синтаксической ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8592:
	{
		MessageBox(NULL, L"Служба каталогов не может обработать сценарий из-за ошибки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8593:
	{
		MessageBox(NULL, L"Служба каталогов не может выполнить операцию, так как вовлеченныев нее серверы относятся к разным состояниям реплицирования (что чаще всего связано свыполняющимся переименованием домена).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8594:
	{
		MessageBox(NULL, L"Привязка службы каталогов должна быть возобновлена из-за измененийв данных о серверных расширениях.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8595:
	{
		MessageBox(NULL, L"Операция недопустима для отключенной перекрестной ссылки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8596:
	{
		MessageBox(NULL, L"Ошибка при обновлении схемы: отсутствуют значения для msDS-IntId.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8597:
	{
		MessageBox(NULL, L"Ошибка при обновлении схемы: найдены дубликаты msDS-INtId. Повторите операцию.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8598:
	{
		MessageBox(NULL, L"Ошибка при удалении схемы: атрибут использован в rDNAttID.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8599:
	{
		MessageBox(NULL, L"Службе каталогов не удалось авторизовать запрос.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8600:
	{
		MessageBox(NULL, L"Служба каталогов не может обработать недопустимый сценарий.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 8601:
	{
		MessageBox(NULL, L"Ошибка удаленной операции по созданию перекрестной ссылки для FSMO хозяина именования доменов. Сведения об ошибке находятся в расширенных данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9001:
	{
		MessageBox(NULL, L"DNS-сервер не смог обработать этот формат.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9002:
	{
		MessageBox(NULL, L"Ошибка DNS-сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9003:
	{
		MessageBox(NULL, L"DNS-имя не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9004:
	{
		MessageBox(NULL, L"DNS-запрос не поддерживается сервером имен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9005:
	{
		MessageBox(NULL, L"Операция DNS отвергнута.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9006:
	{
		MessageBox(NULL, L"Существует DNS-имя, которое не должно существовать.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9007:
	{
		MessageBox(NULL, L"Существует набор DNS RR, который не должен существовать.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9008:
	{
		MessageBox(NULL, L"Не существует набор DNS RR, который должен существовать.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9009:
	{
		MessageBox(NULL, L"DNS-сервер не обслуживает эту зону.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9010:
	{
		MessageBox(NULL, L"При обновлении DNS-имя вне этой зоны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9016:
	{
		MessageBox(NULL, L"Невозможно проверить подпись DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9017:
	{
		MessageBox(NULL, L"Неверный раздел DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9018:
	{
		MessageBox(NULL, L"Срок действия подписи DNS истек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9501:
	{
		MessageBox(NULL, L"Для данного запроса записей в DNS не найдено.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9502:
	{
		MessageBox(NULL, L"Неверный пакет DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9503:
	{
		MessageBox(NULL, L"Пакет DNS отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9504:
	{
		MessageBox(NULL, L"Ошибка DNS, проверьте RCODE.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9505:
	{
		MessageBox(NULL, L"Небезопасный пакет DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9551:
	{
		MessageBox(NULL, L"Недопустимый тип DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9552:
	{
		MessageBox(NULL, L"Недопустимый IP-адрес.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9553:
	{
		MessageBox(NULL, L"Недопустимое свойство.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9554:
	{
		MessageBox(NULL, L"Повторите операцию DNS позже еще раз.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9555:
	{
		MessageBox(NULL, L"Запись для указанного имени и типа не является уникальной.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9556:
	{
		MessageBox(NULL, L"DNS-имя не соответствует спецификации RFC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9557:
	{
		MessageBox(NULL, L"Это DNS-имя является полным DNS-именем.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9558:
	{
		MessageBox(NULL, L"DNS-имя, разделенное точками (multi-label).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9559:
	{
		MessageBox(NULL, L"DNS-имя является именем, состоящим из одной части.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9560:
	{
		MessageBox(NULL, L"Сетевое имя содержит недопустимые символы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9561:
	{
		MessageBox(NULL, L"DNS-имя состоит только из цифр.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9562:
	{
		MessageBox(NULL, L"Запрошенная операция недопустима для корневого сервера DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9601:
	{
		MessageBox(NULL, L"Зона DNS не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9602:
	{
		MessageBox(NULL, L"Информация о зоне DNS недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9603:
	{
		MessageBox(NULL, L"Недопустимая операция на зоне DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9604:
	{
		MessageBox(NULL, L"Недопустимая конфигурация зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9605:
	{
		MessageBox(NULL, L"В зоне DNS отсутствует начальная запись зоны (SOA).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9606:
	{
		MessageBox(NULL, L"В зоне DNS отсутствует запись о сервере имен (NS).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9607:
	{
		MessageBox(NULL, L"Зона DNS заблокирована.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9608:
	{
		MessageBox(NULL, L"Ошибка создания зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9609:
	{
		MessageBox(NULL, L"Зона DNS уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9610:
	{
		MessageBox(NULL, L"Автоматическая зона DNS уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9611:
	{
		MessageBox(NULL, L"Недопустимый тип зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9612:
	{
		MessageBox(NULL, L"Вторичная зона DNS требует основного IP-адреса.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9613:
	{
		MessageBox(NULL, L"Зона DNS не является дополнительной зоной.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9614:
	{
		MessageBox(NULL, L"Нужен вторичный IP-адрес.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9615:
	{
		MessageBox(NULL, L"Ошибка инициализации WINS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9616:
	{
		MessageBox(NULL, L"Требуется сервер WINS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9617:
	{
		MessageBox(NULL, L"Ошибка вызова инициализации NBTSTAT.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9618:
	{
		MessageBox(NULL, L"Недопустимое удаление начальной записи зоны (SOA)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9619:
	{
		MessageBox(NULL, L"Условная зона перенаправления для этого имени уже имеется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9620:
	{
		MessageBox(NULL, L"Зона должна быть настроена с одним или несколькими IP-адресами главного сервера DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9621:
	{
		MessageBox(NULL, L"Операция не может быть выполнена из-за неактивности зоны.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9651:
	{
		MessageBox(NULL, L"Основная зона DNS требует файла данных.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9652:
	{
		MessageBox(NULL, L"Недопустимое имя файла данных зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9653:
	{
		MessageBox(NULL, L"Ошибка открытия файла данных зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9654:
	{
		MessageBox(NULL, L"Ошибка записи в файл данных зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9655:
	{
		MessageBox(NULL, L"Ошибка чтения из файла данных зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9701:
	{
		MessageBox(NULL, L"Запись DNS не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9702:
	{
		MessageBox(NULL, L"Ошибка формата записи DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9703:
	{
		MessageBox(NULL, L"Ошибка создания узла DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9704:
	{
		MessageBox(NULL, L"Неизвестный тип записи DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9705:
	{
		MessageBox(NULL, L"Таймаут записи DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9706:
	{
		MessageBox(NULL, L"Имя находится вне зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9707:
	{
		MessageBox(NULL, L"Обнаружен цикл CNAME.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9708:
	{
		MessageBox(NULL, L"Узел является записью CNAME DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9709:
	{
		MessageBox(NULL, L"Для указанного имени уже существует запись CNAME.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9710:
	{
		MessageBox(NULL, L"Запись только в корневой зоне DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9711:
	{
		MessageBox(NULL, L"Запись DNS уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9712:
	{
		MessageBox(NULL, L"Ошибка данных вторичной зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9713:
	{
		MessageBox(NULL, L"Не удается создать кэшированные данные DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9714:
	{
		MessageBox(NULL, L"DNS-имя не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9715:
	{
		MessageBox(NULL, L"Не удается создать запись указателя (PTR).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9716:
	{
		MessageBox(NULL, L"Домен DNS был возращен после удаления.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9717:
	{
		MessageBox(NULL, L"Служба каталогов недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9718:
	{
		MessageBox(NULL, L"Зона DNS уже существует в службе каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9719:
	{
		MessageBox(NULL, L"DNS-сервер не создает или не читает корневой файл для интегрированной зоны DNS службы каталогов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9751:
	{
		MessageBox(NULL, L"Завершение DNS AXFR (передачи зоны).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9752:
	{
		MessageBox(NULL, L"Ошибка передачи зоны DNS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9753:
	{
		MessageBox(NULL, L"Добавлен WINS-сервер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9801:
	{
		MessageBox(NULL, L"Вызов безопасного обновления требует запрос на обновление для продолжения работы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9851:
	{
		MessageBox(NULL, L"Сетевой протокол TCP/IP не установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9852:
	{
		MessageBox(NULL, L"Для локальной системы не настроено ни одного DNS-сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9901:
	{
		MessageBox(NULL, L"Указанный раздел каталога не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9902:
	{
		MessageBox(NULL, L"Указанный раздел каталога уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9903:
	{
		MessageBox(NULL, L"Служба каталогов не зарегистрирована в указанном разделе каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 9904:
	{
		MessageBox(NULL, L"Служба каталогов уже зарегистрирована в указанном разделе каталога.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10004:
	{
		MessageBox(NULL, L"Операция блокирования прервана вызовом WSACancelBlockingCall.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10009:
	{
		MessageBox(NULL, L"Предоставленный дескриптор файла неверен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10013:
	{
		MessageBox(NULL, L"Сделана попытка доступа к сокету методом, запрещенным правами доступа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10014:
	{
		MessageBox(NULL, L"Система обнаружила недопустимый указатель адреса при попытке использовать в вызове аргумент указателя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10022:
	{
		MessageBox(NULL, L"Получен недопустимый аргумент.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10024:
	{
		MessageBox(NULL, L"Открыто слишком много сокетов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10035:
	{
		MessageBox(NULL, L"Операция на незаблокированном сокете не может быть завершена немедленно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10036:
	{
		MessageBox(NULL, L"Сейчас выполняется операция блокировки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10037:
	{
		MessageBox(NULL, L"На незаблокированном сокете сделана попытка выполнить операцию при наличии другой выполняемой операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10038:
	{
		MessageBox(NULL, L"Сделана попытка выполнить операцию на объекте, не являющемся сокетом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10039:
	{
		MessageBox(NULL, L"В операции на сокете пропущен обязательный адрес.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10040:
	{
		MessageBox(NULL, L"Сообщение, отправленное на сокет датаграмм, было больше, чем буфер внутренних сообщений или был превышен иной сетевой параметр. Также возможно, что буфер для принятия сообщения был меньше, чем размер сообщения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10041:
	{
		MessageBox(NULL, L"Протокол, указанный в вызове функции сокета, не поддерживает такую семантику для требуемого типа сокета.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10042:
	{
		MessageBox(NULL, L"Для вызова getsockopt или setsockopt был указан неизвестный, недопустимый или неподдерживаемый параметр или уровень.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10043:
	{
		MessageBox(NULL, L"Требуемый протокол не настроен в данной системе, или не существует его реализации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10044:
	{
		MessageBox(NULL, L"Поддержка указанного типа сокетов в этом семействе адресов отсутствует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10045:
	{
		MessageBox(NULL, L"Предпринятая операция не поддерживается для выбранного типа объекта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10046:
	{
		MessageBox(NULL, L"Данное семейство протоколов не настроено в системе, или оно не реализовано.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10047:
	{
		MessageBox(NULL, L"Адрес несовместим с выбранным протоколом.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10048:
	{
		MessageBox(NULL, L"Обычно разрешается одно использование адреса сокета (протокол/сетевой адрес/порт).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10049:
	{
		MessageBox(NULL, L"Требуемый адрес для своего контекста неверен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10050:
	{
		MessageBox(NULL, L"Операция на сокете обнаружила отключение сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10051:
	{
		MessageBox(NULL, L"Сделана попытка выполнить операцию на сокете при отключенной сети.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10052:
	{
		MessageBox(NULL, L"Подключение было разорвано из-за ошибки во время выполнения операции.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10053:
	{
		MessageBox(NULL, L"Программа на вашем хост-компьютере разорвала установленное подключение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10054:
	{
		MessageBox(NULL, L"Удаленный хост принудительно разорвал существующее подключение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10055:
	{
		MessageBox(NULL, L"Невозможно выполнить операцию на сокете, т.к. буфер слишком мал или очередь переполнена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10056:
	{
		MessageBox(NULL, L"Сделан запрос на подключение для уже подключенного сокета.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10057:
	{
		MessageBox(NULL, L"Запрос на отправку или получение данных (when sending on a datagram socket using a sendto call) no address was supplied.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10058:
	{
		MessageBox(NULL, L"Запрос на отправку или получение данных был запрещен, т.к. сокет уже отключен в данном направлении на основании прежней запроса на его отключение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10059:
	{
		MessageBox(NULL, L"Слишком много ссылок на некоторый ключевой объект.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10060:
	{
		MessageBox(NULL, L"Попытка установить соединение была безуспешной, т.к. от другого компьютера за требуемое время не получен нужный отклик, или было разорвано уже установленное соединение из-за неверного отклика уже подключенного компьютера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10061:
	{
		MessageBox(NULL, L"Подключение не установлено, т.к. конечный компьютер отверг запрос на подключение.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10062:
	{
		MessageBox(NULL, L"Не удается преобразовать имя.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10063:
	{
		MessageBox(NULL, L"Компонент имени или все имя слишком длинно.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10064:
	{
		MessageBox(NULL, L"Произошла ошибка операции на сокете, т.к. конечный хост выключен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10065:
	{
		MessageBox(NULL, L"Сделана попытка выполнить операцию на сокете для недоступного хоста.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10066:
	{
		MessageBox(NULL, L"Нельзя удалить пустой каталог.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10067:
	{
		MessageBox(NULL, L"Реализация Windows Sockets может иметь ограничения на количество одновременно выполняющихся приложений.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10068:
	{
		MessageBox(NULL, L"Квота исчерпана.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10069:
	{
		MessageBox(NULL, L"Дисковая квота исчерпана.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10070:
	{
		MessageBox(NULL, L"Ссылка дескриптора файла более недоступна.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10071:
	{
		MessageBox(NULL, L"Элемент локально недоступен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10091:
	{
		MessageBox(NULL, L"WSAStartup не может выполняться в данное время, т.к. недоступна основная система, используемая для работы сетевых служб .", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10092:
	{
		MessageBox(NULL, L"Указанная версия Windows Sockets не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10093:
	{
		MessageBox(NULL, L"Или приложение не вызвало WSAStartup, или произошла ошибка в WSAStartup.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10101:
	{
		MessageBox(NULL, L"Возвращено WSARecv или WSARecvFrom, чтобы показать — удаленная сторона инициировала правильную последовательность отключения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10102:
	{
		MessageBox(NULL, L"WSALookupServiceNext не может возвратить каких-либо дополнительных результатов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10103:
	{
		MessageBox(NULL, L"Был сделан вызов WSALookupServiceEnd, когда этот вызов еще обрабатывался. Обрабатываемый вызов был прерван.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10104:
	{
		MessageBox(NULL, L"Недопустимая таблица вызова процедуры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10105:
	{
		MessageBox(NULL, L"Недопустимый поставщик услуг.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10106:
	{
		MessageBox(NULL, L"Не удается загрузить или инициализировать нужного поставщика услуг.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10107:
	{
		MessageBox(NULL, L"Произошла ошибка системного вызова, что недопустимо.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10108:
	{
		MessageBox(NULL, L"Неизвестная служба. Эта служба отсутствует в указанном пространстве имен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10109:
	{
		MessageBox(NULL, L"Указанный класс не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10110:
	{
		MessageBox(NULL, L"WSALookupServiceNext не может возвратить каких-либо дополнительных результатов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10111:
	{
		MessageBox(NULL, L"Был сделан вызов WSALookupServiceEnd, когда этот вызов еще обрабатывался. Обрабатываемый вызов был прерван.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 10112:
	{
		MessageBox(NULL, L"Произошла ошибка запроса к базе данных, т.к. запрос был активно отвергнут.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11001:
	{
		MessageBox(NULL, L"Этот хост неизвестен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11002:
	{
		MessageBox(NULL, L"Обычно — это временная ошибка, возникающая во время разрешения имени узла, и означающая, что локальный сервер не получил ответа от заслуживающего доверие сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11003:
	{
		MessageBox(NULL, L"При просмотре базы данных произошла неисправимая ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11004:
	{
		MessageBox(NULL, L"Затребованное имя допустимо и оно найдено в базе данных,но для имени отсутствуют связанные с ним данные, которые были разрешены для него.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11005:
	{
		MessageBox(NULL, L"Получен по меньшей мере один резерв.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11006:
	{
		MessageBox(NULL, L"Получен по меньшей мере один путь.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11007:
	{
		MessageBox(NULL, L"Отправители отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11008:
	{
		MessageBox(NULL, L"Получатели отсутствуют.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11009:
	{
		MessageBox(NULL, L"Резерв подтвержден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11010:
	{
		MessageBox(NULL, L"Произошла ошибка из-за недостатка ресурсов.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11011:
	{
		MessageBox(NULL, L"Отвергнуто по административным причинам — неправильные учетные данные.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11012:
	{
		MessageBox(NULL, L"Неизвестный или вызывающий конфликты стиль.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11013:
	{
		MessageBox(NULL, L"Обнаружена проблема общего типа с буфером filterspec или providerspecific.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11014:
	{
		MessageBox(NULL, L"Обнаружена проблема с частью «flowspec».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11015:
	{
		MessageBox(NULL, L"Общая ошибка QOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11016:
	{
		MessageBox(NULL, L"В спецификаторах потока найден недопустимый или нераспознанный тип службы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11017:
	{
		MessageBox(NULL, L"Недопустимый или нераспознанный спецификатор потока был найден в структуре QOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11018:
	{
		MessageBox(NULL, L"Недопустимый буфер QOS, определяемый поставщиком.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11019:
	{
		MessageBox(NULL, L"Использован недопустимый стиль фильтра QOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11020:
	{
		MessageBox(NULL, L"Использован недопустимый стиль фильтра QOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11021:
	{
		MessageBox(NULL, L"В FLOWDESCRIPTOR был задан неверный номер QOS FILTERSPEC.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11022:
	{
		MessageBox(NULL, L"В определяемом поставщиком буфере QOS задан объект с неверным полем ObjectLength.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11023:
	{
		MessageBox(NULL, L"В структуре QOS заданы неверные номера дескрипторов потока.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11024:
	{
		MessageBox(NULL, L"В буфере QOS, задаваемом поставщиком, найден нераспознанный объект.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11025:
	{
		MessageBox(NULL, L"В буфере QOS, задаваемом поставщиком, найден объект с недопустимой политикой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11026:
	{
		MessageBox(NULL, L"В списке дескрипторов потока обнаружен недопустимый дескриптор потока QOS.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11027:
	{
		MessageBox(NULL, L"Недопустимый или нераспознанный спецификатор потока обнаружен в буфере QOS, определяемом поставщиком.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11028:
	{
		MessageBox(NULL, L"Недопустимый FILTERSPEC обнаружен в буфере QOS, определяемом поставщиком.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11029:
	{
		MessageBox(NULL, L"Недопустимый объект режима изменения формы обнаружен в буфере QOS, определяемом поставщиком.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11030:
	{
		MessageBox(NULL, L"Недопустимый объект формирования уровня обнаружен в буфере QOS, определяемом поставщиком.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 11031:
	{
		MessageBox(NULL, L"Зарезервированный элемент политики обнаружен в буфере QOS, определяемом поставщиком.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13000:
	{
		MessageBox(NULL, L"Указанная политика быстрого режима уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13001:
	{
		MessageBox(NULL, L"Указанная политика быстрого режима не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13002:
	{
		MessageBox(NULL, L"Указанная политика быстрого режима сейчас используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13003:
	{
		MessageBox(NULL, L"Указанная политика основного режима уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13004:
	{
		MessageBox(NULL, L"Указанная политика основного режима не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13005:
	{
		MessageBox(NULL, L"Указанная политика основного режима сейчас используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13006:
	{
		MessageBox(NULL, L"Указанный фильтр основного режима уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13007:
	{
		MessageBox(NULL, L"Указанный фильтр основного режима не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13008:
	{
		MessageBox(NULL, L"Указанный фильтр транспортного режима уже существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13009:
	{
		MessageBox(NULL, L"Указанный фильтр транспортного режима не существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13010:
	{
		MessageBox(NULL, L"Указанный список проверки подлинности для основного режима существует.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13011:
	{
		MessageBox(NULL, L"Указанный список проверки подлинности основного режима не найден.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13012:
	{
		MessageBox(NULL, L"Указанная политика быстрого режима сейчас используется.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13013:
	{
		MessageBox(NULL, L"Указанная политика основного режима не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13014:
	{
		MessageBox(NULL, L"Указанная политика быстрого режима не найдена.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13015:
	{
		MessageBox(NULL, L"Файл манифеста содержит одну или несколько синтаксических ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13016:
	{
		MessageBox(NULL, L"Приложение попыталось активировать отключенный контекст активации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13017:
	{
		MessageBox(NULL, L"Указанный ключ соответствия не обнаружен ни в одном из активных контекстов активации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13018:
	{
		MessageBox(NULL, L"Идет процесс удаления фильтра основного режима.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13019:
	{
		MessageBox(NULL, L"Идет процесс удаления транспортного фильтра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13020:
	{
		MessageBox(NULL, L"Идет процесс удаления туннельного фильтра.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13021:
	{
		MessageBox(NULL, L"Идет процесс удаления политики основного режима.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13022:
	{
		MessageBox(NULL, L"Идет процесс удаления пакета проверки подлинности основного режима.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13023:
	{
		MessageBox(NULL, L"Идет процесс удаления политики быстрого режима.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13800:
	{
		MessageBox(NULL, L"ERROR_IPSEC_IKE_NEG_STATUS_BEGIN", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13801:
	{
		MessageBox(NULL, L"Неприемлемые учетные данные проверки подлинности IKE", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13802:
	{
		MessageBox(NULL, L"Неприемлемые атрибуты IKE-безопасности", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13803:
	{
		MessageBox(NULL, L"Выполняется согласование IKE", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13804:
	{
		MessageBox(NULL, L"Ошибка обработки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13805:
	{
		MessageBox(NULL, L"Таймаут согласования", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13806:
	{
		MessageBox(NULL, L"IKE не удалось найти действительный сертификат компьютера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13807:
	{
		MessageBox(NULL, L"IKE SA удалено другим узлом до того, как закончено установление", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13808:
	{
		MessageBox(NULL, L"IKE SA удалено до того, как закончено установление", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13809:
	{
		MessageBox(NULL, L"Запрос на согласование слишком долго находился в очереди", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13810:
	{
		MessageBox(NULL, L"Запрос на согласование слишком долго находился в очереди", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13811:
	{
		MessageBox(NULL, L"Запрос на согласование слишком долго находился в очереди", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13812:
	{
		MessageBox(NULL, L"Запрос на согласование слишком долго находился в очереди", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13813:
	{
		MessageBox(NULL, L"Нет отклика", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13814:
	{
		MessageBox(NULL, L"Согласование выполнялось слишком долго", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13815:
	{
		MessageBox(NULL, L"Согласование выполнялось слишком долго", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13816:
	{
		MessageBox(NULL, L"Неопознанная ошибка", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13817:
	{
		MessageBox(NULL, L"Ошибка проверки отзыва сертификата", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13818:
	{
		MessageBox(NULL, L"Недопустимое использование ключа сертификата", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13819:
	{
		MessageBox(NULL, L"Недопустимый тип сертификата", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13820:
	{
		MessageBox(NULL, L"Нет закрытого ключа, связанного с этим сертификатом компьютера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13822:
	{
		MessageBox(NULL, L"Ошибка обработки Диффи-Хелмана", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13824:
	{
		MessageBox(NULL, L"Недопустимый заголовок", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13825:
	{
		MessageBox(NULL, L"Нет настроенной политики", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13826:
	{
		MessageBox(NULL, L"Ошибка при проверке подписи файла", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13827:
	{
		MessageBox(NULL, L"Не удалось выполнить проверку подлинности с помощью Kerberos", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13828:
	{
		MessageBox(NULL, L"Сертификат точки не имеет открытого ключа", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13829:
	{
		MessageBox(NULL, L"Ошибка обработки ошибки полезных данных", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13830:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных SA", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13831:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных Proposal", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13832:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных Transform", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13833:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных KE", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13834:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных ID", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13835:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных сертификата", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13836:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных запроса сертификата", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13837:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных хеша", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13838:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных подписи", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13839:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных Nonce", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13840:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных извещения", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13841:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных удаления", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13842:
	{
		MessageBox(NULL, L"Ошибка обработки полезных данных VendorId", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13843:
	{
		MessageBox(NULL, L"Получены недопустимые полезные данные", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13844:
	{
		MessageBox(NULL, L"Загружено программное SA", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13845:
	{
		MessageBox(NULL, L"Разорвано программное SA", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13846:
	{
		MessageBox(NULL, L"Получен недопустимый файл «cookie».", L"Ошибка", MB_ICONERROR);
		break;
	}
	// ^([0-9]+):	(.*?)[\.|]
	case 13847:
	{
		MessageBox(NULL, L"Узлу не удалось отправить действительный сертификат компьютера", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13848:
	{
		MessageBox(NULL, L"Ошибка проверки отзыва сертификата точки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13849:
	{
		MessageBox(NULL, L"Новая политика сделала недопустимыми SA, сформированные при старой политике", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13850:
	{
		MessageBox(NULL, L"Отсутствует политика IKE для основного режима.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13851:
	{
		MessageBox(NULL, L"Не удалось включить привилегии TCB.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13852:
	{
		MessageBox(NULL, L"Не удалось загрузить SECURITY.DLL.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13853:
	{
		MessageBox(NULL, L"Не удалось получить адрес доставки таблицы функций безопасности от SSPI.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13854:
	{
		MessageBox(NULL, L"Не удалось запросить пакет безопасности Kerberos для получения максимального размера маркера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13855:
	{
		MessageBox(NULL, L"Не удалось получить учетные данные сервера Kerberos для службы ISAKMP/ERROR_IPSEC_IKE. Проверка Kerberos работать не будет. Наиболее вероятная причина — отсутствие членства в домене. Если компьютер входит в рабочую группу, это нормально.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13856:
	{
		MessageBox(NULL, L"Не удалось определить имя SSPI для службы ISAKMP/ERROR_IPSEC_IKE (QueryCredentialsAttributes).", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13857:
	{
		MessageBox(NULL, L"Не удалось получить новый SPI для входящего SA от драйвера LPSEC. Вероятная причина: драйвер не имеет подходящего фильтра. Проверьте вашу политику и фильтры в ней.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13858:
	{
		MessageBox(NULL, L"Недопустимый фильтр", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13859:
	{
		MessageBox(NULL, L"Ошибка выделения памяти.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13860:
	{
		MessageBox(NULL, L"Не удалось добавить сопоставление безопасности к драйверу IPSec. Вероятная причина: согласование IKE потребовало слишком длительного промежутка времени. Если проблема повторяется, уменьшите нагрузку на этот компьютер.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13861:
	{
		MessageBox(NULL, L"Недопустимая политика", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13862:
	{
		MessageBox(NULL, L"Недопустимый DOI", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13863:
	{
		MessageBox(NULL, L"Недопустимая ситуация", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13864:
	{
		MessageBox(NULL, L"Ошибка обработки Диффи-Хелмана", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13865:
	{
		MessageBox(NULL, L"Недопустимая группа Диффи-Хелмана", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13866:
	{
		MessageBox(NULL, L"Ошибка при шифровании полезных данных", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13867:
	{
		MessageBox(NULL, L"Ошибка при расшифровке полезных данных", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13868:
	{
		MessageBox(NULL, L"Ошибка сопоставления групповой политики", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13869:
	{
		MessageBox(NULL, L"Не поддерживаемый код (ID)", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13870:
	{
		MessageBox(NULL, L"Ошибка при проверке хеша", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13871:
	{
		MessageBox(NULL, L"Неправильный хеш-алгоритм", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13872:
	{
		MessageBox(NULL, L"Неправильный размер хеша", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13873:
	{
		MessageBox(NULL, L"Неправильный алгоритм шифрования", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13874:
	{
		MessageBox(NULL, L"Недопустимый алгоритм проверки подлинности", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13875:
	{
		MessageBox(NULL, L"Неправильная подпись сертификата", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13876:
	{
		MessageBox(NULL, L"Ошибка загрузки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13877:
	{
		MessageBox(NULL, L"Удалено через RPC-вызов", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13878:
	{
		MessageBox(NULL, L"Для выполнения повторной инициализации создано временное состояние. Это не сбой.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13879:
	{
		MessageBox(NULL, L"Полученное время жизни меньше минимально разрешенного в Windows 2000. Исправьте политику на узле.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13881:
	{
		MessageBox(NULL, L"Длина ключа в сертификате слишком мала для настроенных требований безопасности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13882:
	{
		MessageBox(NULL, L"Превышено предельное число установленных для узла MM SA.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13883:
	{
		MessageBox(NULL, L"IKE получена политика, отключающая согласование.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 13884:
	{
		MessageBox(NULL, L"ERROR_IPSEC_IKE_NEG_STATUS_END", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14000:
	{
		MessageBox(NULL, L"Указанный раздел не существует в данном контексте активации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14001:
	{
		MessageBox(NULL, L"Приложение не было запущено, поскольку оно некорректно настроено. Повторная установка приложения может решить данную проблему.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14002:
	{
		MessageBox(NULL, L"Недопустимый формат привязки данных приложения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14003:
	{
		MessageBox(NULL, L"Указанная совокупность не установлена в системе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14004:
	{
		MessageBox(NULL, L"Файл манифеста не начинается с необходимого тега и информации форматирования.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14005:
	{
		MessageBox(NULL, L"Файл манифеста содержит одну или несколько синтаксических ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14006:
	{
		MessageBox(NULL, L"Приложение попыталось активировать отключенный контекст активации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14007:
	{
		MessageBox(NULL, L"Указанный ключ соответствия не обнаружен ни в одном из активных контекстов активации.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14008:
	{
		MessageBox(NULL, L"Версия компонента, требуемая для приложения, конфликтует с другой, уже активной версией.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14009:
	{
		MessageBox(NULL, L"Тип указанного раздела контекста активации не соответствует использованному запросу API.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14010:
	{
		MessageBox(NULL, L"Недостаток системных ресурсов потребовал отключения изолированной активации для текущего потока исполнения.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14011:
	{
		MessageBox(NULL, L"Ошибка попытки установки контекста активации по умолчанию, поскольку контекст активации по умолчанию уже установлен.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14012:
	{
		MessageBox(NULL, L"Указанный идентификатор группы кодировок не распознан.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14013:
	{
		MessageBox(NULL, L"Указанная кодировка не распознана.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14014:
	{
		MessageBox(NULL, L"Манифест содержит ссылку на недопустимый URI.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14015:
	{
		MessageBox(NULL, L"Манифест приложения содержит ссылку на зависимую совокупность, которая не установлена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14016:
	{
		MessageBox(NULL, L"Манифест совокупности, используемой приложением, ссылается на зависимую совокупность, которая не установлена", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14017:
	{
		MessageBox(NULL, L"Манифест содержит атрибут для недопустимого удостоверения совокупности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14018:
	{
		MessageBox(NULL, L"В манифесте отсутствует необходимая спецификация пространства имен по умолчанию для элемента совокупности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14019:
	{
		MessageBox(NULL, L"Манифест содержит спецификацию пространства имен по умолчанию для элемента совокупности, однако его значение отличается от «urn:schemas-microsoft-com:asm.v1″.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14020:
	{
		MessageBox(NULL, L"Частный манифест пересек точку повторной обработки", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14021:
	{
		MessageBox(NULL, L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, содержат файлы с одинаковыми именами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14022:
	{
		MessageBox(NULL, L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, содержат классы окон с одинаковыми именами.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14023:
	{
		MessageBox(NULL, L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют одинаковые идентификаторы CLSID для COM сервера.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14024:
	{
		MessageBox(NULL, L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют прокси для одинаковых идентификаторов IID интерфейсов COM.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14025:
	{
		MessageBox(NULL, L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют одинаковые идентификаторы TLBID для библиотеки типов COM.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14026:
	{
		MessageBox(NULL, L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют одинаковые идентификаторы ProgID COM.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14027:
	{
		MessageBox(NULL, L"Два или более компонентов, на которые непосредственно или не непосредственно ссылается манифест приложения, имеют разные версии одинакового компонента, что недопустимо.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14028:
	{
		MessageBox(NULL, L"Файл компонента не соответствует информации проверки, указанной в манифестекомпонента.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14029:
	{
		MessageBox(NULL, L"Манифест политики содержит одну или более синтаксических ошибок.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14030:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Ожидалась строковое значение, однако не было обнаружено открывающей кавычки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14031:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: В комментарии использован недопустимый синтаксис.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14032:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Имя начинается с недопустимого символа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14033:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Имя содержит недопустимый символ.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14034:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Строковое значение содержит недопустимый символ.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14035:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Недопустимый синтаксис в декларации XML.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14036:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: В тексте содержится недопустимый символ.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14037:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Отсутствует требуемый пробел.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14038:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Ожидался символ ‘>\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14039:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Ожидалась запятая.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14040:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Несогласованные круглые скобки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14041:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Внутренняя ошибка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14042:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Пробелы в данном месте не допускаются.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14043:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Достигнут конец файла в недопустимом состоянии текущей кодировки.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14044:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Утеряна круглая скобка.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14045:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Утерян символ одиночной или двойной кавычки (\\' или \").", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14046:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: В имени не допускаются несколько двойных кавычек.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14047:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Недопустимый символ для десятичной цифры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14048:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Недопустимый символ для шестнадцатеричной цифры.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14049:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Недопустимое значение символа UNICODE character для данной платформы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14050:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Ожидался пробел или ‘?\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14051:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Не ожидался конец тега в данном месте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14052:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Следующий теги не закрыты: %1.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14053:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Повторяющийся атрибут.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14054:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: В XML документе допускается только вышележащий элемент.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14055:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Ошибка на верхнем уровне документа.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14056:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Недопустимое описание XML.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14057:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: XML документ должен содержать элемент верхнего уровня.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14058:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Неожиданное окончание файла.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14059:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Описание параметров не может быть использовано в описании разметки во внутреннем наборе.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14060:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Элемент не закрыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14061:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Конечный элемент не содержит символа ‘>\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14062:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Символьная строка не закрыта.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14063:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Комментарий не закрыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14064:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Описание не закрыто.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14065:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Раздел CDATA не закрыт.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14066:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Префикс пространства имен не может начинаться с зарезервированной строки «xml».", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14067:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Система не поддерживает указанную кодировку.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14068:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Переключение с текущей кодировки на указанную не поддерживается.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14069:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Имя ‘xml\' зарезервировано и должно начинаться с маленькой буквы.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14070:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Изолированный атрибут должен иметь значение ‘yes\' или ‘no\'.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14071:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Изолированный атрибут не может быть использован во внешних сущностях.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14072:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Недопустимый номер версии.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14073:
	{
		MessageBox(NULL, L"Ошибка обработки манифеста: Утерян знак равенства между атрибутом и его значением.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14074:
	{
		MessageBox(NULL, L"Ошибка защиты совокупности: Не удается восстановить указанную совокупность.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14075:
	{
		MessageBox(NULL, L"Ошибка защиты совокупности: Открытый ключ для совокупности слишком короткий.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14076:
	{
		MessageBox(NULL, L"Ошибка защиты совокупности: Недопустимый каталог для совокупности, или он не соответствует манифесту совокупности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14077:
	{
		MessageBox(NULL, L"HRESULT не может быть транслирована в соответствующий код ошибки Win32.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14078:
	{
		MessageBox(NULL, L"Ошибка защиты совокупности: Отсутствует каталог для совокупности.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14079:
	{
		MessageBox(NULL, L"В указанном удостоверении совокупности отсутствует один или несколько атрибутов, которые должны присутствовать в данном контексте.", L"Ошибка", MB_ICONERROR);
		break;
	}

	case 14080:
	{
		MessageBox(NULL, L"Указанное удостоверение совокупности содержит один или несколько атрибутов, имена которых содержат недопустимые для XML имен символы.", L"Ошибка", MB_ICONERROR);
		break;
	}


	default:
		MessageBox(NULL, L"Неизвестная ошибка", L"Ошибка", MB_ICONERROR);
		break;
	}


}

// ^([0-9]):	(.*?)\.
// case $1:\n{ \n\tMessageBox(NULL, L"$2", L"Ошибка", MB_ICONERROR);\n}