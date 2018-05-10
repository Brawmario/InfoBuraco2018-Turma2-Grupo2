#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para FormulacaoDePlanoDeSaida
	/// </summary>
	public ref class TelaFormulacaoDePlanoDeSaida : public System::Windows::Forms::Form
	{
	public:
		TelaFormulacaoDePlanoDeSaida(void)
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
		~TelaFormulacaoDePlanoDeSaida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_gerarPlano;
	private: System::Windows::Forms::Label^  lb_equipe;
	private: System::Windows::Forms::Label^  lb_data;
	protected:

	protected:


	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ListBox^  lib_listaDeOS;
	private: System::Windows::Forms::Label^  lb_listaDeOS;
	private: System::Windows::Forms::Label^  lb_equipamentosOS;



	private: System::Windows::Forms::ListBox^  lib_equipamentos;
	private: System::Windows::Forms::Label^  lb_equipamento2;
	private: System::Windows::Forms::Label^  lb_quantidade2;



	private: System::Windows::Forms::Button^  bt_adicionarEquipamento;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  lb_unidade2;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  lb_unidade1;

	private: System::Windows::Forms::Label^  lb_quantidade1;

	private: System::Windows::Forms::Label^  lb_equipamento1;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;


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
			this->bt_gerarPlano = (gcnew System::Windows::Forms::Button());
			this->lb_equipe = (gcnew System::Windows::Forms::Label());
			this->lb_data = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lib_listaDeOS = (gcnew System::Windows::Forms::ListBox());
			this->lb_listaDeOS = (gcnew System::Windows::Forms::Label());
			this->lb_equipamentosOS = (gcnew System::Windows::Forms::Label());
			this->lib_equipamentos = (gcnew System::Windows::Forms::ListBox());
			this->lb_equipamento2 = (gcnew System::Windows::Forms::Label());
			this->lb_quantidade2 = (gcnew System::Windows::Forms::Label());
			this->bt_adicionarEquipamento = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_unidade2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->lb_unidade1 = (gcnew System::Windows::Forms::Label());
			this->lb_quantidade1 = (gcnew System::Windows::Forms::Label());
			this->lb_equipamento1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// bt_gerarPlano
			// 
			this->bt_gerarPlano->Location = System::Drawing::Point(375, 394);
			this->bt_gerarPlano->Name = L"bt_gerarPlano";
			this->bt_gerarPlano->Size = System::Drawing::Size(75, 23);
			this->bt_gerarPlano->TabIndex = 0;
			this->bt_gerarPlano->Text = L"Gerar Plano";
			this->bt_gerarPlano->UseVisualStyleBackColor = true;
			this->bt_gerarPlano->Click += gcnew System::EventHandler(this, &TelaFormulacaoDePlanoDeSaida::bt_gerarPlano_Click);
			// 
			// lb_equipe
			// 
			this->lb_equipe->AutoSize = true;
			this->lb_equipe->Location = System::Drawing::Point(266, 332);
			this->lb_equipe->Name = L"lb_equipe";
			this->lb_equipe->Size = System::Drawing::Size(43, 13);
			this->lb_equipe->TabIndex = 1;
			this->lb_equipe->Text = L"Equipe:";
			// 
			// lb_data
			// 
			this->lb_data->AutoSize = true;
			this->lb_data->Location = System::Drawing::Point(266, 362);
			this->lb_data->Name = L"lb_data";
			this->lb_data->Size = System::Drawing::Size(33, 13);
			this->lb_data->TabIndex = 2;
			this->lb_data->Text = L"Data:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(322, 356);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// lib_listaDeOS
			// 
			this->lib_listaDeOS->FormattingEnabled = true;
			this->lib_listaDeOS->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"OS1", L"OS2" });
			this->lib_listaDeOS->Location = System::Drawing::Point(20, 52);
			this->lib_listaDeOS->Name = L"lib_listaDeOS";
			this->lib_listaDeOS->Size = System::Drawing::Size(185, 342);
			this->lib_listaDeOS->TabIndex = 5;
			// 
			// lb_listaDeOS
			// 
			this->lb_listaDeOS->AutoSize = true;
			this->lb_listaDeOS->Location = System::Drawing::Point(77, 27);
			this->lb_listaDeOS->Name = L"lb_listaDeOS";
			this->lb_listaDeOS->Size = System::Drawing::Size(62, 13);
			this->lb_listaDeOS->TabIndex = 6;
			this->lb_listaDeOS->Text = L"Lista de OS";
			// 
			// lb_equipamentosOS
			// 
			this->lb_equipamentosOS->AutoSize = true;
			this->lb_equipamentosOS->Location = System::Drawing::Point(372, 27);
			this->lb_equipamentosOS->Name = L"lb_equipamentosOS";
			this->lb_equipamentosOS->Size = System::Drawing::Size(92, 13);
			this->lb_equipamentosOS->TabIndex = 7;
			this->lb_equipamentosOS->Text = L"Equipamentos OS";
			this->lb_equipamentosOS->Click += gcnew System::EventHandler(this, &TelaFormulacaoDePlanoDeSaida::label4_Click);
			// 
			// lib_equipamentos
			// 
			this->lib_equipamentos->FormattingEnabled = true;
			this->lib_equipamentos->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Equipamento1", L"Equipamento2" });
			this->lib_equipamentos->Location = System::Drawing::Point(245, 52);
			this->lib_equipamentos->Name = L"lib_equipamentos";
			this->lib_equipamentos->Size = System::Drawing::Size(162, 121);
			this->lib_equipamentos->TabIndex = 8;
			// 
			// lb_equipamento2
			// 
			this->lb_equipamento2->AutoSize = true;
			this->lb_equipamento2->Location = System::Drawing::Point(266, 194);
			this->lb_equipamento2->Name = L"lb_equipamento2";
			this->lb_equipamento2->Size = System::Drawing::Size(72, 13);
			this->lb_equipamento2->TabIndex = 9;
			this->lb_equipamento2->Text = L"Equipamento:";
			// 
			// lb_quantidade2
			// 
			this->lb_quantidade2->AutoSize = true;
			this->lb_quantidade2->Location = System::Drawing::Point(266, 223);
			this->lb_quantidade2->Name = L"lb_quantidade2";
			this->lb_quantidade2->Size = System::Drawing::Size(65, 13);
			this->lb_quantidade2->TabIndex = 10;
			this->lb_quantidade2->Text = L"Quantidade:";
			// 
			// bt_adicionarEquipamento
			// 
			this->bt_adicionarEquipamento->Location = System::Drawing::Point(328, 287);
			this->bt_adicionarEquipamento->Name = L"bt_adicionarEquipamento";
			this->bt_adicionarEquipamento->Size = System::Drawing::Size(136, 23);
			this->bt_adicionarEquipamento->TabIndex = 11;
			this->bt_adicionarEquipamento->Text = L"Adicionar Equipamento";
			this->bt_adicionarEquipamento->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(344, 221);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(178, 20);
			this->numericUpDown2->TabIndex = 13;
			// 
			// lb_unidade2
			// 
			this->lb_unidade2->AutoSize = true;
			this->lb_unidade2->Location = System::Drawing::Point(266, 253);
			this->lb_unidade2->Name = L"lb_unidade2";
			this->lb_unidade2->Size = System::Drawing::Size(50, 13);
			this->lb_unidade2->TabIndex = 14;
			this->lb_unidade2->Text = L"Unidade:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(322, 329);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 21);
			this->comboBox2->TabIndex = 16;
			// 
			// lb_unidade1
			// 
			this->lb_unidade1->AutoSize = true;
			this->lb_unidade1->Location = System::Drawing::Point(413, 132);
			this->lb_unidade1->Name = L"lb_unidade1";
			this->lb_unidade1->Size = System::Drawing::Size(50, 13);
			this->lb_unidade1->TabIndex = 19;
			this->lb_unidade1->Text = L"Unidade:";
			// 
			// lb_quantidade1
			// 
			this->lb_quantidade1->AutoSize = true;
			this->lb_quantidade1->Location = System::Drawing::Point(413, 102);
			this->lb_quantidade1->Name = L"lb_quantidade1";
			this->lb_quantidade1->Size = System::Drawing::Size(65, 13);
			this->lb_quantidade1->TabIndex = 18;
			this->lb_quantidade1->Text = L"Quantidade:";
			this->lb_quantidade1->Click += gcnew System::EventHandler(this, &TelaFormulacaoDePlanoDeSaida::label9_Click);
			// 
			// lb_equipamento1
			// 
			this->lb_equipamento1->AutoSize = true;
			this->lb_equipamento1->Location = System::Drawing::Point(413, 73);
			this->lb_equipamento1->Name = L"lb_equipamento1";
			this->lb_equipamento1->Size = System::Drawing::Size(72, 13);
			this->lb_equipamento1->TabIndex = 17;
			this->lb_equipamento1->Text = L"Equipamento:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(344, 250);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 20);
			this->textBox1->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(344, 191);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 20);
			this->textBox2->TabIndex = 21;
			// 
			// TelaFormulacaoDePlanoDeSaida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 430);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lb_unidade1);
			this->Controls->Add(this->lb_quantidade1);
			this->Controls->Add(this->lb_equipamento1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->lb_unidade2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->bt_adicionarEquipamento);
			this->Controls->Add(this->lb_quantidade2);
			this->Controls->Add(this->lb_equipamento2);
			this->Controls->Add(this->lib_equipamentos);
			this->Controls->Add(this->lb_equipamentosOS);
			this->Controls->Add(this->lb_listaDeOS);
			this->Controls->Add(this->lib_listaDeOS);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->lb_data);
			this->Controls->Add(this->lb_equipe);
			this->Controls->Add(this->bt_gerarPlano);
			this->Name = L"TelaFormulacaoDePlanoDeSaida";
			this->Text = L"FormulacaoDePlanoDeSaida";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_gerarPlano_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
