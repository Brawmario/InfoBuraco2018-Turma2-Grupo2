#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaListaOSGestor
	/// </summary>
	public ref class TelaListaOSGestor : public System::Windows::Forms::Form
	{
	public:
		TelaListaOSGestor(void)
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
		~TelaListaOSGestor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lbox_listaosgestor;
	private: System::Windows::Forms::Button^  bt1_listaosgestor;

	private: System::Windows::Forms::Label^  lb1_listaosgestor;
	private: System::Windows::Forms::Label^  lb2_listaosgestor;
	private: System::Windows::Forms::Label^  lb3_listaosgestor;
	private: System::Windows::Forms::Label^  lb4_listaosgestor;
	private: System::Windows::Forms::Label^  lb5_listaosgestor;
	private: System::Windows::Forms::Label^  lb6_listaosgestor;
	private: System::Windows::Forms::Label^  lb7_listaosgestor;
	private: System::Windows::Forms::Label^  lb8_listaosgestor;
	private: System::Windows::Forms::Label^  lb9_listaosgestor;
	private: System::Windows::Forms::Label^  lb10_listaosgestor;
	private: System::Windows::Forms::Label^  lb11_listaosgestor;
	private: System::Windows::Forms::Label^  lb12_listaosgestor;
	private: System::Windows::Forms::Label^  lb13_listaosgestor;
	private: System::Windows::Forms::Label^  lb14_listaosgestor;
	private: System::Windows::Forms::CheckBox^  chk_listaosgestor;
	private: System::Windows::Forms::ComboBox^  cb_listaosgestor;
	private: System::Windows::Forms::Button^  bt2_listaosgestor;




	protected:

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
			this->lbox_listaosgestor = (gcnew System::Windows::Forms::ListBox());
			this->bt1_listaosgestor = (gcnew System::Windows::Forms::Button());
			this->lb1_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb2_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb3_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb4_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb5_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb6_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb7_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb8_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb9_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb10_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb11_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb12_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb13_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->lb14_listaosgestor = (gcnew System::Windows::Forms::Label());
			this->chk_listaosgestor = (gcnew System::Windows::Forms::CheckBox());
			this->cb_listaosgestor = (gcnew System::Windows::Forms::ComboBox());
			this->bt2_listaosgestor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbox_listaosgestor
			// 
			this->lbox_listaosgestor->FormattingEnabled = true;
			this->lbox_listaosgestor->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"OS0", L"OS1", L"OS2", L"OS3", L"OS4",
					L"OS5", L"OS6", L"OS7", L"OS8", L"OS9", L"OS10", L"OS11", L"OS12", L"OS13", L"OS14", L"OS15", L"OS16", L"OS17", L"OS18", L"OS19",
					L"OS20", L"OS21", L"OS22", L"OS23", L"OS24"
			});
			this->lbox_listaosgestor->Location = System::Drawing::Point(12, 43);
			this->lbox_listaosgestor->Name = L"lbox_listaosgestor";
			this->lbox_listaosgestor->Size = System::Drawing::Size(108, 277);
			this->lbox_listaosgestor->TabIndex = 0;
			this->lbox_listaosgestor->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaListaOSGestor::listBox1_SelectedIndexChanged);
			// 
			// bt1_listaosgestor
			// 
			this->bt1_listaosgestor->Location = System::Drawing::Point(22, 12);
			this->bt1_listaosgestor->Name = L"bt1_listaosgestor";
			this->bt1_listaosgestor->Size = System::Drawing::Size(75, 23);
			this->bt1_listaosgestor->TabIndex = 1;
			this->bt1_listaosgestor->Text = L"Voltar";
			this->bt1_listaosgestor->UseVisualStyleBackColor = true;
			this->bt1_listaosgestor->Click += gcnew System::EventHandler(this, &TelaListaOSGestor::bt1_listaosgestor_Click);
			// 
			// lb1_listaosgestor
			// 
			this->lb1_listaosgestor->AutoSize = true;
			this->lb1_listaosgestor->Location = System::Drawing::Point(164, 43);
			this->lb1_listaosgestor->Name = L"lb1_listaosgestor";
			this->lb1_listaosgestor->Size = System::Drawing::Size(80, 13);
			this->lb1_listaosgestor->TabIndex = 2;
			this->lb1_listaosgestor->Text = L"Número da OS:";
			// 
			// lb2_listaosgestor
			// 
			this->lb2_listaosgestor->AutoSize = true;
			this->lb2_listaosgestor->Location = System::Drawing::Point(164, 83);
			this->lb2_listaosgestor->Name = L"lb2_listaosgestor";
			this->lb2_listaosgestor->Size = System::Drawing::Size(134, 13);
			this->lb2_listaosgestor->TabIndex = 3;
			this->lb2_listaosgestor->Text = L"Prioridade de Atendimento:";
			// 
			// lb3_listaosgestor
			// 
			this->lb3_listaosgestor->AutoSize = true;
			this->lb3_listaosgestor->Location = System::Drawing::Point(164, 123);
			this->lb3_listaosgestor->Name = L"lb3_listaosgestor";
			this->lb3_listaosgestor->Size = System::Drawing::Size(113, 13);
			this->lb3_listaosgestor->TabIndex = 4;
			this->lb3_listaosgestor->Text = L"Estimativa de Pessoal:";
			// 
			// lb4_listaosgestor
			// 
			this->lb4_listaosgestor->AutoSize = true;
			this->lb4_listaosgestor->Location = System::Drawing::Point(164, 163);
			this->lb4_listaosgestor->Name = L"lb4_listaosgestor";
			this->lb4_listaosgestor->Size = System::Drawing::Size(138, 13);
			this->lb4_listaosgestor->TabIndex = 5;
			this->lb4_listaosgestor->Text = L"Estimativa de Equipamento:";
			// 
			// lb5_listaosgestor
			// 
			this->lb5_listaosgestor->AutoSize = true;
			this->lb5_listaosgestor->Location = System::Drawing::Point(164, 203);
			this->lb5_listaosgestor->Name = L"lb5_listaosgestor";
			this->lb5_listaosgestor->Size = System::Drawing::Size(113, 13);
			this->lb5_listaosgestor->TabIndex = 6;
			this->lb5_listaosgestor->Text = L"Estimativa de Material:";
			// 
			// lb6_listaosgestor
			// 
			this->lb6_listaosgestor->AutoSize = true;
			this->lb6_listaosgestor->Location = System::Drawing::Point(164, 239);
			this->lb6_listaosgestor->Name = L"lb6_listaosgestor";
			this->lb6_listaosgestor->Size = System::Drawing::Size(143, 13);
			this->lb6_listaosgestor->TabIndex = 7;
			this->lb6_listaosgestor->Text = L"Custo Estimado do Conserto:\r\n";
			// 
			// lb7_listaosgestor
			// 
			this->lb7_listaosgestor->AutoSize = true;
			this->lb7_listaosgestor->Location = System::Drawing::Point(164, 278);
			this->lb7_listaosgestor->Name = L"lb7_listaosgestor";
			this->lb7_listaosgestor->Size = System::Drawing::Size(40, 13);
			this->lb7_listaosgestor->TabIndex = 8;
			this->lb7_listaosgestor->Text = L"Status:";
			// 
			// lb8_listaosgestor
			// 
			this->lb8_listaosgestor->AutoSize = true;
			this->lb8_listaosgestor->Location = System::Drawing::Point(347, 43);
			this->lb8_listaosgestor->Name = L"lb8_listaosgestor";
			this->lb8_listaosgestor->Size = System::Drawing::Size(0, 13);
			this->lb8_listaosgestor->TabIndex = 9;
			// 
			// lb9_listaosgestor
			// 
			this->lb9_listaosgestor->AutoSize = true;
			this->lb9_listaosgestor->Location = System::Drawing::Point(347, 83);
			this->lb9_listaosgestor->Name = L"lb9_listaosgestor";
			this->lb9_listaosgestor->Size = System::Drawing::Size(0, 13);
			this->lb9_listaosgestor->TabIndex = 10;
			// 
			// lb10_listaosgestor
			// 
			this->lb10_listaosgestor->AutoSize = true;
			this->lb10_listaosgestor->Location = System::Drawing::Point(347, 123);
			this->lb10_listaosgestor->Name = L"lb10_listaosgestor";
			this->lb10_listaosgestor->Size = System::Drawing::Size(0, 13);
			this->lb10_listaosgestor->TabIndex = 11;
			// 
			// lb11_listaosgestor
			// 
			this->lb11_listaosgestor->AutoSize = true;
			this->lb11_listaosgestor->Location = System::Drawing::Point(347, 163);
			this->lb11_listaosgestor->Name = L"lb11_listaosgestor";
			this->lb11_listaosgestor->Size = System::Drawing::Size(0, 13);
			this->lb11_listaosgestor->TabIndex = 12;
			// 
			// lb12_listaosgestor
			// 
			this->lb12_listaosgestor->AutoSize = true;
			this->lb12_listaosgestor->Location = System::Drawing::Point(347, 203);
			this->lb12_listaosgestor->Name = L"lb12_listaosgestor";
			this->lb12_listaosgestor->Size = System::Drawing::Size(0, 13);
			this->lb12_listaosgestor->TabIndex = 13;
			// 
			// lb13_listaosgestor
			// 
			this->lb13_listaosgestor->AutoSize = true;
			this->lb13_listaosgestor->Location = System::Drawing::Point(347, 239);
			this->lb13_listaosgestor->Name = L"lb13_listaosgestor";
			this->lb13_listaosgestor->Size = System::Drawing::Size(0, 13);
			this->lb13_listaosgestor->TabIndex = 14;
			// 
			// lb14_listaosgestor
			// 
			this->lb14_listaosgestor->AutoSize = true;
			this->lb14_listaosgestor->Location = System::Drawing::Point(347, 278);
			this->lb14_listaosgestor->Name = L"lb14_listaosgestor";
			this->lb14_listaosgestor->Size = System::Drawing::Size(0, 13);
			this->lb14_listaosgestor->TabIndex = 15;
			// 
			// chk_listaosgestor
			// 
			this->chk_listaosgestor->AutoSize = true;
			this->chk_listaosgestor->Location = System::Drawing::Point(531, 83);
			this->chk_listaosgestor->Name = L"chk_listaosgestor";
			this->chk_listaosgestor->Size = System::Drawing::Size(56, 17);
			this->chk_listaosgestor->TabIndex = 16;
			this->chk_listaosgestor->Text = L"Alterar";
			this->chk_listaosgestor->UseVisualStyleBackColor = true;
			this->chk_listaosgestor->CheckedChanged += gcnew System::EventHandler(this, &TelaListaOSGestor::chk_listaosgestor_CheckedChanged);
			// 
			// cb_listaosgestor
			// 
			this->cb_listaosgestor->Enabled = false;
			this->cb_listaosgestor->FormattingEnabled = true;
			this->cb_listaosgestor->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Baixa", L"Média", L"Alta" });
			this->cb_listaosgestor->Location = System::Drawing::Point(605, 83);
			this->cb_listaosgestor->Name = L"cb_listaosgestor";
			this->cb_listaosgestor->Size = System::Drawing::Size(121, 21);
			this->cb_listaosgestor->TabIndex = 17;
			// 
			// bt2_listaosgestor
			// 
			this->bt2_listaosgestor->Location = System::Drawing::Point(396, 297);
			this->bt2_listaosgestor->Name = L"bt2_listaosgestor";
			this->bt2_listaosgestor->Size = System::Drawing::Size(75, 23);
			this->bt2_listaosgestor->TabIndex = 18;
			this->bt2_listaosgestor->Text = L"Alterar";
			this->bt2_listaosgestor->UseVisualStyleBackColor = true;
			this->bt2_listaosgestor->Click += gcnew System::EventHandler(this, &TelaListaOSGestor::bt2_listaosgestor_Click);
			// 
			// TelaListaOSGestor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 332);
			this->Controls->Add(this->bt2_listaosgestor);
			this->Controls->Add(this->cb_listaosgestor);
			this->Controls->Add(this->chk_listaosgestor);
			this->Controls->Add(this->lb14_listaosgestor);
			this->Controls->Add(this->lb13_listaosgestor);
			this->Controls->Add(this->lb12_listaosgestor);
			this->Controls->Add(this->lb11_listaosgestor);
			this->Controls->Add(this->lb10_listaosgestor);
			this->Controls->Add(this->lb9_listaosgestor);
			this->Controls->Add(this->lb8_listaosgestor);
			this->Controls->Add(this->lb7_listaosgestor);
			this->Controls->Add(this->lb6_listaosgestor);
			this->Controls->Add(this->lb5_listaosgestor);
			this->Controls->Add(this->lb4_listaosgestor);
			this->Controls->Add(this->lb3_listaosgestor);
			this->Controls->Add(this->lb2_listaosgestor);
			this->Controls->Add(this->lb1_listaosgestor);
			this->Controls->Add(this->bt1_listaosgestor);
			this->Controls->Add(this->lbox_listaosgestor);
			this->Name = L"TelaListaOSGestor";
			this->Text = L"TelaListaOSGestor";
			this->Load += gcnew System::EventHandler(this, &TelaListaOSGestor::TelaListaOSGestor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			this->lb8_listaosgestor->Text = "OS" + Convert::ToString(this->lbox_listaosgestor->SelectedIndex);
			this->lb9_listaosgestor->Text = "PrioridadeOS" + Convert::ToString(this->lbox_listaosgestor->SelectedIndex);
			this->lb10_listaosgestor->Text = "PessoalOS" + Convert::ToString(this->lbox_listaosgestor->SelectedIndex);
			this->lb11_listaosgestor->Text = "EquipamentoOS" + Convert::ToString(this->lbox_listaosgestor->SelectedIndex);
			this->lb12_listaosgestor->Text = "MaterialOS" + Convert::ToString(this->lbox_listaosgestor->SelectedIndex);
			this->lb13_listaosgestor->Text = "CustoOS" + Convert::ToString(this->lbox_listaosgestor->SelectedIndex);
			this->lb14_listaosgestor->Text = "StatusOS" + Convert::ToString(this->lbox_listaosgestor->SelectedIndex);
		}
	private: System::Void TelaListaOSGestor_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void chk_listaosgestor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->chk_listaosgestor->Checked)
		{
			this->cb_listaosgestor->Enabled = true;
		}
		else
		{
			this->cb_listaosgestor->Enabled = false;
		}
	}
private: System::Void bt1_listaosgestor_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bt2_listaosgestor_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
