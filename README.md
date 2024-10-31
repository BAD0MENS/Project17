Этот репозиторий содержит простую реализацию структуры данных очереди на C++. Очередь предназначена для хранения трехмерных точек, представленных структурой Point. Реализация включает в себя основные операции, такие как добавление в очередь, удаление из очереди и очистка очереди.

Особенности
Динамический размер: Очередь может расти динамически в зависимости от заданной емкости.
Представление точки: Каждая точка представлена в трехмерном пространстве с координатами x, y и z.
Обработка ошибок: Реализация включает в себя обработку ошибок для условий переполнения и опустошения.

Файлы
main.cpp: Основной файл, демонстрирующий использование очереди с точками.
Point.h: Определяет структуру Point и перегружает оператор вывода для удобного отображения.
My_labs.h: Содержит шаблон класса Queue с методами для добавления, удаления и очистки очереди.

Начало работы
Предварительные требования
Компилятор C++ (g++, clang++, и т.д.)
CMake (необязательно, для сборки проекта)

Сборка проекта
Клонируйте репозиторий:

git clone https://github.com/BAD0MENS/Project17.git
cd yourrepository

Скомпилируйте код:

g++ main.cpp -o queue_example

Запустите исполняемый файл:

./queue_example

Eng

This repository contains a simple implementation of a queue data structure in C++. The queue is designed to store three-dimensional points represented by the `Point` struct. The implementation includes basic operations such as enqueue, dequeue, and clearing the queue.

Features
- **Dynamic Size**: The queue can grow dynamically based on the specified capacity.
- **Point Representation**: Each point is represented in a three-dimensional space with x, y, and z coordinates.
- **Error Handling**: The implementation includes error handling for overflow and underflow conditions.

Files
- `main.cpp`: The main file that demonstrates the usage of the queue with points.
- `Point.h`: Defines the `Point` struct and overloads the output stream operator for easy printing.
- `My_labs.h`: Contains the `Queue` class template with methods for enqueueing, dequeueing, and clearing the queue.

Getting Started

Prerequisites
- C++ compiler (g++, clang++, etc.)
- CMake (optional, for building the project)

Building the Project

1. Clone the repository:

   git clone https://github.com/BAD0MENS/Project17.git
   cd yourrepository

Compile the code:

g++ main.cpp -o queue_example

Run the executable:

./queue_example