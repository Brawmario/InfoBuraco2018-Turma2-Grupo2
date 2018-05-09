#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class TelaLogin : public System::Windows::Forms::Form
	{
	public:
		TelaLogin(void)
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
		~TelaLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_login;
	private: System::Windows::Forms::Label^  lb_senha;
	private: System::Windows::Forms::TextBox^  tb_login;
	private: System::Windows::Forms::TextBox^  tb_senha;
	private: System::Windows::Forms::Button^  bt_validar;
	protected:





	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  tsm_menu;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_novaConta;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_sair;
	private: System::Windows::Forms::TextBox^  tb_log;
	private: System::Windows::Forms::Label^  lb_log;
	private: System::Windows::Forms::Button^  bt_debugAcessor;
	private: System::Windows::Forms::Button^  bt_debugGestor;
	private: System::Windows::Forms::Button^  bt_debugDespachador;
	private: System::Windows::Forms::Button^  bt_debugEncarregado;




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
			this->lb_login = (gcnew System::Windows::Forms::Label());
			this->lb_senha = (gcnew System::Windows::Forms::Label());
			this->tb_login = (gcnew System::Windows::Forms::TextBox());
			this->tb_senha = (gcnew System::Windows::Forms::TextBox());
			this->bt_validar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tsm_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmi_novaConta = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmi_sair = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tb_log = (gcnew System::Windows::Forms::TextBox());
			this->lb_log = (gcnew System::Windows::Forms::Label());
			this->bt_debugAcessor = (gcnew System::Windows::Forms::Button());
			this->bt_debugGestor = (gcnew System::Windows::Forms::Button());
			this->bt_debugDespachador = (gcnew System::Windows::Forms::Button());
			this->bt_debugEncarregado = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_login
			// 
			this->lb_login->AutoSize = true;
			this->lb_login->Location = System::Drawing::Point(43, 53);
			this->lb_login->Name = L"lb_login";
			this->lb_login->Size = System::Drawing::Size(36, 13);
			this->lb_login->TabIndex = 0;
			this->lb_login->Text = L"Login:";
			// 
			// lb_senha
			// 
			this->lb_senha->AutoSize = true;
			this->lb_senha->Location = System::Drawing::Point(43, 104);
			this->lb_senha->Name = L"lb_senha";
			this->lb_senha->Size = System::Drawing::Size(41, 13);
			this->lb_senha->TabIndex = 1;
			this->lb_senha->Text = L"Senha:";
			// 
			// tb_login
			// 
			this->tb_login->Location = System::Drawing::Point(111, 50);
			this->tb_login->Name = L"tb_login";
			this->tb_login->Size = System::Drawing::Size(100, 20);
			this->tb_login->TabIndex = 2;
			// 
			// tb_senha
			// 
			this->tb_senha->Location = System::Drawing::Point(111, 101);
			this->tb_senha->Name = L"tb_senha";
			this->tb_senha->Size = System::Drawing::Size(100, 20);
			this->tb_senha->TabIndex = 3;
			// 
			// bt_validar
			// 
			this->bt_validar->Location = System::Drawing::Point(46, 148);
			this->bt_validar->Name = L"bt_validar";
			this->bt_validar->Size = System::Drawing::Size(75, 23);
			this->bt_validar->TabIndex = 4;
			this->bt_validar->Text = L"Validar";
			this->bt_validar->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(135, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Limpar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsm_menu });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(240, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// tsm_menu
			// 
			this->tsm_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tsmi_novaConta,
					this->tsmi_sair
			});
			this->tsm_menu->Name = L"tsm_menu";
			this->tsm_menu->Size = System::Drawing::Size(50, 20);
			this->tsm_menu->Text = L"Menu";
			// 
			// tsmi_novaConta
			// 
			this->tsmi_novaConta->Name = L"tsmi_novaConta";
			this->tsmi_novaConta->Size = System::Drawing::Size(161, 22);
			this->tsmi_novaConta->Text = L"Criar nova conta";
			// 
			// tsmi_sair
			// 
			this->tsmi_sair->Name = L"tsmi_sair";
			this->tsmi_sair->Size = System::Drawing::Size(161, 22);
			this->tsmi_sair->Text = L"Sair";
			// 
			// tb_log
			// 
			this->tb_log->Location = System::Drawing::Point(46, 209);
			this->tb_log->Multiline = true;
			this->tb_log->Name = L"tb_log";
			this->tb_log->Size = System::Drawing::Size(165, 60);
			this->tb_log->TabIndex = 7;
			// 
			// lb_log
			// 
			this->lb_log->AutoSize = true;
			this->lb_log->Location = System::Drawing::Point(90, 190);
			this->lb_log->Name = L"lb_log";
			this->lb_log->Size = System::Drawing::Size(69, 13);
			this->lb_log->TabIndex = 8;
			this->lb_log->Text = L"Log de erros:";
			// 
			// bt_debugAcessor
			// 
			this->bt_debugAcessor->Location = System::Drawing::Point(46, 288);
			this->bt_debugAcessor->Name = L"bt_debugAcessor";
			this->bt_debugAcessor->Size = System::Drawing::Size(140, 23);
			this->bt_debugAcessor->TabIndex = 9;
			this->bt_debugAcessor->Text = L"Logar como acessor";
			this->bt_debugAcessor->UseVisualStyleBackColor = true;
			// 
			// bt_debugGestor
			// 
			this->bt_debugGestor->Location = System::Drawing::Point(46, 317);
			this->bt_debugGestor->Name = L"bt_debugGestor";
			this->bt_debugGestor->Size = System::Drawing::Size(140, 23);
			this->bt_debugGestor->TabIndex = 10;
			this->bt_debugGestor->Text = L"Logar como  gestor";
			this->bt_debugGestor->UseVisualStyleBackColor = true;
			// 
			// bt_debugDespachador
			// 
			this->bt_debugDespachador->Location = System::Drawing::Point(46, 346);
			this->bt_debugDespachador->Name = L"bt_debugDespachador";
			this->bt_debugDespachador->Size = System::Drawing::Size(140, 23);
			this->bt_debugDespachador->TabIndex = 11;
			this->bt_debugDespachador->Text = L"Logar como despachador";
			this->bt_debugDespachador->UseVisualStyleBackColor = true;
			// 
			// bt_debugEncarregado
			// 
			this->bt_debugEncarregado->Location = System::Drawing::Point(46, 375);
			this->bt_debugEncarregado->Name = L"bt_debugEncarregado";
			this->bt_debugEncarregado->Size = System::Drawing::Size(140, 23);
			this->bt_debugEncarregado->TabIndex = 12;
			this->bt_debugEncarregado->Text = L"Logar como encarregado";
			this->bt_debugEncarregado->UseVisualStyleBackColor = true;
			// 
			// TelaLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(240, 407);
			this->Controls->Add(this->bt_debugEncarregado);
			this->Controls->Add(this->bt_debugDespachador);
			this->Controls->Add(this->bt_debugGestor);
			this->Controls->Add(this->bt_debugAcessor);
			this->Controls->Add(this->lb_log);
			this->Controls->Add(this->tb_log);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bt_validar);
			this->Controls->Add(this->tb_senha);
			this->Controls->Add(this->tb_login);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_login);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TelaLogin";
			this->Text = L"Login";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
