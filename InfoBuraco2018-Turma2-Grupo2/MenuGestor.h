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
	private: System::Windows::Forms::ToolStrip^  ts_usuário;







	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  tsbt_notificações;
	private: System::Windows::Forms::ToolStripDropDownButton^  tsbt_informaçõesDoUsuário;
	private: System::Windows::Forms::ToolStripMenuItem^  visualizarInformaçõesDoUsuárioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alterarUsernameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alterarSenhaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  signOutToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuGestor::typeid));
			this->bt_emitirRelatorio = (gcnew System::Windows::Forms::Button());
			this->bt_manipulaçãoPrioridadeOS = (gcnew System::Windows::Forms::Button());
			this->ts_usuário = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbt_notificações = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbt_informaçõesDoUsuário = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->visualizarInformaçõesDoUsuárioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alterarUsernameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alterarSenhaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->signOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ts_usuário->SuspendLayout();
			this->SuspendLayout();
			// 
			// bt_emitirRelatorio
			// 
			this->bt_emitirRelatorio->BackColor = System::Drawing::SystemColors::Control;
			this->bt_emitirRelatorio->Location = System::Drawing::Point(120, 84);
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
			this->bt_manipulaçãoPrioridadeOS->Location = System::Drawing::Point(120, 138);
			this->bt_manipulaçãoPrioridadeOS->Name = L"bt_manipulaçãoPrioridadeOS";
			this->bt_manipulaçãoPrioridadeOS->Size = System::Drawing::Size(184, 31);
			this->bt_manipulaçãoPrioridadeOS->TabIndex = 2;
			this->bt_manipulaçãoPrioridadeOS->Text = L"Manipulação de prioridade de OS";
			this->bt_manipulaçãoPrioridadeOS->UseVisualStyleBackColor = false;
			// 
			// ts_usuário
			// 
			this->ts_usuário->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsbt_informaçõesDoUsuário,
					this->toolStripSeparator2, this->tsbt_notificações
			});
			this->ts_usuário->Location = System::Drawing::Point(0, 0);
			this->ts_usuário->Name = L"ts_usuário";
			this->ts_usuário->Size = System::Drawing::Size(421, 25);
			this->ts_usuário->TabIndex = 3;
			this->ts_usuário->Text = L"toolStrip1";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// tsbt_notificações
			// 
			this->tsbt_notificações->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsbt_notificações->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Bold));
			this->tsbt_notificações->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbt_notificações.Image")));
			this->tsbt_notificações->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbt_notificações->Name = L"tsbt_notificações";
			this->tsbt_notificações->Size = System::Drawing::Size(75, 22);
			this->tsbt_notificações->Text = L"Notificações";
			// 
			// tsbt_informaçõesDoUsuário
			// 
			this->tsbt_informaçõesDoUsuário->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbt_informaçõesDoUsuário->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->visualizarInformaçõesDoUsuárioToolStripMenuItem,
					this->alterarUsernameToolStripMenuItem, this->alterarSenhaToolStripMenuItem, this->signOutToolStripMenuItem
			});
			this->tsbt_informaçõesDoUsuário->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbt_informaçõesDoUsuário.Image")));
			this->tsbt_informaçõesDoUsuário->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbt_informaçõesDoUsuário->Name = L"tsbt_informaçõesDoUsuário";
			this->tsbt_informaçõesDoUsuário->Size = System::Drawing::Size(29, 22);
			this->tsbt_informaçõesDoUsuário->Text = L"toolStripButton2";
			this->tsbt_informaçõesDoUsuário->Click += gcnew System::EventHandler(this, &MenuGestor::tsbt_informaçõesDoUsuário_Click);
			// 
			// visualizarInformaçõesDoUsuárioToolStripMenuItem
			// 
			this->visualizarInformaçõesDoUsuárioToolStripMenuItem->Name = L"visualizarInformaçõesDoUsuárioToolStripMenuItem";
			this->visualizarInformaçõesDoUsuárioToolStripMenuItem->Size = System::Drawing::Size(251, 22);
			this->visualizarInformaçõesDoUsuárioToolStripMenuItem->Text = L"Visualizar informações do usuário";
			// 
			// alterarUsernameToolStripMenuItem
			// 
			this->alterarUsernameToolStripMenuItem->Name = L"alterarUsernameToolStripMenuItem";
			this->alterarUsernameToolStripMenuItem->Size = System::Drawing::Size(251, 22);
			this->alterarUsernameToolStripMenuItem->Text = L"Alterar username";
			// 
			// alterarSenhaToolStripMenuItem
			// 
			this->alterarSenhaToolStripMenuItem->Name = L"alterarSenhaToolStripMenuItem";
			this->alterarSenhaToolStripMenuItem->Size = System::Drawing::Size(251, 22);
			this->alterarSenhaToolStripMenuItem->Text = L"Alterar senha";
			// 
			// signOutToolStripMenuItem
			// 
			this->signOutToolStripMenuItem->Name = L"signOutToolStripMenuItem";
			this->signOutToolStripMenuItem->Size = System::Drawing::Size(251, 22);
			this->signOutToolStripMenuItem->Text = L"Sign Out";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(145, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 24);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Menu Principal";
			// 
			// MenuGestor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 219);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ts_usuário);
			this->Controls->Add(this->bt_manipulaçãoPrioridadeOS);
			this->Controls->Add(this->bt_emitirRelatorio);
			this->Name = L"MenuGestor";
			this->Text = L"MenuGestor";
			this->Load += gcnew System::EventHandler(this, &MenuGestor::MenuGestor_Load);
			this->ts_usuário->ResumeLayout(false);
			this->ts_usuário->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void tsbt_informaçõesDoUsuário_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
