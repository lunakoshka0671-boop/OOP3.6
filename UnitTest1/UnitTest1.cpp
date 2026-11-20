
#include "pch.h"
#include "CppUnitTest.h"

#include "../OOP3.6/B1.cpp"
#include "../OOP3.6/B2.cpp"
#include "../OOP3.6/D1.cpp"
#include "../OOP3.6/D2.cpp"
#include "../OOP3.6/D3.cpp"

#include <sstream>
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace InheritanceTests
{
    TEST_CLASS(InheritanceUnitTests)
    {
    public:

        // Перевірка створення об'єкта B1
        TEST_METHOD(TestB1Constructor)
        {
            B1 obj(10);

            Assert::IsTrue(sizeof(obj) >= sizeof(int));
        }

        // Перевірка функції show() класу B1
        TEST_METHOD(TestB1Show)
        {
            B1 obj(10);

            ostringstream output;
            streambuf* oldBuffer = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(oldBuffer);

            Assert::IsTrue(
                output.str().find("b1 = 10") != string::npos
            );
        }

        // Перевірка створення об'єкта B2
        TEST_METHOD(TestB2Constructor)
        {
            B2 obj(20);

            Assert::IsTrue(sizeof(obj) >= sizeof(int));
        }

        // Перевірка функції show() класу B2
        TEST_METHOD(TestB2Show)
        {
            B2 obj(20);

            ostringstream output;
            streambuf* oldBuffer = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(oldBuffer);

            Assert::IsTrue(
                output.str().find("b2 = 20") != string::npos
            );
        }

        // Перевірка створення об'єкта D1
        TEST_METHOD(TestD1Constructor)
        {
            D1 obj(10, 30);

            Assert::IsTrue(sizeof(obj) >= 2 * sizeof(int));
        }

        // Перевірка функції show() класу D1
        TEST_METHOD(TestD1Show)
        {
            D1 obj(10, 30);

            ostringstream output;
            streambuf* oldBuffer = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(oldBuffer);

            Assert::IsTrue(
                output.str().find("b1 = 10") != string::npos
            );

            Assert::IsTrue(
                output.str().find("d1 = 30") != string::npos
            );
        }

        // Перевірка створення об'єкта D2
        TEST_METHOD(TestD2Constructor)
        {
            D2 obj(20, 40);

            Assert::IsTrue(sizeof(obj) >= 2 * sizeof(int));
        }

        // Перевірка функції show() класу D2
        TEST_METHOD(TestD2Show)
        {
            D2 obj(20, 40);

            ostringstream output;
            streambuf* oldBuffer = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(oldBuffer);

            Assert::IsTrue(
                output.str().find("b2 = 20") != string::npos
            );

            Assert::IsTrue(
                output.str().find("d2 = 40") != string::npos
            );
        }

        // Перевірка створення об'єкта D3
        TEST_METHOD(TestD3Constructor)
        {
            D3 obj(10, 30, 20, 40, 50);

            Assert::IsTrue(sizeof(obj) >= 3 * sizeof(int));
        }

        // Перевірка функції show() класу D3
        TEST_METHOD(TestD3Show)
        {
            D3 obj(10, 30, 20, 40, 50);

            ostringstream output;
            streambuf* oldBuffer = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(oldBuffer);

            Assert::IsTrue(
                output.str().find("b1 = 10") != string::npos
            );

            Assert::IsTrue(
                output.str().find("d1 = 30") != string::npos
            );

            Assert::IsTrue(
                output.str().find("b2 = 20") != string::npos
            );

            Assert::IsTrue(
                output.str().find("d2 = 40") != string::npos
            );

            Assert::IsTrue(
                output.str().find("d3 = 50") != string::npos
            );
        }

        // Перевірка поліморфізму через базовий клас B1
        TEST_METHOD(TestPolymorphism)
        {
            D1 obj(10, 30);

            B1& reference = obj;

            ostringstream output;
            streambuf* oldBuffer = cout.rdbuf(output.rdbuf());

            reference.show();

            cout.rdbuf(oldBuffer);

            Assert::IsTrue(
                output.str().find("Class D1") != string::npos
            );

            Assert::IsTrue(
                output.str().find("d1 = 30") != string::npos
            );
        }
    };
}

