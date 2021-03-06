#pragma once
#include <iostream>
#include "TelaAlterarSenha.h"
#include "TelaAlterarUsername.h"
#include "TelaCriarBuraco.h"
#include "TelaListaDeBuracos.h"

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuAcessoriaDeComunica��o
	/// </summary>
	public ref class MenuAcessoriaDeComunica��o : public System::Windows::Forms::Form
	{
	public:
		MenuAcessoriaDeComunica��o(void)
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
		~MenuAcessoriaDeComunica��o()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_menuPrincipal;
	protected:
	private: System::Windows::Forms::ToolStrip^  ts_usu�rio;
	private: System::Windows::Forms::ToolStripDropDownButton^  tsbt_informa��esDoUsu�rio;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_alterarUsername;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_alterarSenha;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_signOut;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  tsbt_notifica��es;
	private: System::Windows::Forms::Button^  bt_listaDeBuracos;

	private: System::Windows::Forms::Button^  bt_registrarNovoBuraco;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuAcessoriaDeComunica��o::typeid));
			this->lb_menuPrincipal = (gcnew System::Windows::Forms::Label());
			this->ts_usu�rio = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbt_informa��esDoUsu�rio = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->tsmi_alterarUsername = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmi_alterarSenha = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmi_signOut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbt_notifica��es = (gcnew System::Windows::Forms::ToolStripButton());
			this->bt_listaDeBuracos = (gcnew System::Windows::Forms::Button());
			this->bt_registrarNovoBuraco = (gcnew System::Windows::Forms::Button());
			this->ts_usu�rio->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_menuPrincipal
			// 
			this->lb_menuPrincipal->AutoSize = true;
			this->lb_menuPrincipal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->lb_menuPrincipal->Location = System::Drawing::Point(151, 44);
			this->lb_menuPrincipal->Name = L"lb_menuPrincipal";
			this->lb_menuPrincipal->Size = System::Drawing::Size(136, 24);
			this->lb_menuPrincipal->TabIndex = 11;
			this->lb_menuPrincipal->Text = L"Menu Principal";
			// 
			// ts_usu�rio
			// 
			this->ts_usu�rio->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsbt_informa��esDoUsu�rio,
					this->toolStripSeparator2, this->tsbt_notifica��es
			});
			this->ts_usu�rio->Location = System::Drawing::Point(0, 0);
			this->ts_usu�rio->Name = L"ts_usu�rio";
			this->ts_usu�rio->Size = System::Drawing::Size(447, 25);
			this->ts_usu�rio->TabIndex = 10;
			this->ts_usu�rio->Text = L"toolStrip1";
			// 
			// tsbt_informa��esDoUsu�rio
			// 
			this->tsbt_informa��esDoUsu�rio->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbt_informa��esDoUsu�rio->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsmi_alterarUsername,
					this->tsmi_alterarSenha, this->tsmi_signOut
			});
			this->tsbt_informa��esDoUsu�rio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbt_informa��esDoUsu�rio.Image")));
			this->tsbt_informa��esDoUsu�rio->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbt_informa��esDoUsu�rio->Name = L"tsbt_informa��esDoUsu�rio";
			this->tsbt_informa��esDoUsu�rio->Size = System::Drawing::Size(29, 22);
			this->tsbt_informa��esDoUsu�rio->Text = L"toolStripButton2";
			// 
			// tsmi_alterarUsername
			// 
			this->tsmi_alterarUsername->Name = L"tsmi_alterarUsername";
			this->tsmi_alterarUsername->Size = System::Drawing::Size(164, 22);
			this->tsmi_alterarUsername->Text = L"Alterar username";
			this->tsmi_alterarUsername->Click += gcnew System::EventHandler(this, &MenuAcessoriaDeComunica��o::tsmi_alterarUsername_TelaAlterarUsername);
			// 
			// tsmi_alterarSenha
			// 
			this->tsmi_alterarSenha->Name = L"tsmi_alterarSenha";
			this->tsmi_alterarSenha->Size = System::Drawing::Size(164, 22);
			this->tsmi_alterarSenha->Text = L"Alterar senha";
			this->tsmi_alterarSenha->Click += gcnew System::EventHandler(this, &MenuAcessoriaDeComunica��o::tsmi_alterarSenha_TelaMudarSenha);
			// 
			// tsmi_signOut
			// 
			this->tsmi_signOut->Name = L"tsmi_signOut";
			this->tsmi_signOut->Size = System::Drawing::Size(164, 22);
			this->tsmi_signOut->Text = L"Sign Out";
			this->tsmi_signOut->Click += gcnew System::EventHandler(this, &MenuAcessoriaDeComunica��o::tsmi_signOut_Sair);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// tsbt_notifica��es
			// 
			this->tsbt_notifica��es->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsbt_notifica��es->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Bold));
			this->tsbt_notifica��es->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbt_notifica��es.Image")));
			this->tsbt_notifica��es->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbt_notifica��es->Name = L"tsbt_notifica��es";
			this->tsbt_notifica��es->Size = System::Drawing::Size(75, 22);
			this->tsbt_notifica��es->Text = L"Notifica��es";
			// 
			// bt_listaDeBuracos
			// 
			this->bt_listaDeBuracos->BackColor = System::Drawing::SystemColors::Control;
			this->bt_listaDeBuracos->Location = System::Drawing::Point(127, 100);
			this->bt_listaDeBuracos->Name = L"bt_listaDeBuracos";
			this->bt_listaDeBuracos->Size = System::Drawing::Size(184, 31);
			this->bt_listaDeBuracos->TabIndex = 9;
			this->bt_listaDeBuracos->Text = L"Lista de Buracos";
			this->bt_listaDeBuracos->UseVisualStyleBackColor = false;
			this->bt_listaDeBuracos->Click += gcnew System::EventHandler(this, &MenuAcessoriaDeComunica��o::bt_listaDeBuracos_VerListaDeBuracos);
			// 
			// bt_registrarNovoBuraco
			// 
			this->bt_registrarNovoBuraco->BackColor = System::Drawing::SystemColors::Control;
			this->bt_registrarNovoBuraco->Location = System::Drawing::Point(127, 157);
			this->bt_registrarNovoBuraco->Name = L"bt_registrarNovoBuraco";
			this->bt_registrarNovoBuraco->Size = System::Drawing::Size(184, 31);
			this->bt_registrarNovoBuraco->TabIndex = 8;
			this->bt_registrarNovoBuraco->Text = L"Registrar novo buraco";
			this->bt_registrarNovoBuraco->UseVisualStyleBackColor = false;
			this->bt_registrarNovoBuraco->Click += gcnew System::EventHandler(this, &MenuAcessoriaDeComunica��o::bt_registrarNovoBuraco_NovoBuraco);
			// 
			// MenuAcessoriaDeComunica��o
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 227);
			this->Controls->Add(this->lb_menuPrincipal);
			this->Controls->Add(this->ts_usu�rio);
			this->Controls->Add(this->bt_listaDeBuracos);
			this->Controls->Add(this->bt_registrarNovoBuraco);
			this->Name = L"MenuAcessoriaDeComunica��o";
			this->Text = L"MenuAcessoriaDeComunica��o";
			this->Load += gcnew System::EventHandler(this, &MenuAcessoriaDeComunica��o::MenuAcessoriaDeComunica��o_Load);
			this->ts_usu�rio->ResumeLayout(false);
			this->ts_usu�rio->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_listaDeBuracos_VerListaDeBuracos(System::Object^  sender, System::EventArgs^  e) {
		TelaListaDeBuracos^ ListaDeBuracos = gcnew TelaListaDeBuracos();
		ListaDeBuracos->ShowDialog();
	}
private: System::Void bt_registrarNovoBuraco_NovoBuraco(System::Object^  sender, System::EventArgs^  e) {
	TelaCriarBuraco^ CriarBuraco = gcnew TelaCriarBuraco();
	CriarBuraco->ShowDialog();
}
private: System::Void tsmi_alterarUsername_TelaAlterarUsername(System::Object^  sender, System::EventArgs^  e) {
	TelaAlterarUsername^ MudarUsername = gcnew TelaAlterarUsername();
	MudarUsername->ShowDialog();
}
private: System::Void tsmi_alterarSenha_TelaMudarSenha(System::Object^  sender, System::EventArgs^  e) {
	TelaAlterarSenha^ MudarSenha = gcnew TelaAlterarSenha();
	MudarSenha->ShowDialog();
}
private: System::Void tsmi_signOut_Sair(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void MenuAcessoriaDeComunica��o_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
