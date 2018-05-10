#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para ListaDeBuracos
	/// </summary>
	public ref class TelaListaDeBuracos : public System::Windows::Forms::Form
	{
	public:
		TelaListaDeBuracos(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaListaDeBuracos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_voltar;
	private: System::Windows::Forms::ListBox^  lib_listaDeBuracos;


	private: System::Windows::Forms::Label^  lb_númeroDeID;
	protected:



	private: System::Windows::Forms::Label^  lb_localização;

	private: System::Windows::Forms::Label^  lb_tamanho;

	private: System::Windows::Forms::Label^  lb_posiçãoRelativa;

	private: System::Windows::Forms::Label^  lb_regional;
	private: System::Windows::Forms::Label^  informaçõesReferentesAoBuraco;


	private: System::Windows::Forms::PictureBox^  pb_fotos;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lb_listaDeReclamações;

	private: System::Windows::Forms::ListBox^  lib_listaDeReclamações;



	private: System::Windows::Forms::Label^  lb_contato;


	private: System::Windows::Forms::Label^  lb_horário;

	private: System::Windows::Forms::Label^  lb_data;

	private: System::Windows::Forms::Label^  lb_nome;

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bt_voltar = (gcnew System::Windows::Forms::Button());
			this->lib_listaDeBuracos = (gcnew System::Windows::Forms::ListBox());
			this->lb_númeroDeID = (gcnew System::Windows::Forms::Label());
			this->lb_localização = (gcnew System::Windows::Forms::Label());
			this->lb_tamanho = (gcnew System::Windows::Forms::Label());
			this->lb_posiçãoRelativa = (gcnew System::Windows::Forms::Label());
			this->lb_regional = (gcnew System::Windows::Forms::Label());
			this->informaçõesReferentesAoBuraco = (gcnew System::Windows::Forms::Label());
			this->pb_fotos = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lb_listaDeReclamações = (gcnew System::Windows::Forms::Label());
			this->lib_listaDeReclamações = (gcnew System::Windows::Forms::ListBox());
			this->lb_contato = (gcnew System::Windows::Forms::Label());
			this->lb_horário = (gcnew System::Windows::Forms::Label());
			this->lb_data = (gcnew System::Windows::Forms::Label());
			this->lb_nome = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_fotos))->BeginInit();
			this->SuspendLayout();
			// 
			// bt_voltar
			// 
			this->bt_voltar->Location = System::Drawing::Point(69, 32);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(75, 23);
			this->bt_voltar->TabIndex = 0;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = true;
			this->bt_voltar->Click += gcnew System::EventHandler(this, &TelaListaDeBuracos::button1_Click);
			// 
			// lib_listaDeBuracos
			// 
			this->lib_listaDeBuracos->FormattingEnabled = true;
			this->lib_listaDeBuracos->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Buraco1", L"Buraco2" });
			this->lib_listaDeBuracos->Location = System::Drawing::Point(12, 80);
			this->lib_listaDeBuracos->Name = L"lib_listaDeBuracos";
			this->lib_listaDeBuracos->Size = System::Drawing::Size(186, 303);
			this->lib_listaDeBuracos->TabIndex = 1;
			this->lib_listaDeBuracos->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaListaDeBuracos::listBox1_SelectedIndexChanged);
			// 
			// lb_númeroDeID
			// 
			this->lb_númeroDeID->AutoSize = true;
			this->lb_númeroDeID->Location = System::Drawing::Point(240, 82);
			this->lb_númeroDeID->Name = L"lb_númeroDeID";
			this->lb_númeroDeID->Size = System::Drawing::Size(76, 13);
			this->lb_númeroDeID->TabIndex = 2;
			this->lb_númeroDeID->Text = L"Número de ID:";
			// 
			// lb_localização
			// 
			this->lb_localização->AutoSize = true;
			this->lb_localização->Location = System::Drawing::Point(240, 105);
			this->lb_localização->Name = L"lb_localização";
			this->lb_localização->Size = System::Drawing::Size(67, 13);
			this->lb_localização->TabIndex = 3;
			this->lb_localização->Text = L"Localização:";
			// 
			// lb_tamanho
			// 
			this->lb_tamanho->AutoSize = true;
			this->lb_tamanho->Location = System::Drawing::Point(240, 130);
			this->lb_tamanho->Name = L"lb_tamanho";
			this->lb_tamanho->Size = System::Drawing::Size(55, 13);
			this->lb_tamanho->TabIndex = 4;
			this->lb_tamanho->Text = L"Tamanho:";
			this->lb_tamanho->Click += gcnew System::EventHandler(this, &TelaListaDeBuracos::label3_Click);
			// 
			// lb_posiçãoRelativa
			// 
			this->lb_posiçãoRelativa->AutoSize = true;
			this->lb_posiçãoRelativa->Location = System::Drawing::Point(240, 156);
			this->lb_posiçãoRelativa->Name = L"lb_posiçãoRelativa";
			this->lb_posiçãoRelativa->Size = System::Drawing::Size(90, 13);
			this->lb_posiçãoRelativa->TabIndex = 5;
			this->lb_posiçãoRelativa->Text = L"Posição Relativa:";
			// 
			// lb_regional
			// 
			this->lb_regional->AutoSize = true;
			this->lb_regional->Location = System::Drawing::Point(240, 183);
			this->lb_regional->Name = L"lb_regional";
			this->lb_regional->Size = System::Drawing::Size(52, 13);
			this->lb_regional->TabIndex = 6;
			this->lb_regional->Text = L"Regional:";
			// 
			// informaçõesReferentesAoBuraco
			// 
			this->informaçõesReferentesAoBuraco->AutoSize = true;
			this->informaçõesReferentesAoBuraco->Location = System::Drawing::Point(332, 42);
			this->informaçõesReferentesAoBuraco->Name = L"informaçõesReferentesAoBuraco";
			this->informaçõesReferentesAoBuraco->Size = System::Drawing::Size(172, 13);
			this->informaçõesReferentesAoBuraco->TabIndex = 7;
			this->informaçõesReferentesAoBuraco->Text = L"Informações Referentes ao Buraco";
			// 
			// pb_fotos
			// 
			this->pb_fotos->Location = System::Drawing::Point(318, 239);
			this->pb_fotos->Name = L"pb_fotos";
			this->pb_fotos->Size = System::Drawing::Size(152, 119);
			this->pb_fotos->TabIndex = 8;
			this->pb_fotos->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(378, 223);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Fotos";
			// 
			// lb_listaDeReclamações
			// 
			this->lb_listaDeReclamações->AutoSize = true;
			this->lb_listaDeReclamações->Location = System::Drawing::Point(605, 42);
			this->lb_listaDeReclamações->Name = L"lb_listaDeReclamações";
			this->lb_listaDeReclamações->Size = System::Drawing::Size(112, 13);
			this->lb_listaDeReclamações->TabIndex = 10;
			this->lb_listaDeReclamações->Text = L"Lista de Reclamações";
			// 
			// lib_listaDeReclamações
			// 
			this->lib_listaDeReclamações->FormattingEnabled = true;
			this->lib_listaDeReclamações->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Reclamante1", L"Reclamante2" });
			this->lib_listaDeReclamações->Location = System::Drawing::Point(578, 79);
			this->lib_listaDeReclamações->Name = L"lib_listaDeReclamações";
			this->lib_listaDeReclamações->Size = System::Drawing::Size(177, 134);
			this->lib_listaDeReclamações->TabIndex = 11;
			// 
			// lb_contato
			// 
			this->lb_contato->AutoSize = true;
			this->lb_contato->Location = System::Drawing::Point(562, 331);
			this->lb_contato->Name = L"lb_contato";
			this->lb_contato->Size = System::Drawing::Size(47, 13);
			this->lb_contato->TabIndex = 15;
			this->lb_contato->Text = L"Contato:";
			this->lb_contato->Click += gcnew System::EventHandler(this, &TelaListaDeBuracos::label10_Click);
			// 
			// lb_horário
			// 
			this->lb_horário->AutoSize = true;
			this->lb_horário->Location = System::Drawing::Point(562, 305);
			this->lb_horário->Name = L"lb_horário";
			this->lb_horário->Size = System::Drawing::Size(44, 13);
			this->lb_horário->TabIndex = 14;
			this->lb_horário->Text = L"Horário:";
			// 
			// lb_data
			// 
			this->lb_data->AutoSize = true;
			this->lb_data->Location = System::Drawing::Point(562, 280);
			this->lb_data->Name = L"lb_data";
			this->lb_data->Size = System::Drawing::Size(33, 13);
			this->lb_data->TabIndex = 13;
			this->lb_data->Text = L"Data:";
			// 
			// lb_nome
			// 
			this->lb_nome->AutoSize = true;
			this->lb_nome->Location = System::Drawing::Point(562, 257);
			this->lb_nome->Name = L"lb_nome";
			this->lb_nome->Size = System::Drawing::Size(38, 13);
			this->lb_nome->TabIndex = 12;
			this->lb_nome->Text = L"Nome:";
			// 
			// TelaListaDeBuracos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 454);
			this->Controls->Add(this->lb_contato);
			this->Controls->Add(this->lb_horário);
			this->Controls->Add(this->lb_data);
			this->Controls->Add(this->lb_nome);
			this->Controls->Add(this->lib_listaDeReclamações);
			this->Controls->Add(this->lb_listaDeReclamações);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pb_fotos);
			this->Controls->Add(this->informaçõesReferentesAoBuraco);
			this->Controls->Add(this->lb_regional);
			this->Controls->Add(this->lb_posiçãoRelativa);
			this->Controls->Add(this->lb_tamanho);
			this->Controls->Add(this->lb_localização);
			this->Controls->Add(this->lb_númeroDeID);
			this->Controls->Add(this->lib_listaDeBuracos);
			this->Controls->Add(this->bt_voltar);
			this->Name = L"TelaListaDeBuracos";
			this->Text = L"ListaDeBuracos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_fotos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
