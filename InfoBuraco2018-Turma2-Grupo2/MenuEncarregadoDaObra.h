#pragma once
#include <iostream>
#include "TelaAlterarSenha.h"
#include "TelaAlterarUsername.h"
#include "TelaRealizacaoOS.h"

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuEncarregadoDaObra
	/// </summary>
	public ref class MenuEncarregadoDaObra : public System::Windows::Forms::Form
	{
	public:
		MenuEncarregadoDaObra(void)
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
		~MenuEncarregadoDaObra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_menuPrincipal;
	protected:

	protected:
	private: System::Windows::Forms::ToolStrip^  ts_usu�rio;
	private: System::Windows::Forms::ToolStripDropDownButton^  tsbt_informa��esDoUsu�rio;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_alterarUsername;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_alterarSenha;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmi_signOut;




	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  tsbt_notifica��es;
	private: System::Windows::Forms::Button^  bt_registroDeRealiza��oDeOS;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuEncarregadoDaObra::typeid));
			this->lb_menuPrincipal = (gcnew System::Windows::Forms::Label());
			this->ts_usu�rio = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbt_informa��esDoUsu�rio = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->tsmi_alterarUsername = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmi_alterarSenha = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmi_signOut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbt_notifica��es = (gcnew System::Windows::Forms::ToolStripButton());
			this->bt_registroDeRealiza��oDeOS = (gcnew System::Windows::Forms::Button());
			this->ts_usu�rio->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_menuPrincipal
			// 
			this->lb_menuPrincipal->AutoSize = true;
			this->lb_menuPrincipal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->lb_menuPrincipal->Location = System::Drawing::Point(160, 46);
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
			this->ts_usu�rio->Size = System::Drawing::Size(463, 25);
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
			this->tsmi_alterarUsername->Size = System::Drawing::Size(180, 22);
			this->tsmi_alterarUsername->Text = L"Alterar username";
			this->tsmi_alterarUsername->Click += gcnew System::EventHandler(this, &MenuEncarregadoDaObra::tsmi_alterarUsername_Click);
			// 
			// tsmi_alterarSenha
			// 
			this->tsmi_alterarSenha->Name = L"tsmi_alterarSenha";
			this->tsmi_alterarSenha->Size = System::Drawing::Size(180, 22);
			this->tsmi_alterarSenha->Text = L"Alterar senha";
			this->tsmi_alterarSenha->Click += gcnew System::EventHandler(this, &MenuEncarregadoDaObra::tsmi_alterarSenha_Click);
			// 
			// tsmi_signOut
			// 
			this->tsmi_signOut->Name = L"tsmi_signOut";
			this->tsmi_signOut->Size = System::Drawing::Size(180, 22);
			this->tsmi_signOut->Text = L"Sign Out";
			this->tsmi_signOut->Click += gcnew System::EventHandler(this, &MenuEncarregadoDaObra::tsmi_signOut_Click);
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
			// bt_registroDeRealiza��oDeOS
			// 
			this->bt_registroDeRealiza��oDeOS->BackColor = System::Drawing::SystemColors::Control;
			this->bt_registroDeRealiza��oDeOS->Location = System::Drawing::Point(135, 104);
			this->bt_registroDeRealiza��oDeOS->Name = L"bt_registroDeRealiza��oDeOS";
			this->bt_registroDeRealiza��oDeOS->Size = System::Drawing::Size(184, 31);
			this->bt_registroDeRealiza��oDeOS->TabIndex = 8;
			this->bt_registroDeRealiza��oDeOS->Text = L"Registro de Realiza��o de OS";
			this->bt_registroDeRealiza��oDeOS->UseVisualStyleBackColor = false;
			this->bt_registroDeRealiza��oDeOS->Click += gcnew System::EventHandler(this, &MenuEncarregadoDaObra::bt_registroDeRealiza��oDeOS_Click);
			// 
			// MenuEncarregadoDaObra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 195);
			this->Controls->Add(this->lb_menuPrincipal);
			this->Controls->Add(this->ts_usu�rio);
			this->Controls->Add(this->bt_registroDeRealiza��oDeOS);
			this->Name = L"MenuEncarregadoDaObra";
			this->Text = L"MenuEncarregadoDaObra";
			this->ts_usu�rio->ResumeLayout(false);
			this->ts_usu�rio->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_registroDeRealiza��oDeOS_Click(System::Object^  sender, System::EventArgs^  e) {
		TelaRealizacaoOS^ RegistroOS = gcnew TelaRealizacaoOS();
		RegistroOS->ShowDialog();
	}
private: System::Void tsmi_alterarUsername_Click(System::Object^  sender, System::EventArgs^  e) {
	TelaAlterarUsername^ MudarUsername = gcnew TelaAlterarUsername();
	MudarUsername->ShowDialog();
}
private: System::Void tsmi_alterarSenha_Click(System::Object^  sender, System::EventArgs^  e) {
	TelaAlterarSenha^ MudarSenha = gcnew TelaAlterarSenha();
	MudarSenha->ShowDialog();
}
private: System::Void tsmi_signOut_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
