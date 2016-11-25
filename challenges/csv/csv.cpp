/***********************************************************
Desenvolvedor: Thiago Moreira
Engenheiro Eletrônico
thiagofrosty@hotmail.com
Programa: Csv
Processo Seletivo CINQ
************************************************************/
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

#define CAMPOS_NUM 5
using namespace std;

int main(int argc, char** argv)
{
	int N;
	size_t virgula;
	string linha;
	string campo[CAMPOS_NUM];

	cin >> N;
	cin.ignore();

	for(int i = 0; i < N; i++)
	{
		getline(cin,linha);

		for(int i = 0; i < CAMPOS_NUM; i++)
		{
			virgula = linha.find(",");
			campo[i] = linha.substr(0,virgula);
			linha.erase(0,campo[i].length()+1);
		}

		cout << campo[0] << " is " << campo[4] << " years old and lives in " << campo[2] << ", " << campo[1] << "." << endl;

	}

	return 0;
}

