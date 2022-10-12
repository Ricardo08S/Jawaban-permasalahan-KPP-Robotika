// NAMA		: Ricardo Supriyanto
// NRP		: 5025221218
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265
#define GRAVITASI 10 
#define START_PENGUKURAN 1 
#define SUDUT 45 

int mencari_V0(int vt, int losses)
{
	int v0;
    v0 = vt - losses;

  	return v0; 
}

int speed_dgn_loss(int v)
{
	int vtasli;
    if(v > 0 && v < 11){
        vtasli = 1;
    } else if(v > 10 && v < 21){
        vtasli = 3;
    } else if(v > 20 && v < 31){
        vtasli = 5;
    }
    return vtasli;
}

int main(){
    int v, v0, losses;
    float vtangen, S;
    cin >> v;

    losses = speed_dgn_loss(v);
    v0 = mencari_V0(v, losses);
    S = (pow(v0, 2) * sin(2 * SUDUT * PI / 180) / GRAVITASI) - START_PENGUKURAN;
    S = round(S);
    vtangen = sqrt(S * GRAVITASI) + losses;

    cout << S << " " << vtangen << endl;
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
    return 0;
}