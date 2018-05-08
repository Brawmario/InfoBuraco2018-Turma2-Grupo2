#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuGestor
	/// </summary>
	public ref class MenuGestor : public System::Windows::Forms::Form
	{
	public:
		MenuGestor(void)
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
		~MenuGestor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_emitirRelatorio;
	private: System::Windows::Forms::Button^  bt_manipulaçãoPrioridadeOS;
	protected:

	protected:



	private: System::ComponentModel::IContainer^  components;
	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bt_emitirRelatorio = (gcnew System::Windows::Forms::Button());
			this->bt_manipulaçãoPrioridadeOS = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_emitirRelatorio
			// 
			this->bt_emitirRelatorio->BackColor = System::Drawing::SystemColors::Control;
			this->bt_emitirRelatorio->Location = System::Drawing::Point(120, 75);
			this->bt_emitirRelatorio->Name = L"bt_emitirRelatorio";
			this->bt_emitirRelatorio->Size = System::Drawing::Size(184, 31);
			this->bt_emitirRelatorio->TabIndex = 1;
			this->bt_emitirRelatorio->Text = L"Emitir Relatório";
			this->bt_emitirRelatorio->UseVisualStyleBackColor = false;
			this->bt_emitirRelatorio->Click += gcnew System::EventHandler(this, &MenuGestor::button1_Click);
			// 
			// bt_manipulaçãoPrioridadeOS
			// 
			this->bt_manipulaçãoPrioridadeOS->BackColor = System::Drawing::SystemColors::Control;
			this->bt_manipulaçãoPrioridadeOS->Location = System::Drawing::Point(120, 146);
			this->bt_manipulaçãoPrioridadeOS->Name = L"bt_manipulaçãoPrioridadeOS";
			this->bt_manipulaçãoPrioridadeOS->Size = System::Drawing::Size(184, 31);
			this->bt_manipulaçãoPrioridadeOS->TabIndex = 2;
			this->bt_manipulaçãoPrioridadeOS->Text = L"Manipulação de prioridade de OS";
			this->bt_manipulaçãoPrioridadeOS->UseVisualStyleBackColor = false;
			// 
			// MenuGestor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 257);
			this->Controls->Add(this->bt_manipulaçãoPrioridadeOS);
			this->Controls->Add(this->bt_emitirRelatorio);
			this->Name = L"MenuGestor";
			this->Text = L"MenuGestor";
			this->Load += gcnew System::EventHandler(this, &MenuGestor::MenuGestor_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuGestor_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
