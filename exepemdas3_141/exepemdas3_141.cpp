// exepemdas3_141.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() { //constructor
        x = 0;
    }
    virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
    virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
    void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { //fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "Masukkan jejari : ";
		int r;
		cin >> r;
		setX(r);
	}

	float luas(int a) {
		return 3.14 * a * a;
	}

	float keliling(int a) {
		return 2 * 3.14 * a;
	}
};

class Bujursangkar :public bidangDatar {
public:
	void input() {
		cout << "masukkan sisi :";
		int s;
		cin >> s;
		setX(s);
	}

	float Luas(int a) {
		return a * a;
	}

	float keliling(int a) {
		return 4 * a;
	}
};

int main() {
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	cout << "Lingkaran dibuat" << endl;
	lingkaran.input();
	cout << "Luas Lingkaran = " << lingkaran.luas(lingkaran.getX()) << endl;
	cout << "Keliling Lingkaran = " << lingkaran.keliling(lingkaran.getX()) << endl;

	cout << "Bujursangkar dibuat" << endl;
	bujursangkar.input();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl;
	cout << "Keliling Bujursangkar = " << bujursangkar.keliling(bujursangkar.getX()) << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
