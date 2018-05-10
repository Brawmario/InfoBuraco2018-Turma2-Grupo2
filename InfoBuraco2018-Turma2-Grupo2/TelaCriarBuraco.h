#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CriarBuraco
	/// </summary>
	public ref class TelaCriarBuraco : public System::Windows::Forms::Form
	{
	public:
		TelaCriarBuraco(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaCriarBuraco()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb1_criarburaco;
	private: System::Windows::Forms::Label^  lb2_criarburaco;
	private: System::Windows::Forms::Label^  lb3_criarburaco;
	private: System::Windows::Forms::CheckBox^  chkb_criarburaco;
	private: System::Windows::Forms::ComboBox^  cb1_criarburaco;
	private: System::Windows::Forms::Label^  lb4_criarburaco;
	private: System::Windows::Forms::Label^  lb5_criarburaco;
	private: System::Windows::Forms::Label^  lb6_criarburaco;
	private: System::Windows::Forms::Label^  lb7_criarburaco;
	private: System::Windows::Forms::Button^  bt1_criarburaco;
	private: System::Windows::Forms::Button^  bt2_criarburaco;
	private: System::Windows::Forms::ComboBox^  cb2_criarburaco;
	private: System::Windows::Forms::ComboBox^  cb3_criarburaco;
	private: System::Windows::Forms::Button^  bt3_criarburaco;
	private: System::Windows::Forms::PictureBox^  pb_criarburaco;
	private: System::Windows::Forms::TextBox^  tb1_criarburaco;


	private: System::Windows::Forms::TextBox^  tb2_criarburaco;
	private: System::Windows::Forms::TextBox^  tb3_criarburaco;
	private: System::Windows::Forms::DateTimePicker^  dtp_criarburaco;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lb1_criarburaco = (gcnew System::Windows::Forms::Label());
			this->lb2_criarburaco = (gcnew System::Windows::Forms::Label());
			this->lb3_criarburaco = (gcnew System::Windows::Forms::Label());
			this->chkb_criarburaco = (gcnew System::Windows::Forms::CheckBox());
			this->cb1_criarburaco = (gcnew System::Windows::Forms::ComboBox());
			this->lb4_criarburaco = (gcnew System::Windows::Forms::Label());
			this->lb5_criarburaco = (gcnew System::Windows::Forms::Label());
			this->lb6_criarburaco = (gcnew System::Windows::Forms::Label());
			this->lb7_criarburaco = (gcnew System::Windows::Forms::Label());
			this->bt1_criarburaco = (gcnew System::Windows::Forms::Button());
			this->bt2_criarburaco = (gcnew System::Windows::Forms::Button());
			this->cb2_criarburaco = (gcnew System::Windows::Forms::ComboBox());
			this->cb3_criarburaco = (gcnew System::Windows::Forms::ComboBox());
			this->bt3_criarburaco = (gcnew System::Windows::Forms::Button());
			this->pb_criarburaco = (gcnew System::Windows::Forms::PictureBox());
			this->tb1_criarburaco = (gcnew System::Windows::Forms::TextBox());
			this->tb2_criarburaco = (gcnew System::Windows::Forms::TextBox());
			this->tb3_criarburaco = (gcnew System::Windows::Forms::TextBox());
			this->dtp_criarburaco = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_criarburaco))->BeginInit();
			this->SuspendLayout();
			// 
			// lb1_criarburaco
			// 
			this->lb1_criarburaco->AutoSize = true;
			this->lb1_criarburaco->Location = System::Drawing::Point(45, 28);
			this->lb1_criarburaco->Name = L"lb1_criarburaco";
			this->lb1_criarburaco->Size = System::Drawing::Size(122, 13);
			this->lb1_criarburaco->TabIndex = 0;
			this->lb1_criarburaco->Text = L"Contato do Reclamante:";
			// 
			// lb2_criarburaco
			// 
			this->lb2_criarburaco->AutoSize = true;
			this->lb2_criarburaco->Location = System::Drawing::Point(45, 66);
			this->lb2_criarburaco->Name = L"lb2_criarburaco";
			this->lb2_criarburaco->Size = System::Drawing::Size(151, 13);
			this->lb2_criarburaco->TabIndex = 1;
			this->lb2_criarburaco->Text = L"Data e Hora da Comunicação:\r\n";
			// 
			// lb3_criarburaco
			// 
			this->lb3_criarburaco->AutoSize = true;
			this->lb3_criarburaco->Location = System::Drawing::Point(45, 104);
			this->lb3_criarburaco->Name = L"lb3_criarburaco";
			this->lb3_criarburaco->Size = System::Drawing::Size(62, 13);
			this->lb3_criarburaco->TabIndex = 2;
			this->lb3_criarburaco->Text = L"Fotografias:";
			this->lb3_criarburaco->Click += gcnew System::EventHandler(this, &TelaCriarBuraco::label3_Click);
			// 
			// chkb_criarburaco
			// 
			this->chkb_criarburaco->AutoSize = true;
			this->chkb_criarburaco->Location = System::Drawing::Point(47, 266);
			this->chkb_criarburaco->Name = L"chkb_criarburaco";
			this->chkb_criarburaco->Size = System::Drawing::Size(120, 17);
			this->chkb_criarburaco->TabIndex = 4;
			this->chkb_criarburaco->Text = L"Buraco Já Existente";
			this->chkb_criarburaco->UseVisualStyleBackColor = true;
			this->chkb_criarburaco->CheckedChanged += gcnew System::EventHandler(this, &TelaCriarBuraco::chkb_criarburaco_CheckedChanged);
			// 
			// cb1_criarburaco
			// 
			this->cb1_criarburaco->Enabled = false;
			this->cb1_criarburaco->FormattingEnabled = true;
			this->cb1_criarburaco->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Buraco0", L"Buraco1", L"Buraco2", L"Buraco3",
					L"Buraco4"
			});
			this->cb1_criarburaco->Location = System::Drawing::Point(243, 264);
			this->cb1_criarburaco->Name = L"cb1_criarburaco";
			this->cb1_criarburaco->Size = System::Drawing::Size(121, 21);
			this->cb1_criarburaco->TabIndex = 5;
			// 
			// lb4_criarburaco
			// 
			this->lb4_criarburaco->AutoSize = true;
			this->lb4_criarburaco->Location = System::Drawing::Point(45, 310);
			this->lb4_criarburaco->Name = L"lb4_criarburaco";
			this->lb4_criarburaco->Size = System::Drawing::Size(119, 13);
			this->lb4_criarburaco->TabIndex = 6;
			this->lb4_criarburaco->Text = L"Localização do Buraco:";
			// 
			// lb5_criarburaco
			// 
			this->lb5_criarburaco->AutoSize = true;
			this->lb5_criarburaco->Location = System::Drawing::Point(45, 346);
			this->lb5_criarburaco->Name = L"lb5_criarburaco";
			this->lb5_criarburaco->Size = System::Drawing::Size(55, 13);
			this->lb5_criarburaco->TabIndex = 7;
			this->lb5_criarburaco->Text = L"Tamanho:";
			// 
			// lb6_criarburaco
			// 
			this->lb6_criarburaco->AutoSize = true;
			this->lb6_criarburaco->Location = System::Drawing::Point(45, 382);
			this->lb6_criarburaco->Name = L"lb6_criarburaco";
			this->lb6_criarburaco->Size = System::Drawing::Size(90, 13);
			this->lb6_criarburaco->TabIndex = 8;
			this->lb6_criarburaco->Text = L"Posição Relativa:";
			this->lb6_criarburaco->Click += gcnew System::EventHandler(this, &TelaCriarBuraco::label6_Click);
			// 
			// lb7_criarburaco
			// 
			this->lb7_criarburaco->AutoSize = true;
			this->lb7_criarburaco->Location = System::Drawing::Point(44, 232);
			this->lb7_criarburaco->Name = L"lb7_criarburaco";
			this->lb7_criarburaco->Size = System::Drawing::Size(149, 13);
			this->lb7_criarburaco->TabIndex = 9;
			this->lb7_criarburaco->Text = L"Identificação da Reclamação:";
			// 
			// bt1_criarburaco
			// 
			this->bt1_criarburaco->Location = System::Drawing::Point(60, 419);
			this->bt1_criarburaco->Name = L"bt1_criarburaco";
			this->bt1_criarburaco->Size = System::Drawing::Size(75, 23);
			this->bt1_criarburaco->TabIndex = 10;
			this->bt1_criarburaco->Text = L"Voltar";
			this->bt1_criarburaco->UseVisualStyleBackColor = true;
			this->bt1_criarburaco->Click += gcnew System::EventHandler(this, &TelaCriarBuraco::bt1_criarburaco_Click);
			// 
			// bt2_criarburaco
			// 
			this->bt2_criarburaco->Location = System::Drawing::Point(289, 419);
			this->bt2_criarburaco->Name = L"bt2_criarburaco";
			this->bt2_criarburaco->Size = System::Drawing::Size(75, 23);
			this->bt2_criarburaco->TabIndex = 11;
			this->bt2_criarburaco->Text = L"Criar";
			this->bt2_criarburaco->UseVisualStyleBackColor = true;
			this->bt2_criarburaco->Click += gcnew System::EventHandler(this, &TelaCriarBuraco::bt2_criarburaco_Click);
			// 
			// cb2_criarburaco
			// 
			this->cb2_criarburaco->FormattingEnabled = true;
			this->cb2_criarburaco->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->cb2_criarburaco->Location = System::Drawing::Point(243, 343);
			this->cb2_criarburaco->Name = L"cb2_criarburaco";
			this->cb2_criarburaco->Size = System::Drawing::Size(121, 21);
			this->cb2_criarburaco->TabIndex = 12;
			// 
			// cb3_criarburaco
			// 
			this->cb3_criarburaco->FormattingEnabled = true;
			this->cb3_criarburaco->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Meio da rua", L"Junta à guia", L"Op3",
					L"Op4"
			});
			this->cb3_criarburaco->Location = System::Drawing::Point(243, 382);
			this->cb3_criarburaco->Name = L"cb3_criarburaco";
			this->cb3_criarburaco->Size = System::Drawing::Size(121, 21);
			this->cb3_criarburaco->TabIndex = 13;
			// 
			// bt3_criarburaco
			// 
			this->bt3_criarburaco->Location = System::Drawing::Point(263, 99);
			this->bt3_criarburaco->Name = L"bt3_criarburaco";
			this->bt3_criarburaco->Size = System::Drawing::Size(75, 23);
			this->bt3_criarburaco->TabIndex = 14;
			this->bt3_criarburaco->Text = L"Upload";
			this->bt3_criarburaco->UseVisualStyleBackColor = true;
			// 
			// pb_criarburaco
			// 
			this->pb_criarburaco->Location = System::Drawing::Point(243, 128);
			this->pb_criarburaco->Name = L"pb_criarburaco";
			this->pb_criarburaco->Size = System::Drawing::Size(121, 89);
			this->pb_criarburaco->TabIndex = 15;
			this->pb_criarburaco->TabStop = false;
			// 
			// tb1_criarburaco
			// 
			this->tb1_criarburaco->Location = System::Drawing::Point(243, 25);
			this->tb1_criarburaco->Name = L"tb1_criarburaco";
			this->tb1_criarburaco->Size = System::Drawing::Size(121, 20);
			this->tb1_criarburaco->TabIndex = 16;
			// 
			// tb2_criarburaco
			// 
			this->tb2_criarburaco->Location = System::Drawing::Point(243, 229);
			this->tb2_criarburaco->Name = L"tb2_criarburaco";
			this->tb2_criarburaco->Size = System::Drawing::Size(121, 20);
			this->tb2_criarburaco->TabIndex = 17;
			// 
			// tb3_criarburaco
			// 
			this->tb3_criarburaco->Location = System::Drawing::Point(243, 307);
			this->tb3_criarburaco->Name = L"tb3_criarburaco";
			this->tb3_criarburaco->Size = System::Drawing::Size(121, 20);
			this->tb3_criarburaco->TabIndex = 18;
			// 
			// dtp_criarburaco
			// 
			this->dtp_criarburaco->Location = System::Drawing::Point(243, 59);
			this->dtp_criarburaco->Name = L"dtp_criarburaco";
			this->dtp_criarburaco->Size = System::Drawing::Size(121, 20);
			this->dtp_criarburaco->TabIndex = 19;
			// 
			// TelaCriarBuraco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 468);
			this->Controls->Add(this->dtp_criarburaco);
			this->Controls->Add(this->tb3_criarburaco);
			this->Controls->Add(this->tb2_criarburaco);
			this->Controls->Add(this->tb1_criarburaco);
			this->Controls->Add(this->pb_criarburaco);
			this->Controls->Add(this->bt3_criarburaco);
			this->Controls->Add(this->cb3_criarburaco);
			this->Controls->Add(this->cb2_criarburaco);
			this->Controls->Add(this->bt2_criarburaco);
			this->Controls->Add(this->bt1_criarburaco);
			this->Controls->Add(this->lb7_criarburaco);
			this->Controls->Add(this->lb6_criarburaco);
			this->Controls->Add(this->lb5_criarburaco);
			this->Controls->Add(this->lb4_criarburaco);
			this->Controls->Add(this->cb1_criarburaco);
			this->Controls->Add(this->chkb_criarburaco);
			this->Controls->Add(this->lb3_criarburaco);
			this->Controls->Add(this->lb2_criarburaco);
			this->Controls->Add(this->lb1_criarburaco);
			this->Name = L"TelaCriarBuraco";
			this->Text = L"CriarBuraco";
			this->Load += gcnew System::EventHandler(this, &TelaCriarBuraco::CriarBuraco_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_criarburaco))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void CriarBuraco_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chkb_criarburaco_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->chkb_criarburaco->Checked)
	{
		this->cb1_criarburaco->Enabled = true;
		this->tb3_criarburaco->Enabled = false;
		this->cb2_criarburaco->Enabled = false;
		this->cb3_criarburaco->Enabled = false;
	}
	else
	{
		this->cb1_criarburaco->Enabled = false;
		this->tb3_criarburaco->Enabled = true;
		this->cb2_criarburaco->Enabled = true;
		this->cb3_criarburaco->Enabled = true;
	}
}
private: System::Void bt2_criarburaco_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bt1_criarburaco_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
