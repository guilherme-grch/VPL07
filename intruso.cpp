#include "intruso.hpp"

void Intruso::set_senha_vazada(std::string vazou) {
	// vazou: string do tipo "1 7 3 9 0 8 5 6 2 4 B C E A E B "
	std::vector<std::pair<int,int>> associacao;

	for(unsigned int i = 0; i < 5; i++) {
		std::string::size_type sz;
		std::pair<int,int> dupla;		
		dupla.first = std::stoi(vazou, &sz);
		vazou = vazou.substr(sz);
		dupla.second = std::stoi(vazou, &sz);
		vazou = vazou.substr(sz);
		associacao.push_back(dupla);
	}

	std::vector<std::pair<int,int>> senha;
	for(auto &i : vazou)
		if(i != ' ')
			switch(i) {
				case 'A':
					senha.push_back(associacao[0]);
				break;
				case 'B':
					senha.push_back(associacao[1]);
				break;
				case 'C':
					senha.push_back(associacao[2]);
				break;
				case 'D':
					senha.push_back(associacao[3]);
				break;
				case 'E':
					senha.push_back(associacao[4]);
				break;
			}
	
	digitadas.push_back(senha);
}

std::string Intruso::crack_senha() {

}
