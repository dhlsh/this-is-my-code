#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)//简单整数运算
		{
			char ysf = 1;//用1，2，3,4分别表示 '+','-','*','/'
			int a = 4, b = 8;//因子数
			int zhengshu = 1;//1为整数，2为小数
			int result, r1 = 12, r2 = -4, r3 = 32,r4=4;
			float r5 = 0.5;
			if (ysf == 1)
			{
				result = a + b;
				Assert::AreEqual(r1, result);
			}
			else if(ysf==2)
			{
				result = a - b;
				Assert::AreEqual(r2, result);
			}
			else if (ysf == 3)
			{
				result = a * b;
				Assert::AreEqual(r3, result);
			}
			else if (ysf == 4)
			{
				if (b == 0)
				{
					 result = a / 1;
					Assert::AreEqual(r4, result);//防止分母为零程序崩溃
				}
				else

				{
					float result = a / b;
					Assert::AreEqual(r5, result);
				}
			}
		}
		TEST_METHOD(TestMethod2)//简单小数运算
		{
			char ysf = 1;//用1，2，3,4分别表示 '+','-','*','/'
			float a = 2.5, b = 0.2;//因子数
			int zhengshu = 2;//1为整数，2为小数
			float result, r1 = 2.7, r2 = 2.3, r3 = 5.0,r4=2.5, r5 = 12.5;
			if (ysf == 1)
			{
				result = a + b;
				Assert::AreEqual(r1, result);
			}
			else if (ysf == 2)
			{
				result = a - b;
				Assert::AreEqual(r2, result);
			}
			else if (ysf == 3)
			{
				result = a * b;
				Assert::AreEqual(r3, result);
			}
			else if (ysf == 4)
			{
				if (b == 0)
				{
					result = a / 1;
					Assert::AreEqual(r4, result);//防止分母为零死机
				}
				else

				{
					result = a / b;
					Assert::AreEqual(r5, result);
				}
			}
		}
		TEST_METHOD(TestMethod3)//整数混合运算
		{
			char ysf = 1;
			//表示混合运算,其中1表示'+','*'混合，其中2表示'-','*'混合，其中3表示'+','/'混合，其中4表示'-','/'混合
			int a = 4, b = 8, c = 5;//因子数
			char kuohao = 1;//1为无括号，2为有括号
			int zhengshu = 1;//1为整数，2为小数
			int result, r1 = 44, r2 = -36;
			float r3 = 12, r4 = 5.6;
			float r5 = -4, r6= 2.4;
			if (ysf == 1)
			
			{
				result = a + b*c;
				Assert::AreEqual(r1, result);
			}
			else if (ysf == 2)
			{
				result = a - b*c;
				Assert::AreEqual(r2, result);
			}
			else if (ysf == 3)
			{
				if (c == 0)
				{
					float result = a + b / 1;
					Assert::AreEqual(r3, result);
				}
				else
				{
					float result = a + b/c;
					Assert::AreEqual(r5, result);
				}
			}
			else if (ysf == 4)
			{
				if (c== 0)
				{
					float result = a -b/1;
					Assert::AreEqual(r5, result);
				}
				else

				{
					float result = a -b/c;
					Assert::AreEqual(r5, result);
				}
			}
		}
		TEST_METHOD(TestMethod4)//小数混合运算
		{
			char ysf = 1;//表示混合运算,其中1表示'+','*'混合，其中2表示'-','*'混合，其中3表示'+','/'混合，其中4表示'-','/'混合
			float  a = 2.5, b = 1.2,c=0.6;//因子数
			char kuohao = 1;//1为无括号，2为有括号
			int zhengshu = 2;//1为整数，2为小数
			float result, r1 = 3.22, r2 = 1.78, r3 = 3.7, r4 = 3.0, r5 = 1.3,r6=0.5;
			if (ysf == 1)

			{
				result = a + b * c;
				Assert::AreEqual(r1, result);
			}
			else if (ysf == 2)
			{
				result = a - b * c;
				Assert::AreEqual(r2, result);
			}
			else if (ysf == 3)
			{
				if (c == 0)
				{
					float result = a + b / 1;
					Assert::AreEqual(r3, result);
				}
				else
				{
					float result = a + b / c;
					Assert::AreEqual(r5, result);
				}
			}
			else if (ysf == 4)
			{
				if (c == 0)
				{
					 result = a - b / 1;
					Assert::AreEqual(r5, result);
				}
				else

				{
					 result = a - b / c;
					Assert::AreEqual(r5, result);
				}
			}
		}
		TEST_METHOD(TestMethod5)//有括号整数混合运算
		{
			char ysf = 1;
			//表示混合运算,其中1表示'+','*'混合，其中2表示'-','*'混合，其中3表示'+','/'混合，其中4表示'-','/'混合
			int a = 4, b = 8, c = 5;//因子数
			char kuohao = 2;//1为无括号，2为有括号
			int zhengshu = 1;//1为整数，2为小数
			int result, r1 = 60, r2 = -20, r3 = 12, r5 = -4;
			float r4 = 2.4;
			float r6 = -0.8;
			if (ysf == 1)

			{
				result = (a + b)* c;
				Assert::AreEqual(r1, result);
			}
			else if (ysf == 2)
			{
				result = (a - b) * c;
				Assert::AreEqual(r2, result);
			}
			else if (ysf == 3)
			{
				if (c == 0)
				{
				    result = (a + b) / 1;
					Assert::AreEqual(r3, result);
				}
				else
				{
				     float result = (a + b) / c;
					Assert::AreEqual(r4, result);
				}
			}
			else if (ysf == 4)
			{
				if (c == 0)
				{
				    result = (a - b) / 1;
					Assert::AreEqual(r5, result);
				}
				else

				{
					float result = (a - b) / c;
					Assert::AreEqual(r6, result);
				}
			}
		}
		TEST_METHOD(TestMethod6)//小数混合运算
		{
			char ysf = 1;//表示混合运算,其中1表示'+','*'混合，其中2表示'-','*'混合，其中3表示'+','/'混合，其中4表示'-','/'混合
			float  a = 2.5, b = 1.2, c = 0.6;//因子数
			char kuohao = 2;//1为无括号，2为有括号
			int zhengshu = 2;//1为整数，2为小数
			float result, r1 = 2.22, r2 = 0.78, r3 = 3.7, r4 = 6.17, r5 = 1.3, r6 = 2.16;
			if (ysf == 1)

			{
				result = (a + b) * c;
				Assert::AreEqual(r1, result);
			}
			else if (ysf == 2)
			{
				result = (a - b) * c;
				Assert::AreEqual(r2, result);
			}
			else if (ysf == 3)
			{
				if (c == 0)
				{
					result = (a + b) / 1;
					Assert::AreEqual(r3, result);
				}
				else
				{
					 result = (a + b) / c;
					Assert::AreEqual(r4, result);
				}
			}
			else if (ysf == 4)
			{
				if (c == 0)
				{
					 result = (a - b) / 1;
					Assert::AreEqual(r5, result);
				}
				else

				{
					result = (a - b) / c;
					Assert::AreEqual(r5, result);
				}
			}
		}
	};
}