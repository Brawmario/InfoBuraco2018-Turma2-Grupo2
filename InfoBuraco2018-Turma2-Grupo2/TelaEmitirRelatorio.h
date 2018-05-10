#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sum�rio para EmitirRelatorio
	/// </summary>
	public ref class TelaEmitirRelatorio : public System::Windows::Forms::Form
	{
	public:
		TelaEmitirRelatorio(void)
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
		~TelaEmitirRelatorio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_voltar;
	private: System::Windows::Forms::Label^  lb_tipoDeRelat�rio;
	private: System::Windows::Forms::Label^  lb_OS;
	protected:



	private: System::Windows::Forms::Button^  bt_gerar;
	private: System::Windows::Forms::ComboBox^  cb_tipoDeRelat�rio;


	private: System::Windows::Forms::ComboBox^  cb_OS;

	private: System::Windows::Forms::Label^  lb_emiss�oDeRelat�rio;

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
			this->lb_tipoDeRelat�rio = (gcnew System::Windows::Forms::Label());
			this->lb_OS = (gcnew System::Windows::Forms::Label());
			this->bt_gerar = (gcnew System::Windows::Forms::Button());
			this->cb_tipoDeRelat�rio = (gcnew System::Windows::Forms::ComboBox());
			this->cb_OS = (gcnew System::Windows::Forms::ComboBox());
			this->lb_emiss�oDeRelat�rio = (gcnew System::Windows::Forms::Label());
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
			// lb_tipoDeRelat�rio
			// 
			this->lb_tipoDeRelat�rio->AutoSize = true;
			this->lb_tipoDeRelat�rio->Location = System::Drawing::Point(12, 52);
			this->lb_tipoDeRelat�rio->Name = L"lb_tipoDeRelat�rio";
			this->lb_tipoDeRelat�rio->Size = System::Drawing::Size(91, 13);
			this->lb_tipoDeRelat�rio->TabIndex = 1;
			this->lb_tipoDeRelat�rio->Text = L"Tipo de Relat�rio:";
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
			// cb_tipoDeRelat�rio
			// 
			this->cb_tipoDeRelat�rio->FormattingEnabled = true;
			this->cb_tipoDeRelat�rio->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"F�sico", L"F�sico-Financeiro" });
			this->cb_tipoDeRelat�rio->Location = System::Drawing::Point(124, 49);
			this->cb_tipoDeRelat�rio->Name = L"cb_tipoDeRelat�rio";
			this->cb_tipoDeRelat�rio->Size = System::Drawing::Size(121, 21);
			this->cb_tipoDeRelat�rio->TabIndex = 4;
			this->cb_tipoDeRelat�rio->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaEmitirRelatorio::comboBox1_SelectedIndexChanged);
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
			// lb_emiss�oDeRelat�rio
			// 
			this->lb_emiss�oDeRelat�rio->AutoSize = true;
			this->lb_emiss�oDeRelat�rio->Location = System::Drawing::Point(79, 18);
			this->lb_emiss�oDeRelat�rio->Name = L"lb_emiss�oDeRelat�rio";
			this->lb_emiss�oDeRelat�rio->Size = System::Drawing::Size(106, 13);
			this->lb_emiss�oDeRelat�rio->TabIndex = 6;
			this->lb_emiss�oDeRelat�rio->Text = L"Emiss�o de Relat�rio";
			// 
			// TelaEmitirRelatorio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(257, 197);
			this->Controls->Add(this->lb_emiss�oDeRelat�rio);
			this->Controls->Add(this->cb_OS);
			this->Controls->Add(this->cb_tipoDeRelat�rio);
			this->Controls->Add(this->bt_gerar);
			this->Controls->Add(this->lb_OS);
			this->Controls->Add(this->lb_tipoDeRelat�rio);
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
