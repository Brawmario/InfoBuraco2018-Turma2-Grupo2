#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaHistóricoDePagamentos
	/// </summary>
	public ref class TelaHistóricoDePagamentos : public System::Windows::Forms::Form
	{
	public:
		TelaHistóricoDePagamentos(void)
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
		~TelaHistóricoDePagamentos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	protected:
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::Label^  lb_de;

	private: System::Windows::Forms::Label^  lb_até;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  bt_aplicarFiltros;


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
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lb_de = (gcnew System::Windows::Forms::Label());
			this->lb_até = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bt_aplicarFiltros = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(88, 72);
			this->maskedTextBox1->Mask = L"00/00/0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(65, 20);
			this->maskedTextBox1->TabIndex = 0;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(210, 72);
			this->maskedTextBox2->Mask = L"00/00/0000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(65, 20);
			this->maskedTextBox2->TabIndex = 1;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// lb_de
			// 
			this->lb_de->AutoSize = true;
			this->lb_de->Location = System::Drawing::Point(58, 75);
			this->lb_de->Name = L"lb_de";
			this->lb_de->Size = System::Drawing::Size(24, 13);
			this->lb_de->TabIndex = 2;
			this->lb_de->Text = L"De:";
			this->lb_de->Click += gcnew System::EventHandler(this, &TelaHistóricoDePagamentos::label1_Click);
			// 
			// lb_até
			// 
			this->lb_até->AutoSize = true;
			this->lb_até->Location = System::Drawing::Point(178, 75);
			this->lb_até->Name = L"lb_até";
			this->lb_até->Size = System::Drawing::Size(26, 13);
			this->lb_até->TabIndex = 3;
			this->lb_até->Text = L"Até:";
			this->lb_até->Click += gcnew System::EventHandler(this, &TelaHistóricoDePagamentos::lb_até_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 19);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 134);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Placeholder até aprendermos a mexer com database";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// bt_aplicarFiltros
			// 
			this->bt_aplicarFiltros->Location = System::Drawing::Point(303, 70);
			this->bt_aplicarFiltros->Name = L"bt_aplicarFiltros";
			this->bt_aplicarFiltros->Size = System::Drawing::Size(78, 22);
			this->bt_aplicarFiltros->TabIndex = 6;
			this->bt_aplicarFiltros->Text = L"Aplicar Filtros";
			this->bt_aplicarFiltros->UseVisualStyleBackColor = true;
			// 
			// TelaHistóricoDePagamentos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 326);
			this->Controls->Add(this->bt_aplicarFiltros);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lb_até);
			this->Controls->Add(this->lb_de);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Name = L"TelaHistóricoDePagamentos";
			this->Text = L"TelaHistóricoDePagamentos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void lb_até_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
