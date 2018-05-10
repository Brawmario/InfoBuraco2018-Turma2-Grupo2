#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sum�rio para ListaDeBuracos
	/// </summary>
	public ref class TelaListaDeBuracos : public System::Windows::Forms::Form
	{
	public:
		TelaListaDeBuracos(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o c�digo do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que est�o sendo usados.
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


	private: System::Windows::Forms::Label^  lb_n�meroDeID;
	protected:



	private: System::Windows::Forms::Label^  lb_localiza��o;

	private: System::Windows::Forms::Label^  lb_tamanho;

	private: System::Windows::Forms::Label^  lb_posi��oRelativa;

	private: System::Windows::Forms::Label^  lb_regional;
	private: System::Windows::Forms::Label^  informa��esReferentesAoBuraco;


	private: System::Windows::Forms::PictureBox^  pb_fotos;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lb_listaDeReclama��es;

	private: System::Windows::Forms::ListBox^  lib_listaDeReclama��es;



	private: System::Windows::Forms::Label^  lb_contato;


	private: System::Windows::Forms::Label^  lb_hor�rio;

	private: System::Windows::Forms::Label^  lb_data;

	private: System::Windows::Forms::Label^  lb_nome;

	protected:

	private:
		/// <summary>
		/// Vari�vel de designer necess�ria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necess�rio para suporte ao Designer - n�o modifique 
		/// o conte�do deste m�todo com o editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bt_voltar = (gcnew System::Windows::Forms::Button());
			this->lib_listaDeBuracos = (gcnew System::Windows::Forms::ListBox());
			this->lb_n�meroDeID = (gcnew System::Windows::Forms::Label());
			this->lb_localiza��o = (gcnew System::Windows::Forms::Label());
			this->lb_tamanho = (gcnew System::Windows::Forms::Label());
			this->lb_posi��oRelativa = (gcnew System::Windows::Forms::Label());
			this->lb_regional = (gcnew System::Windows::Forms::Label());
			this->informa��esReferentesAoBuraco = (gcnew System::Windows::Forms::Label());
			this->pb_fotos = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lb_listaDeReclama��es = (gcnew System::Windows::Forms::Label());
			this->lib_listaDeReclama��es = (gcnew System::Windows::Forms::ListBox());
			this->lb_contato = (gcnew System::Windows::Forms::Label());
			this->lb_hor�rio = (gcnew System::Windows::Forms::Label());
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
			// lb_n�meroDeID
			// 
			this->lb_n�meroDeID->AutoSize = true;
			this->lb_n�meroDeID->Location = System::Drawing::Point(240, 82);
			this->lb_n�meroDeID->Name = L"lb_n�meroDeID";
			this->lb_n�meroDeID->Size = System::Drawing::Size(76, 13);
			this->lb_n�meroDeID->TabIndex = 2;
			this->lb_n�meroDeID->Text = L"N�mero de ID:";
			// 
			// lb_localiza��o
			// 
			this->lb_localiza��o->AutoSize = true;
			this->lb_localiza��o->Location = System::Drawing::Point(240, 105);
			this->lb_localiza��o->Name = L"lb_localiza��o";
			this->lb_localiza��o->Size = System::Drawing::Size(67, 13);
			this->lb_localiza��o->TabIndex = 3;
			this->lb_localiza��o->Text = L"Localiza��o:";
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
			// lb_posi��oRelativa
			// 
			this->lb_posi��oRelativa->AutoSize = true;
			this->lb_posi��oRelativa->Location = System::Drawing::Point(240, 156);
			this->lb_posi��oRelativa->Name = L"lb_posi��oRelativa";
			this->lb_posi��oRelativa->Size = System::Drawing::Size(90, 13);
			this->lb_posi��oRelativa->TabIndex = 5;
			this->lb_posi��oRelativa->Text = L"Posi��o Relativa:";
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
			// informa��esReferentesAoBuraco
			// 
			this->informa��esReferentesAoBuraco->AutoSize = true;
			this->informa��esReferentesAoBuraco->Location = System::Drawing::Point(332, 42);
			this->informa��esReferentesAoBuraco->Name = L"informa��esReferentesAoBuraco";
			this->informa��esReferentesAoBuraco->Size = System::Drawing::Size(172, 13);
			this->informa��esReferentesAoBuraco->TabIndex = 7;
			this->informa��esReferentesAoBuraco->Text = L"Informa��es Referentes ao Buraco";
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
			// lb_listaDeReclama��es
			// 
			this->lb_listaDeReclama��es->AutoSize = true;
			this->lb_listaDeReclama��es->Location = System::Drawing::Point(605, 42);
			this->lb_listaDeReclama��es->Name = L"lb_listaDeReclama��es";
			this->lb_listaDeReclama��es->Size = System::Drawing::Size(112, 13);
			this->lb_listaDeReclama��es->TabIndex = 10;
			this->lb_listaDeReclama��es->Text = L"Lista de Reclama��es";
			// 
			// lib_listaDeReclama��es
			// 
			this->lib_listaDeReclama��es->FormattingEnabled = true;
			this->lib_listaDeReclama��es->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Reclamante1", L"Reclamante2" });
			this->lib_listaDeReclama��es->Location = System::Drawing::Point(578, 79);
			this->lib_listaDeReclama��es->Name = L"lib_listaDeReclama��es";
			this->lib_listaDeReclama��es->Size = System::Drawing::Size(177, 134);
			this->lib_listaDeReclama��es->TabIndex = 11;
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
			// lb_hor�rio
			// 
			this->lb_hor�rio->AutoSize = true;
			this->lb_hor�rio->Location = System::Drawing::Point(562, 305);
			this->lb_hor�rio->Name = L"lb_hor�rio";
			this->lb_hor�rio->Size = System::Drawing::Size(44, 13);
			this->lb_hor�rio->TabIndex = 14;
			this->lb_hor�rio->Text = L"Hor�rio:";
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
			this->Controls->Add(this->lb_hor�rio);
			this->Controls->Add(this->lb_data);
			this->Controls->Add(this->lb_nome);
			this->Controls->Add(this->lib_listaDeReclama��es);
			this->Controls->Add(this->lb_listaDeReclama��es);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pb_fotos);
			this->Controls->Add(this->informa��esReferentesAoBuraco);
			this->Controls->Add(this->lb_regional);
			this->Controls->Add(this->lb_posi��oRelativa);
			this->Controls->Add(this->lb_tamanho);
			this->Controls->Add(this->lb_localiza��o);
			this->Controls->Add(this->lb_n�meroDeID);
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
