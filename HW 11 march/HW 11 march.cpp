#include <iostream>

void task1()
{
		char n = 5;
		int a = 16;
		int bit;
		_asm
		{
			mov cl, n
			mov eax, a; eax < -a
			shr eax, cl; eax >> n
			mov a, eax; a < -eax
			beg_ :
			jnc CF_0
				mov bit, 1; bit = 1
				jmp end_
				CF_0 :
			mov bit, 0; bit = 0
				end_:
		}
		std::cout << "bit value: " << bit << '\n';
		std::cout << "----------------------------------------------------------------------------------\n";	
}

void task2()
{
	//не работает
		short int a = 16;
		char n = 5;
		_asm
		{
			mov ax, a
			bit ax,5
		}
}

void task3()
{
		short int a = 5, b = 10;
		std::cout << "before swap: " << a << " " << b << '\n';
		_asm
		{
			mov ax, a; ax < -a
			mov bx, b; bx < -b
			mov a, bx; a < -bx
			mov b, ax; b < -ax

		}
		std::cout << "after swap: " << a << " " << b << '\n';
		std::cout << "----------------------------------------------------------------------------------\n";
}

void task4()
{
		int a = 5, b = 9, quotient, remainder;
		_asm
		{
			mov eax, b; ebx < -b
			neg eax; ebx < --b
			mov ebx, a; eax < -a
			mov ecx, 1
			imul ecx
			idiv a
			mov quotient, eax
			mov remainder, edx
		}
		std::cout << "quotient: " << quotient << " remainder: " << remainder << '\n';
		std::cout << "----------------------------------------------------------------------------------\n";
}

void task5()
{
		//сделать
}

void task6()
{
		short int a = 3;
		_asm
		{
			mov ax, a; ax < -a
			mov bl, al; bl < -al
			mov al, ah; al < -ah
			mov ah, bl; al < -bl
			mov a, ax
		}
}

void task7()
{

		int a = -5, b = 15, result, overflow;
		_asm
		{
			mov eax, a; eax < -a
			imul b; eax < -a * b
			mov result, eax; result < -eax

			jno OF_0
			mov overflow, 1; overflow = 1
			jmp end_
			OF_0 :
			mov overflow, 0; overflow = 0
				end_:
		}
		std::cout << "result: " << result << '\n';
		std::cout << "overflow " << overflow << '\n';
		std::cout << "----------------------------------------------------------------------------------\n";
}

void task8()
{
		char a = 20;
		short int b = 10;
		int c = 5, sum1, sum2, sum3;
		_asm
		{
			movsx eax, a; eax < -a
			movsx ebx, b; ebx < -b
			mov ecx, 1
			imul ecx
			idiv ebx; eax < -a / b
			mov sum1, eax; sum1 < -eax

			mov eax, ebx; eax < -b
			mov ebx, c; ebx < -c
			idiv ebx
			mov sum2, eax; sum2 < -eax

			mov eax, c; ecx < -c
			movsx ebx, a; ebx < -b
			idiv ebx; eax < -c / a
			mov sum3, eax; sum3 < -eax

			add sum1, eax
			mov ecx, sum2
			add sum1, ecx
		}
		std::cout << "result: " << sum1 << '\n';
		std::cout << "----------------------------------------------------------------------------------\n";
}

void task9()
{

		int n = 5, result;
		_asm
		{
			mov eax, 1
			movsx cl, n
			shl eax, cl
			mov result, eax
		}
		std::cout << "result: " << result << '\n';
		std::cout << "----------------------------------------------------------------------------------\n";
}

void task10()
{
	//сделать
}
int main()
{

}

