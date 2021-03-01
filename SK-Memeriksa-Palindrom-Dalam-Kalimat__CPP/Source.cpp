#include <iostream>
#include <conio.h>

using namespace std;



struct kalimat {
	char str[50];
};

struct kalimat obj;

int jumlahPalindrom(char str[50], int st, int ed);

int main(){
	int pal = 0, len = 0, i, start = 0, end;

	cout << "\n\n\t Masukkan kalimat apapun : ";
	cin.getline(obj.str, 50);

	while (obj.str[len] != '\0')
		len++;
	len--;
	
	for (i = 0; i <= len; i++) {
		if ((obj.str[i] == ' ' && obj.str[i + 1] != ' ') || i == len) {
			if (i == len)
				end = i;
			else
				end = i - 1;
			if (jumlahPalindrom(obj.str, start, end))
				pal++;
			start = end + 2;
		}
	}

	cout << "\n\n\t Jumlah Palindrome :" << pal;

	_getch();
	return 0;
}

int jumlahPalindrom(char str[50], int st, int ed){
	int i, pal = 0;
	
	for (i = 0; i <= (ed - st) / 2; i++) {
		if (str[st + i] == str[ed - i])
			pal = 1;
		else {
			pal = 0;
			break;
		}
	}

	return pal;
}