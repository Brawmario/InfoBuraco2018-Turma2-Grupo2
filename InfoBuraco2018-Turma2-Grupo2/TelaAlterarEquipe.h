#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAlterarEquipe
	/// </summary>
	public ref class TelaAlterarEquipe : public System::Windows::Forms::Form
	{
	public:
		TelaAlterarEquipe(void)
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
		~TelaAlterarEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_finalizar;
	protected:
	private: System::Windows::Forms::Button^  bt_cancelar;
	private: System::Windows::Forms::Label^  lb_alterarEquipe;
	private: System::Windows::Forms::Label^  lb_novoNúmeroDeProfissionais;
	private: System::Windows::Forms::TextBox^  tb_novoNúmeroDeProfissionais;



	private: System::Windows::Forms::Label^  lb_novoNome;
	private: System::Windows::Forms::TextBox^  tb_novoNome;
	private: System::Windows::Forms::CheckBox^  cb_alterarNúmeroDeProfissionais;



	private: System::Windows::Forms::CheckBox^  cb_alterarNome;
	private: System::Windows::Forms::Label^  lb_novoCustoPorHora;

	private: System::Windows::Forms::TextBox^  tb_novoCustoPorHora;
	private: System::Windows::Forms::CheckBox^  cb_alterarCustoPorHora;








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
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->lb_alterarEquipe = (gcnew System::Windows::Forms::Label());
			this->lb_novoNúmeroDeProfissionais = (gcnew System::Windows::Forms::Label());
			this->tb_novoNúmeroDeProfissionais = (gcnew System::Windows::Forms::TextBox());
			this->lb_novoNome = (gcnew System::Windows::Forms::Label());
			this->tb_novoNome = (gcnew System::Windows::Forms::TextBox());
			this->cb_alterarNúmeroDeProfissionais = (gcnew System::Windows::Forms::CheckBox());
			this->cb_alterarNome = (gcnew System::Windows::Forms::CheckBox());
			this->lb_novoCustoPorHora = (gcnew System::Windows::Forms::Label());
			this->tb_novoCustoPorHora = (gcnew System::Windows::Forms::TextBox());
			this->cb_alterarCustoPorHora = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(169, 266);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(86, 24);
			this->bt_finalizar->TabIndex = 17;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			this->bt_finalizar->Click += gcnew System::EventHandler(this, &TelaAlterarEquipe::bt_finalizar_Click);
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->bt_cancelar->Location = System::Drawing::Point(33, 266);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(86, 24);
			this->bt_cancelar->TabIndex = 16;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			this->bt_cancelar->Click += gcnew System::EventHandler(this, &TelaAlterarEquipe::bt_cancelar_Click);
			// 
			// lb_alterarEquipe
			// 
			this->lb_alterarEquipe->AutoSize = true;
			this->lb_alterarEquipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_alterarEquipe->Location = System::Drawing::Point(83, 23);
			this->lb_alterarEquipe->Name = L"lb_alterarEquipe";
			this->lb_alterarEquipe->Size = System::Drawing::Size(98, 17);
			this->lb_alterarEquipe->TabIndex = 15;
			this->lb_alterarEquipe->Text = L"Alterar Equipe";
			// 
			// lb_novoNúmeroDeProfissionais
			// 
			this->lb_novoNúmeroDeProfissionais->AutoSize = true;
			this->lb_novoNúmeroDeProfissionais->Enabled = false;
			this->lb_novoNúmeroDeProfissionais->Location = System::Drawing::Point(30, 158);
			this->lb_novoNúmeroDeProfissionais->Name = L"lb_novoNúmeroDeProfissionais";
			this->lb_novoNúmeroDeProfissionais->Size = System::Drawing::Size(149, 13);
			this->lb_novoNúmeroDeProfissionais->TabIndex = 14;
			this->lb_novoNúmeroDeProfissionais->Text = L"Novo número de profissionais:";
			// 
			// tb_novoNúmeroDeProfissionais
			// 
			this->tb_novoNúmeroDeProfissionais->Enabled = false;
			this->tb_novoNúmeroDeProfissionais->Location = System::Drawing::Point(185, 155);
			this->tb_novoNúmeroDeProfissionais->Name = L"tb_novoNúmeroDeProfissionais";
			this->tb_novoNúmeroDeProfissionais->Size = System::Drawing::Size(70, 20);
			this->tb_novoNúmeroDeProfissionais->TabIndex = 13;
			// 
			// lb_novoNome
			// 
			this->lb_novoNome->AutoSize = true;
			this->lb_novoNome->Enabled = false;
			this->lb_novoNome->Location = System::Drawing::Point(30, 90);
			this->lb_novoNome->Name = L"lb_novoNome";
			this->lb_novoNome->Size = System::Drawing::Size(67, 13);
			this->lb_novoNome->TabIndex = 12;
			this->lb_novoNome->Text = L"Novo Nome:";
			// 
			// tb_novoNome
			// 
			this->tb_novoNome->Enabled = false;
			this->tb_novoNome->Location = System::Drawing::Point(185, 87);
			this->tb_novoNome->MaxLength = 20;
			this->tb_novoNome->Name = L"tb_novoNome";
			this->tb_novoNome->Size = System::Drawing::Size(70, 20);
			this->tb_novoNome->TabIndex = 11;
			// 
			// cb_alterarNúmeroDeProfissionais
			// 
			this->cb_alterarNúmeroDeProfissionais->AutoSize = true;
			this->cb_alterarNúmeroDeProfissionais->Location = System::Drawing::Point(33, 132);
			this->cb_alterarNúmeroDeProfissionais->Name = L"cb_alterarNúmeroDeProfissionais";
			this->cb_alterarNúmeroDeProfissionais->Size = System::Drawing::Size(169, 17);
			this->cb_alterarNúmeroDeProfissionais->TabIndex = 10;
			this->cb_alterarNúmeroDeProfissionais->Text = L"Alterar número de profissionais";
			this->cb_alterarNúmeroDeProfissionais->UseVisualStyleBackColor = true;
			this->cb_alterarNúmeroDeProfissionais->Click += gcnew System::EventHandler(this, &TelaAlterarEquipe::cb_alterarNumeroDeProfissionais_CheckedChanged);
			// 
			// cb_alterarNome
			// 
			this->cb_alterarNome->AutoSize = true;
			this->cb_alterarNome->Location = System::Drawing::Point(33, 61);
			this->cb_alterarNome->Name = L"cb_alterarNome";
			this->cb_alterarNome->Size = System::Drawing::Size(87, 17);
			this->cb_alterarNome->TabIndex = 9;
			this->cb_alterarNome->TabStop = false;
			this->cb_alterarNome->Text = L"Alterar Nome";
			this->cb_alterarNome->UseVisualStyleBackColor = true;
			this->cb_alterarNome->Click += gcnew System::EventHandler(this, &TelaAlterarEquipe::cb_alterarNome_CheckedChanged);
			// 
			// lb_novoCustoPorHora
			// 
			this->lb_novoCustoPorHora->AutoSize = true;
			this->lb_novoCustoPorHora->Enabled = false;
			this->lb_novoCustoPorHora->Location = System::Drawing::Point(30, 222);
			this->lb_novoCustoPorHora->Name = L"lb_novoCustoPorHora";
			this->lb_novoCustoPorHora->Size = System::Drawing::Size(107, 13);
			this->lb_novoCustoPorHora->TabIndex = 20;
			this->lb_novoCustoPorHora->Text = L"Novo custo por hora:";
			// 
			// tb_novoCustoPorHora
			// 
			this->tb_novoCustoPorHora->Enabled = false;
			this->tb_novoCustoPorHora->Location = System::Drawing::Point(185, 219);
			this->tb_novoCustoPorHora->Name = L"tb_novoCustoPorHora";
			this->tb_novoCustoPorHora->Size = System::Drawing::Size(70, 20);
			this->tb_novoCustoPorHora->TabIndex = 19;
			// 
			// cb_alterarCustoPorHora
			// 
			this->cb_alterarCustoPorHora->AutoSize = true;
			this->cb_alterarCustoPorHora->Location = System::Drawing::Point(33, 196);
			this->cb_alterarCustoPorHora->Name = L"cb_alterarCustoPorHora";
			this->cb_alterarCustoPorHora->Size = System::Drawing::Size(127, 17);
			this->cb_alterarCustoPorHora->TabIndex = 18;
			this->cb_alterarCustoPorHora->Text = L"Alterar custo por hora";
			this->cb_alterarCustoPorHora->UseVisualStyleBackColor = true;
			this->cb_alterarCustoPorHora->Click += gcnew System::EventHandler(this, &TelaAlterarEquipe::b_alterarCustoPorHora_CheckedChanged);
			// 
			// TelaAlterarEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 324);
			this->Controls->Add(this->lb_novoCustoPorHora);
			this->Controls->Add(this->tb_novoCustoPorHora);
			this->Controls->Add(this->cb_alterarCustoPorHora);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->lb_alterarEquipe);
			this->Controls->Add(this->lb_novoNúmeroDeProfissionais);
			this->Controls->Add(this->tb_novoNúmeroDeProfissionais);
			this->Controls->Add(this->lb_novoNome);
			this->Controls->Add(this->tb_novoNome);
			this->Controls->Add(this->cb_alterarNúmeroDeProfissionais);
			this->Controls->Add(this->cb_alterarNome);
			this->Name = L"TelaAlterarEquipe";
			this->Text = L"TelaAlterarEquipe";
			this->Load += gcnew System::EventHandler(this, &TelaAlterarEquipe::TelaAlterarEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaAlterarEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void cb_alterarNome_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->tb_novoNome->Enabled = this->cb_alterarNome->Checked;
	this->lb_novoNome->Enabled = this->cb_alterarNome->Checked;
}
private: System::Void cb_alterarNumeroDeProfissionais_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->tb_novoNúmeroDeProfissionais->Enabled = this->cb_alterarNúmeroDeProfissionais->Checked;
	this->lb_novoNúmeroDeProfissionais->Enabled = this->cb_alterarNúmeroDeProfissionais->Checked;
}
private: System::Void b_alterarCustoPorHora_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->tb_novoCustoPorHora->Enabled = this->cb_alterarCustoPorHora->Checked;
	this->lb_novoCustoPorHora->Enabled = this->cb_alterarCustoPorHora->Checked;
}
private: System::Void bt_cancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bt_finalizar_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
