#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuDespachador
	/// </summary>
	public ref class MenuDespachador : public System::Windows::Forms::Form
	{
	public:
		MenuDespachador(void)
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
		~MenuDespachador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_infraestrutura;
	protected:
	private: System::Windows::Forms::Button^  bt_listaDeBuracos;
	private: System::Windows::Forms::Button^  bt_listaDeOS;
	private: System::Windows::Forms::Button^  bt_formula��oDePlanoDeSa�da;
	private: System::Windows::Forms::Button^  bt_hist�ricoDeSa�das;
	private: System::Windows::Forms::Button^  bt_hist�ricoDePagamentos;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStrip^  ts_usu�rio;
	private: System::Windows::Forms::ToolStripDropDownButton^  tsbt_informa��esDoUsu�rio;
	private: System::Windows::Forms::ToolStripMenuItem^  visualizarInforma��esDoUsu�rioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alterarUsernameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alterarSenhaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  signOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  tsbt_notifica��es;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuDespachador::typeid));
			this->bt_infraestrutura = (gcnew System::Windows::Forms::Button());
			this->bt_listaDeBuracos = (gcnew System::Windows::Forms::Button());
			this->bt_listaDeOS = (gcnew System::Windows::Forms::Button());
			this->bt_formula��oDePlanoDeSa�da = (gcnew System::Windows::Forms::Button());
			this->bt_hist�ricoDeSa�das = (gcnew System::Windows::Forms::Button());
			this->bt_hist�ricoDePagamentos = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ts_usu�rio = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbt_informa��esDoUsu�rio = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->visualizarInforma��esDoUsu�rioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alterarUsernameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alterarSenhaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->signOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbt_notifica��es = (gcnew System::Windows::Forms::ToolStripButton());
			this->ts_usu�rio->SuspendLayout();
			this->SuspendLayout();
			// 
			// bt_infraestrutura
			// 
			this->bt_infraestrutura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_infraestrutura->Location = System::Drawing::Point(57, 76);
			this->bt_infraestrutura->Name = L"bt_infraestrutura";
			this->bt_infraestrutura->Size = System::Drawing::Size(202, 50);
			this->bt_infraestrutura->TabIndex = 0;
			this->bt_infraestrutura->TabStop = false;
			this->bt_infraestrutura->Text = L"Infraestrutura";
			this->bt_infraestrutura->UseVisualStyleBackColor = true;
			// 
			// bt_listaDeBuracos
			// 
			this->bt_listaDeBuracos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_listaDeBuracos->Location = System::Drawing::Point(57, 161);
			this->bt_listaDeBuracos->Name = L"bt_listaDeBuracos";
			this->bt_listaDeBuracos->Size = System::Drawing::Size(202, 50);
			this->bt_listaDeBuracos->TabIndex = 1;
			this->bt_listaDeBuracos->Text = L"Lista de Buracos";
			this->bt_listaDeBuracos->UseVisualStyleBackColor = true;
			// 
			// bt_listaDeOS
			// 
			this->bt_listaDeOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_listaDeOS->Location = System::Drawing::Point(57, 245);
			this->bt_listaDeOS->Name = L"bt_listaDeOS";
			this->bt_listaDeOS->Size = System::Drawing::Size(202, 50);
			this->bt_listaDeOS->TabIndex = 2;
			this->bt_listaDeOS->Text = L"Lista de OS";
			this->bt_listaDeOS->UseVisualStyleBackColor = true;
			// 
			// bt_formula��oDePlanoDeSa�da
			// 
			this->bt_formula��oDePlanoDeSa�da->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_formula��oDePlanoDeSa�da->Location = System::Drawing::Point(302, 76);
			this->bt_formula��oDePlanoDeSa�da->Name = L"bt_formula��oDePlanoDeSa�da";
			this->bt_formula��oDePlanoDeSa�da->Size = System::Drawing::Size(202, 50);
			this->bt_formula��oDePlanoDeSa�da->TabIndex = 3;
			this->bt_formula��oDePlanoDeSa�da->Text = L"Formula��o de plano de sa�da";
			this->bt_formula��oDePlanoDeSa�da->UseVisualStyleBackColor = true;
			// 
			// bt_hist�ricoDeSa�das
			// 
			this->bt_hist�ricoDeSa�das->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_hist�ricoDeSa�das->Location = System::Drawing::Point(302, 161);
			this->bt_hist�ricoDeSa�das->Name = L"bt_hist�ricoDeSa�das";
			this->bt_hist�ricoDeSa�das->Size = System::Drawing::Size(202, 50);
			this->bt_hist�ricoDeSa�das->TabIndex = 4;
			this->bt_hist�ricoDeSa�das->Text = L"Hist�rico de Sa�das";
			this->bt_hist�ricoDeSa�das->UseVisualStyleBackColor = true;
			// 
			// bt_hist�ricoDePagamentos
			// 
			this->bt_hist�ricoDePagamentos->Location = System::Drawing::Point(302, 245);
			this->bt_hist�ricoDePagamentos->Name = L"bt_hist�ricoDePagamentos";
			this->bt_hist�ricoDePagamentos->Size = System::Drawing::Size(202, 50);
			this->bt_hist�ricoDePagamentos->TabIndex = 5;
			this->bt_hist�ricoDePagamentos->Text = L"Hist�rico de Pagamentos";
			this->bt_hist�ricoDePagamentos->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(215, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Menu Principal";
			this->label1->Click += gcnew System::EventHandler(this, &MenuDespachador::label1_Click);
			// 
			// ts_usu�rio
			// 
			this->ts_usu�rio->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsbt_informa��esDoUsu�rio,
					this->toolStripSeparator2, this->tsbt_notifica��es
			});
			this->ts_usu�rio->Location = System::Drawing::Point(0, 0);
			this->ts_usu�rio->Name = L"ts_usu�rio";
			this->ts_usu�rio->Size = System::Drawing::Size(577, 25);
			this->ts_usu�rio->TabIndex = 7;
			this->ts_usu�rio->Text = L"toolStrip1";
			// 
			// tsbt_informa��esDoUsu�rio
			// 
			this->tsbt_informa��esDoUsu�rio->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbt_informa��esDoUsu�rio->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->visualizarInforma��esDoUsu�rioToolStripMenuItem,
					this->alterarUsernameToolStripMenuItem, this->alterarSenhaToolStripMenuItem, this->signOutToolStripMenuItem
			});
			this->tsbt_informa��esDoUsu�rio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbt_informa��esDoUsu�rio.Image")));
			this->tsbt_informa��esDoUsu�rio->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbt_informa��esDoUsu�rio->Name = L"tsbt_informa��esDoUsu�rio";
			this->tsbt_informa��esDoUsu�rio->Size = System::Drawing::Size(29, 22);
			this->tsbt_informa��esDoUsu�rio->Text = L"toolStripButton2";
			// 
			// visualizarInforma��esDoUsu�rioToolStripMenuItem
			// 
			this->visualizarInforma��esDoUsu�rioToolStripMenuItem->Name = L"visualizarInforma��esDoUsu�rioToolStripMenuItem";
			this->visualizarInforma��esDoUsu�rioToolStripMenuItem->Size = System::Drawing::Size(251, 22);
			this->visualizarInforma��esDoUsu�rioToolStripMenuItem->Text = L"Visualizar informa��es do usu�rio";
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
			// MenuDespachador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 339);
			this->Controls->Add(this->ts_usu�rio);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bt_hist�ricoDePagamentos);
			this->Controls->Add(this->bt_hist�ricoDeSa�das);
			this->Controls->Add(this->bt_formula��oDePlanoDeSa�da);
			this->Controls->Add(this->bt_listaDeOS);
			this->Controls->Add(this->bt_listaDeBuracos);
			this->Controls->Add(this->bt_infraestrutura);
			this->Name = L"MenuDespachador";
			this->Text = L"MenuDespachador";
			this->Load += gcnew System::EventHandler(this, &MenuDespachador::MenuDespachador_Load);
			this->ts_usu�rio->ResumeLayout(false);
			this->ts_usu�rio->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuDespachador_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
