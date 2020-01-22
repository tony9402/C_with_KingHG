#include <stdio.h>

void func(int depth, int money, int now);

int main() {
	int money = 278970;

	func(0, money, 50000);
}

void func(int depth, int money, int now){
	if(depth == 8)return;
	printf("%d원권 = > %d개\n", now, money / now);
	int next;
	if(depth - depth / 2 * 2 == 0){
		next = now / 5;
	}
	else{
		next = now / 2;
	}
	return func(depth + 1, money - money / now * now, next);
}