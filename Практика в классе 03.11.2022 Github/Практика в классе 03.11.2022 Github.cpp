#include <iostream>
#include "Header.h"
int main()
{
    std::cout << "Lesson " << LESSON << "\n";
}
/*
    Git - система контроля версий
    Инструмент (набор консольных программ) для создания и управления
    "точками восстановления" состояния проекта.
    Одним из основных терминов является commit  - заархивированное 
    состояние всех файлов.
    Каждый следующий commit хранит информацию об изменениях по сравнению
    с предыдущим комитом.

    По традициям Git репозитории должны содержать только код и необходимые 
    настройки для него. Не должно быть в репозитории
    - исполнимых файлов(они собираются из кода)
    - промежуточных файлов компиляции(объектный код)
    - отладочные byajhvfwbb(debug)
    - загруженных пакетов(которые можно загрузить отдельно)
    - конфигурации IDE (пути к файлам, к компиляторам и тп)
    - конфиденциальная инф (логины, пароли, ключи и тп)
    полный перечень сильно зависит от язвка программирования и среды разработки (IDE)


    Github - сайт, сетевое хранилище репозиториев (https://github.com)
    Azure DevOps (dev.azure.com) - почта @student.itstep.org, пароль от майстата
    BitBucket (https://bitbucket.org)

    Создание репозитория
    Репозиторием явл папка, для того, чтобы сделать папку репозитория
    ее надо инициализировать (Git init)
    |
    Создаем файл исключение (.gitignore) - текстовый файл 
    с перечнем того, что НЕ ДОЛЖНО созраняться в комитах
 -->   Как правильно, IDE содержит рекомендованные файлы, если нет, то
 -->   можно подобрать образцы (https://github.com/github/gitignore (скачать файл
 -->   для нужного языка, переименовать в .gitignore
 -->   и поместить в корень папки-репозитория)
    |
    Добавляются файлы в репозиторий (git add./)
    |
    Создаётся комит (git commit -m Initial)
    Происходит работа с файлами, по окончании создается след комит

*/