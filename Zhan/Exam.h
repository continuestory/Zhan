#include<stdio.h>
#include<math.h>

int exam_1EstimateInt(){
	unsigned int num, r;
	scanf_s("%u", &num);
	r = num % 2;
	if (r == 1)
		printf_s("%d is an even. \n", num);
	else if(r == 0)
		printf_s("%d is an odd. \n", num);
	return 0;
}
int exam_1CompareZero(int a){
	if (a > 0)
		return 1;
	else if (a == 0)
		return 0;
	else
		return -1;
}

double exam_1CaculateInput(double x, double y){
	if (x > 0){
		if (y > 0){
			return (log(x) + log(y));
		}
		else if (y < 0){
			return (sin(x) + sin(y));
		}
		else
			printf_s("%s", "请输入正确的Y");

	}
	else if (x < 0){
		if (y < 0){
			return (exp(2 * x) + exp(3 * y));
		}
		else if (y>0){
			return (tan(x + y));
		}
		else
			printf_s("%s", "请输入正确的Y");
	}
	else
		printf_s("%s", "请输入正确的X");
	
	return 0;
}
void isLeap(){
	int day, month, year, sum,leap;
	printf("\nplease input year,month,day\n");
	scanf_s("%d,%d,%d", &year, &month, &day);
	switch(month){
		case 1:sum = 0; break;
		case 2:sum = 31; break;
		case 3:sum = 59; break;
		case 4:sum = 90; break;
		case 5:sum = 120; break;
		case 6:sum = 151; break;
		case 8:sum = 212; break;
		case 9:sum = 243; break;
		case 10:sum = 273; break;
		case 11:sum = 304; break;
		case 12:sum = 334; break;
		default:printf("data error\n"); break;
	}
	sum += day;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		leap = 1;
	else
		leap = 0;
	if (leap == 1 && month > 2)
		sum++;
	printf("The days are %d .\n", sum);
}

void exam_2PrintSomeNum(){
	int i = 1, j = 0;
	do{
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2){
			printf_s("%4d", i);
			j++;
			if (!(j < 5))
				printf_s("\n");
		}
		i++;
	} while (i <= 1000);
}

char exam_2ChangeChar(char c){
	if (c >= 'a'&&c <= 'u'){
		c = c + 5;
	}
	else if (c > 'v'&&c <= 'z'){
		c = c - 21;
	}
	return c;
}

int exam_2caculate(){
	
	int sum = 0,i = 0;
	while (!(sum > 10000)){
		sum += i*i;
		i++;
	}
	return sum;
}

double exam_3Caculate(int a, int n){
	if (n < 1)
		return 0;
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += a*(n - i)*pow(10, i);
	}

	return sum;
}

void exam_3Fibonacci(){
	int i, fib, fib1, fib2;
	fib1 = fib2 = 1;
	printf_s("%d %d", fib1, fib2);
	for (i = 3; i <= 12; i++){
		fib = fib1 + fib2;
		printf_s("%d", fib);
		fib1 = fib2;
		fib2 = fib;
		printf("\n");
	}
}

void exam_3Caculate2(int n){
	int sum = 0;
	for (int i = 1; i<n+1; i++){
		for (int j = 0; j<i; j++){
			sum += i*pow(10, i);
		}
	}
	printf_s("%d", sum);
}

//void Fact(int num)
//{
//	int sum = 0;
//	int factor, numm;
//	numm = num;
//	/*printf("%ld=", num)*/;//先输出数值部分
//	do{
//		for (factor = 2; factor < num; factor++)
//		{
//			//          printf("Test sentence 1.\t num = %ld, factor=%ld\n",num,factor);
//			if (isPrime(factor) && (num%factor == 0))//判断是否是因数；
//				//如果是因数，将其输出，然后将原来的数字缩小。再次进行判断。
//			{
//				sum += factor;
//				/*printf("%ldx", factor)*/;//输出因式分解部分；
//				num = num / factor;//得到新的带分解因数；
//				break;
//			}
//		}
//		if (isPrime(num))//如果num是素数，直接推出；
//		{
//			/*printf("%ld\n", num);*/
//			sum += num;
//			break;
//		}
//		//          printf("Test sentence.\tnum = %ld\n",num);
//	} while (1);
//	sum++;
//	if (sum == numm)
//		printf_s("%d", sum);
//
//	return;
//}
//
//int isPrime(int num)
//{
//	int i;
//	int isPrime = 1;
//	for (i = 2; i <= num / 2; i++)
//	{
//		if (num % i == 0)
//		{
//			isPrime = 0;
//			break;
//		}
//	}
//	return isPrime;
//}



void exam_3Print(){
	for (int i = 2; i < 1001; i++){
		int sum = 0;
		for (int j = 1; j < i; j++){
			if (i%j == 0)
				sum += j;
		}
		if (sum == i)
			printf_s("%d\n", sum);
		
	}
	
}

