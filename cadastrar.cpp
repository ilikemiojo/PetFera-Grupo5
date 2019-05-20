//Adicionar includes necessarios

//Cadastro de Funcionarios


// Cadastro de Animais

//Cadastro geral de animais - Todos os tipos precisam passar por aqui
//Inicialmente deixei como vector no geral e nos especificos, possivel mudança pra map
void CadastrarAnimal(vector <anfibio_nativo> &anfNat, vector <anfibio_exotico> &anfExo, vector <ave_nativo> &aveNat, vector <ave_exotico> &aveExo, vector <mamifero_nativo> &mamNat, vector <mamifero_exotico> &mamExo, vector <reptil_nativo> &repNat, vector <reptil_exotico> &repExo ){
	int tipoAnimal;
	char cont = 's', resposta;

	while(cont=='s'){
		cout<< "Qual será o tipo do animal? \n 1 - anfíbio \n 2 - ave \n 3 - mamífero \n 4 - reptil" <<endl;
		cin>>tipoAnimal;

		if(tipoAnimal !=1 && tipoAnimal !=2 && tipoAnimal !=3 && tipoAnimal !=4){
			cout<<"Tipo de animal incorreto! \n"<<endl;
			cout<<"\n s - Para sair do cadastro \n Aperte qualquer outra tecla para recomeçar o cadastro de animal"<<endl;
			cin>>resp;
			if(resp == 's'){
				cont = 'n';
				break;
			}
			cont = 's';
			continue;
		}
		else{
			if(tipoAnimal == 1){
				cadastrarAnfibio(anfNat,anfExo);
			}
			else if(tipoAnimal == 2){
				cadastrarAve(aveNat,aveExo);
			}
			else if(tipoAnimal == 3){
				cadastrarMamifero(mamNat,mamExo);
			}
			else if(tipoAnimal == 4){
				cadastrarReptil(repNat,repExo);
			}
		}
	}
}

//Função especifica para cadastro de anfibios
void cadastrarAnfibio(vector <anfibio_nativo> &anfNat, vector <anfibio_exotico> &anfExo){
	int id, totalMudas, ultimaMuda [3], tipoAnimal;
	string classe, nomeAnimal,nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem;
	char sexo, cont = 's';
	double tamanho;
	unsigned int tamAntigo

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será um anfíbio nativo ou exotico? \n 1 - NATIVO \n 2 - EXOTICO"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira o total de mudas:"<<endl;
			cin>>totalMudas;
			cout<<"Insira a data da ultima muda (DD/MM/AAAA):"<<endl;
			cin>>ultimaMuda[0]>>ultimaMuda[1]>>ultimaMuda[2];
			cout<<"Insira a autorizacao do IBAMA:"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);

			//Anfibios Nativos
			if(tipoAnimal==1){
				tamAntigo = anfNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(anfNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Anfibios Exoticos
			else{
				tamAntigo = anfExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(anfExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/

			}
		}
	}
}

//Função especifica para cadastro de aves
void cadastrarAve(vector <ave_nativo> &aveNat, vector <ave_exotico> &aveExo){
	int id;
	double tamBico, envergadura, tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será uma ave nativa ou exotica? \n 1 - NATIVA \n 2 - EXOTICA"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira o tamanho do bico:"<<endl;
			cin>>tamBico;
			cout<<"Insira a envergadura:"<<endl;
			cint>>envergadura;
			cout<<"Insira a autorizacao do IBAMA"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);

			//Aves Nativas
			if(tipoAnimal==1){
				tamAntigo = aveNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(aveNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Aves Exoticas
			else{
				tamAntigo = aveExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(aveExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
		}
	}
}

//Função especifica para cadastro de mamiferos
void cadastrarMamifero(vector <mamifero_nativo> &mamNat, vector <mamifero_exotico> &mamExo){
	int id;
	double tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, cor;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será um mamifero nativo ou exotico? \n 1 - NATIVO \n 2 - EXOTICO"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira a cor do pelo:"<<endl;
			cin.ignore();
			getline(cin,cor);
			cout<<"Insira a autorizacao do IBAMA"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);

			//Mamiferos Nativos
			if(tipoAnimal==1){
				tamAntigo = mamNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(mamNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Mamiferos Exoticos
			else{
				tamAntigo = mamExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(mamExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
		}
	}
}


//Função especifica para cadastro de Repteis
void cadastrarReptil(vector <reptil_nativo> &repNat, vector <reptil_exotico> &repExo){
	int id;
	bool venenoso;
	double tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, tipoVeneno;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será um reptil nativo ou exotico? \n 1 - NATIVO \n 2 - EXOTICO"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira a autorizacao do IBAMA"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);
			cout<<"Insira 0 - não venenoso / 1 - para venenoso"<<endl;
			cin>>venenoso;
			if(venenoso){
				cout<<"Insira o tipo de veneno:"<<endl;
				cin>>tipoVeneno;
			}

			//Repteis Nativos
			if(tipoAnimal==1){
				tamAntigo = repNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(repNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Repteis Exoticos
			else{
				tamAntigo = repExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(repExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
		}
	}
}