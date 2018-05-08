#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ListaOS
	/// </summary>
	public ref class ListaOS : public System::Windows::Forms::Form
	{
	public:
		ListaOS(void)
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
		~ListaOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lbox_listaos;
	private: System::Windows::Forms::Button^  bt_listaos;
	private: System::Windows::Forms::Label^  lb1_listaos;
	private: System::Windows::Forms::Label^  lb2_listaos;
	private: System::Windows::Forms::Label^  lb3_listaos;
	private: System::Windows::Forms::Label^  lb4_listaos;
	private: System::Windows::Forms::Label^  lb5_listaos;
	private: System::Windows::Forms::Label^  lb6_listaos;
	private: System::Windows::Forms::Label^  lb7_listaos;
	private: System::Windows::Forms::Label^  lb8_listaos;
	private: System::Windows::Forms::Label^  lb9_listaos;
	private: System::Windows::Forms::Label^  lb10_listaos;
	private: System::Windows::Forms::Label^  lb11_listaos;
	private: System::Windows::Forms::Label^  lb12_listaos;
	private: System::Windows::Forms::Label^  lb13_listaos;
	private: System::Windows::Forms::Label^  lb14_listaos;
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
			this->lbox_listaos = (gcnew System::Windows::Forms::ListBox());
			this->bt_listaos = (gcnew System::Windows::Forms::Button());
			this->lb1_listaos = (gcnew System::Windows::Forms::Label());
			this->lb2_listaos = (gcnew System::Windows::Forms::Label());
			this->lb3_listaos = (gcnew System::Windows::Forms::Label());
			this->lb4_listaos = (gcnew System::Windows::Forms::Label());
			this->lb5_listaos = (gcnew System::Windows::Forms::Label());
			this->lb6_listaos = (gcnew System::Windows::Forms::Label());
			this->lb7_listaos = (gcnew System::Windows::Forms::Label());
			this->lb8_listaos = (gcnew System::Windows::Forms::Label());
			this->lb9_listaos = (gcnew System::Windows::Forms::Label());
			this->lb10_listaos = (gcnew System::Windows::Forms::Label());
			this->lb11_listaos = (gcnew System::Windows::Forms::Label());
			this->lb12_listaos = (gcnew System::Windows::Forms::Label());
			this->lb13_listaos = (gcnew System::Windows::Forms::Label());
			this->lb14_listaos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->lbox_listaos->FormattingEnabled = true;
			this->lbox_listaos->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"OS0", L"OS1", L"OS2", L"OS3", L"OS4", L"OS5", L"OS6",
					L"OS7", L"OS8", L"OS9", L"OS10", L"OS11", L"OS12", L"OS13", L"OS14", L"OS15", L"OS16", L"OS17", L"OS18", L"OS19", L"OS20", L"OS21",
					L"OS22", L"OS23", L"OS24"
			});
			this->lbox_listaos->Location = System::Drawing::Point(12, 43);
			this->lbox_listaos->Name = L"lbox_listaos";
			this->lbox_listaos->Size = System::Drawing::Size(108, 277);
			this->lbox_listaos->TabIndex = 0;
			this->lbox_listaos->SelectedIndexChanged += gcnew System::EventHandler(this, &ListaOS::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->bt_listaos->Location = System::Drawing::Point(22, 12);
			this->bt_listaos->Name = L"bt_listaos";
			this->bt_listaos->Size = System::Drawing::Size(75, 23);
			this->bt_listaos->TabIndex = 1;
			this->bt_listaos->Text = L"Voltar";
			this->bt_listaos->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->lb1_listaos->AutoSize = true;
			this->lb1_listaos->Location = System::Drawing::Point(164, 43);
			this->lb1_listaos->Name = L"lb1_listaos";
			this->lb1_listaos->Size = System::Drawing::Size(80, 13);
			this->lb1_listaos->TabIndex = 2;
			this->lb1_listaos->Text = L"Número da OS:";
			// 
			// label2
			// 
			this->lb2_listaos->AutoSize = true;
			this->lb2_listaos->Location = System::Drawing::Point(164, 83);
			this->lb2_listaos->Name = L"lb2_listaos";
			this->lb2_listaos->Size = System::Drawing::Size(134, 13);
			this->lb2_listaos->TabIndex = 3;
			this->lb2_listaos->Text = L"Prioridade de Atendimento:";
			// 
			// label3
			// 
			this->lb3_listaos->AutoSize = true;
			this->lb3_listaos->Location = System::Drawing::Point(164, 123);
			this->lb3_listaos->Name = L"lb3_listaos";
			this->lb3_listaos->Size = System::Drawing::Size(113, 13);
			this->lb3_listaos->TabIndex = 4;
			this->lb3_listaos->Text = L"Estimativa de Pessoal:";
			// 
			// label4
			// 
			this->lb4_listaos->AutoSize = true;
			this->lb4_listaos->Location = System::Drawing::Point(164, 163);
			this->lb4_listaos->Name = L"lb4_listaos";
			this->lb4_listaos->Size = System::Drawing::Size(138, 13);
			this->lb4_listaos->TabIndex = 5;
			this->lb4_listaos->Text = L"Estimativa de Equipamento:";
			// 
			// label5
			// 
			this->lb5_listaos->AutoSize = true;
			this->lb5_listaos->Location = System::Drawing::Point(164, 203);
			this->lb5_listaos->Name = L"lb5_listaos";
			this->lb5_listaos->Size = System::Drawing::Size(113, 13);
			this->lb5_listaos->TabIndex = 6;
			this->lb5_listaos->Text = L"Estimativa de Material:";
			// 
			// label6
			// 
			this->lb6_listaos->AutoSize = true;
			this->lb6_listaos->Location = System::Drawing::Point(164, 239);
			this->lb6_listaos->Name = L"lb6_listaos";
			this->lb6_listaos->Size = System::Drawing::Size(143, 13);
			this->lb6_listaos->TabIndex = 7;
			this->lb6_listaos->Text = L"Custo Estimado do Conserto:\r\n";
			// 
			// label7
			// 
			this->lb7_listaos->AutoSize = true;
			this->lb7_listaos->Location = System::Drawing::Point(164, 278);
			this->lb7_listaos->Name = L"lb7_listaos";
			this->lb7_listaos->Size = System::Drawing::Size(40, 13);
			this->lb7_listaos->TabIndex = 8;
			this->lb7_listaos->Text = L"Status:";
			// 
			// label8
			// 
			this->lb8_listaos->AutoSize = true;
			this->lb8_listaos->Location = System::Drawing::Point(347, 43);
			this->lb8_listaos->Name = L"lb8_listaos";
			this->lb8_listaos->Size = System::Drawing::Size(0, 13);
			this->lb8_listaos->TabIndex = 9;
			// 
			// label9
			// 
			this->lb9_listaos->AutoSize = true;
			this->lb9_listaos->Location = System::Drawing::Point(347, 83);
			this->lb9_listaos->Name = L"lb9_listaos";
			this->lb9_listaos->Size = System::Drawing::Size(35, 13);
			this->lb9_listaos->TabIndex = 10;
			// 
			// label10
			// 
			this->lb10_listaos->AutoSize = true;
			this->lb10_listaos->Location = System::Drawing::Point(347, 123);
			this->lb10_listaos->Name = L"lb10_listaos";
			this->lb10_listaos->Size = System::Drawing::Size(41, 13);
			this->lb10_listaos->TabIndex = 11;
			// 
			// label11
			// 
			this->lb11_listaos->AutoSize = true;
			this->lb11_listaos->Location = System::Drawing::Point(347, 163);
			this->lb11_listaos->Name = L"lb11_listaos";
			this->lb11_listaos->Size = System::Drawing::Size(41, 13);
			this->lb11_listaos->TabIndex = 12;
			// 
			// label12
			// 
			this->lb12_listaos->AutoSize = true;
			this->lb12_listaos->Location = System::Drawing::Point(347, 203);
			this->lb12_listaos->Name = L"lb12_listaos";
			this->lb12_listaos->Size = System::Drawing::Size(41, 13);
			this->lb12_listaos->TabIndex = 13;
			// 
			// label13
			// 
			this->lb13_listaos->AutoSize = true;
			this->lb13_listaos->Location = System::Drawing::Point(347, 239);
			this->lb13_listaos->Name = L"lb13_listaos";
			this->lb13_listaos->Size = System::Drawing::Size(41, 13);
			this->lb13_listaos->TabIndex = 14;
			// 
			// label14
			// 
			this->lb14_listaos->AutoSize = true;
			this->lb14_listaos->Location = System::Drawing::Point(347, 278);
			this->lb14_listaos->Name = L"lb14_listaos";
			this->lb14_listaos->Size = System::Drawing::Size(41, 13);
			this->lb14_listaos->TabIndex = 15;
			// 
			// ListaOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 332);
			this->Controls->Add(this->lb14_listaos);
			this->Controls->Add(this->lb13_listaos);
			this->Controls->Add(this->lb12_listaos);
			this->Controls->Add(this->lb11_listaos);
			this->Controls->Add(this->lb10_listaos);
			this->Controls->Add(this->lb9_listaos);
			this->Controls->Add(this->lb8_listaos);
			this->Controls->Add(this->lb7_listaos);
			this->Controls->Add(this->lb6_listaos);
			this->Controls->Add(this->lb5_listaos);
			this->Controls->Add(this->lb4_listaos);
			this->Controls->Add(this->lb3_listaos);
			this->Controls->Add(this->lb2_listaos);
			this->Controls->Add(this->lb1_listaos);
			this->Controls->Add(this->bt_listaos);
			this->Controls->Add(this->lbox_listaos);
			this->Name = L"ListaOS";
			this->Text = L"ListaOS";
			this->Load += gcnew System::EventHandler(this, &ListaOS::ListaOS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->lb8_listaos->Text = "OS" + Convert::ToString(this->lbox_listaos->SelectedIndex);
		this->lb9_listaos->Text = "PrioridadeOS" + Convert::ToString(this->lbox_listaos->SelectedIndex);
		this->lb10_listaos->Text = "PessoalOS" + Convert::ToString(this->lbox_listaos->SelectedIndex);
		this->lb11_listaos->Text = "EquipamentoOS" + Convert::ToString(this->lbox_listaos->SelectedIndex);
		this->lb12_listaos->Text = "MaterialOS" + Convert::ToString(this->lbox_listaos->SelectedIndex);
		this->lb13_listaos->Text = "CustoOS" + Convert::ToString(this->lbox_listaos->SelectedIndex);
		this->lb14_listaos->Text = "StatusOS" + Convert::ToString(this->lbox_listaos->SelectedIndex);
	}
	private: System::Void ListaOS_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
