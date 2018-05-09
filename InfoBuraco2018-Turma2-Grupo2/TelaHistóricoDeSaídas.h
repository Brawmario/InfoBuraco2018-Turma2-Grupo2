#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaHist�ricoDeSa�das
	/// </summary>
	public ref class TelaHist�ricoDeSa�das : public System::Windows::Forms::Form
	{
	public:
		TelaHist�ricoDeSa�das(void)
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
		~TelaHist�ricoDeSa�das()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_aplicarFiltros;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lb_at�;
	private: System::Windows::Forms::Label^  lb_de;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;

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
			this->bt_aplicarFiltros = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lb_at� = (gcnew System::Windows::Forms::Label());
			this->lb_de = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// bt_aplicarFiltros
			// 
			this->bt_aplicarFiltros->Location = System::Drawing::Point(294, 79);
			this->bt_aplicarFiltros->Name = L"bt_aplicarFiltros";
			this->bt_aplicarFiltros->Size = System::Drawing::Size(78, 22);
			this->bt_aplicarFiltros->TabIndex = 13;
			this->bt_aplicarFiltros->Text = L"Aplicar Filtros";
			this->bt_aplicarFiltros->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(79, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 134);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Placeholder at� aprendermos a mexer com database";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 19);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lb_at�
			// 
			this->lb_at�->AutoSize = true;
			this->lb_at�->Location = System::Drawing::Point(169, 84);
			this->lb_at�->Name = L"lb_at�";
			this->lb_at�->Size = System::Drawing::Size(26, 13);
			this->lb_at�->TabIndex = 10;
			this->lb_at�->Text = L"At�:";
			// 
			// lb_de
			// 
			this->lb_de->AutoSize = true;
			this->lb_de->Location = System::Drawing::Point(49, 84);
			this->lb_de->Name = L"lb_de";
			this->lb_de->Size = System::Drawing::Size(24, 13);
			this->lb_de->TabIndex = 9;
			this->lb_de->Text = L"De:";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(201, 81);
			this->maskedTextBox2->Mask = L"00/00/0000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(65, 20);
			this->maskedTextBox2->TabIndex = 8;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(79, 81);
			this->maskedTextBox1->Mask = L"00/00/0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(65, 20);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// TelaHist�ricoDeSa�das
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 329);
			this->Controls->Add(this->bt_aplicarFiltros);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lb_at�);
			this->Controls->Add(this->lb_de);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Name = L"TelaHist�ricoDeSa�das";
			this->Text = L"TelaHist�ricoDeSa�das";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
