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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Emitir Relatório";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuGestor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Manipulação de prioridade de OS";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MenuGestor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 257);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
