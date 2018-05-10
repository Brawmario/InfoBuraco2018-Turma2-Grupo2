#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para EmitirRelatorio
	/// </summary>
	public ref class TelaEmitirRelatorio : public System::Windows::Forms::Form
	{
	public:
		TelaEmitirRelatorio(void)
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
		~TelaEmitirRelatorio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_voltar;
	private: System::Windows::Forms::Label^  lb_tipoDeRelatório;
	private: System::Windows::Forms::Label^  lb_OS;
	protected:



	private: System::Windows::Forms::Button^  bt_gerar;
	private: System::Windows::Forms::ComboBox^  cb_tipoDeRelatório;


	private: System::Windows::Forms::ComboBox^  cb_OS;

	private: System::Windows::Forms::Label^  lb_emissãoDeRelatório;

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
			this->lb_tipoDeRelatório = (gcnew System::Windows::Forms::Label());
			this->lb_OS = (gcnew System::Windows::Forms::Label());
			this->bt_gerar = (gcnew System::Windows::Forms::Button());
			this->cb_tipoDeRelatório = (gcnew System::Windows::Forms::ComboBox());
			this->cb_OS = (gcnew System::Windows::Forms::ComboBox());
			this->lb_emissãoDeRelatório = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_voltar
			// 
			this->bt_voltar->Location = System::Drawing::Point(150, 149);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(75, 23);
			this->bt_voltar->TabIndex = 0;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = true;
			this->bt_voltar->Click += gcnew System::EventHandler(this, &TelaEmitirRelatorio::bt_voltar_Click);
			// 
			// lb_tipoDeRelatório
			// 
			this->lb_tipoDeRelatório->AutoSize = true;
			this->lb_tipoDeRelatório->Location = System::Drawing::Point(12, 52);
			this->lb_tipoDeRelatório->Name = L"lb_tipoDeRelatório";
			this->lb_tipoDeRelatório->Size = System::Drawing::Size(91, 13);
			this->lb_tipoDeRelatório->TabIndex = 1;
			this->lb_tipoDeRelatório->Text = L"Tipo de Relatório:";
			// 
			// lb_OS
			// 
			this->lb_OS->AutoSize = true;
			this->lb_OS->Location = System::Drawing::Point(12, 99);
			this->lb_OS->Name = L"lb_OS";
			this->lb_OS->Size = System::Drawing::Size(25, 13);
			this->lb_OS->TabIndex = 2;
			this->lb_OS->Text = L"OS:";
			// 
			// bt_gerar
			// 
			this->bt_gerar->Location = System::Drawing::Point(44, 149);
			this->bt_gerar->Name = L"bt_gerar";
			this->bt_gerar->Size = System::Drawing::Size(75, 23);
			this->bt_gerar->TabIndex = 3;
			this->bt_gerar->Text = L"Gerar";
			this->bt_gerar->UseVisualStyleBackColor = true;
			this->bt_gerar->Click += gcnew System::EventHandler(this, &TelaEmitirRelatorio::button2_Click);
			// 
			// cb_tipoDeRelatório
			// 
			this->cb_tipoDeRelatório->FormattingEnabled = true;
			this->cb_tipoDeRelatório->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Físico", L"Físico-Financeiro" });
			this->cb_tipoDeRelatório->Location = System::Drawing::Point(124, 49);
			this->cb_tipoDeRelatório->Name = L"cb_tipoDeRelatório";
			this->cb_tipoDeRelatório->Size = System::Drawing::Size(121, 21);
			this->cb_tipoDeRelatório->TabIndex = 4;
			this->cb_tipoDeRelatório->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaEmitirRelatorio::comboBox1_SelectedIndexChanged);
			// 
			// cb_OS
			// 
			this->cb_OS->FormattingEnabled = true;
			this->cb_OS->Location = System::Drawing::Point(124, 96);
			this->cb_OS->Name = L"cb_OS";
			this->cb_OS->Size = System::Drawing::Size(121, 21);
			this->cb_OS->TabIndex = 5;
			this->cb_OS->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaEmitirRelatorio::comboBox2_SelectedIndexChanged);
			// 
			// lb_emissãoDeRelatório
			// 
			this->lb_emissãoDeRelatório->AutoSize = true;
			this->lb_emissãoDeRelatório->Location = System::Drawing::Point(79, 18);
			this->lb_emissãoDeRelatório->Name = L"lb_emissãoDeRelatório";
			this->lb_emissãoDeRelatório->Size = System::Drawing::Size(106, 13);
			this->lb_emissãoDeRelatório->TabIndex = 6;
			this->lb_emissãoDeRelatório->Text = L"Emissão de Relatório";
			// 
			// TelaEmitirRelatorio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(257, 197);
			this->Controls->Add(this->lb_emissãoDeRelatório);
			this->Controls->Add(this->cb_OS);
			this->Controls->Add(this->cb_tipoDeRelatório);
			this->Controls->Add(this->bt_gerar);
			this->Controls->Add(this->lb_OS);
			this->Controls->Add(this->lb_tipoDeRelatório);
			this->Controls->Add(this->bt_voltar);
			this->Name = L"TelaEmitirRelatorio";
			this->Text = L"EmitirRelatorio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bt_voltar_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
