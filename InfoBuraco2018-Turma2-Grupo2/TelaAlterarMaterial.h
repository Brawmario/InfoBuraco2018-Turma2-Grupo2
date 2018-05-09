#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAlterarMaterial
	/// </summary>
	public ref class TelaAlterarMaterial : public System::Windows::Forms::Form
	{
	public:
		TelaAlterarMaterial(void)
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
		~TelaAlterarMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_novoCustoPorUnidade;
	private: System::Windows::Forms::TextBox^  tb_novoCustoPorUnidade;
	protected:

	protected:

	private: System::Windows::Forms::CheckBox^  cb_alterarCustoPorUnidade;

	private: System::Windows::Forms::Button^  bt_finalizar;
	private: System::Windows::Forms::Button^  bt_cancelar;
	private: System::Windows::Forms::Label^  lb_alterarMaterial;

	private: System::Windows::Forms::Label^  lb_novaUnidade;
	private: System::Windows::Forms::TextBox^  tb_novaUnidade;


	private: System::Windows::Forms::Label^  lb_novoNome;
	private: System::Windows::Forms::TextBox^  tb_novoNome;
	private: System::Windows::Forms::CheckBox^  cb_alterarUnidade;

	private: System::Windows::Forms::CheckBox^  cb_alterarNome;

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
			this->lb_novoCustoPorUnidade = (gcnew System::Windows::Forms::Label());
			this->tb_novoCustoPorUnidade = (gcnew System::Windows::Forms::TextBox());
			this->cb_alterarCustoPorUnidade = (gcnew System::Windows::Forms::CheckBox());
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->lb_alterarMaterial = (gcnew System::Windows::Forms::Label());
			this->lb_novaUnidade = (gcnew System::Windows::Forms::Label());
			this->tb_novaUnidade = (gcnew System::Windows::Forms::TextBox());
			this->lb_novoNome = (gcnew System::Windows::Forms::Label());
			this->tb_novoNome = (gcnew System::Windows::Forms::TextBox());
			this->cb_alterarUnidade = (gcnew System::Windows::Forms::CheckBox());
			this->cb_alterarNome = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// lb_novoCustoPorUnidade
			// 
			this->lb_novoCustoPorUnidade->AutoSize = true;
			this->lb_novoCustoPorUnidade->Enabled = false;
			this->lb_novoCustoPorUnidade->Location = System::Drawing::Point(43, 158);
			this->lb_novoCustoPorUnidade->Name = L"lb_novoCustoPorUnidade";
			this->lb_novoCustoPorUnidade->Size = System::Drawing::Size(124, 13);
			this->lb_novoCustoPorUnidade->TabIndex = 32;
			this->lb_novoCustoPorUnidade->Text = L"Novo custo por unidade:";
			// 
			// tb_novoCustoPorUnidade
			// 
			this->tb_novoCustoPorUnidade->Enabled = false;
			this->tb_novoCustoPorUnidade->Location = System::Drawing::Point(198, 155);
			this->tb_novoCustoPorUnidade->Name = L"tb_novoCustoPorUnidade";
			this->tb_novoCustoPorUnidade->Size = System::Drawing::Size(70, 20);
			this->tb_novoCustoPorUnidade->TabIndex = 31;
			// 
			// cb_alterarCustoPorUnidade
			// 
			this->cb_alterarCustoPorUnidade->AutoSize = true;
			this->cb_alterarCustoPorUnidade->Location = System::Drawing::Point(46, 122);
			this->cb_alterarCustoPorUnidade->Name = L"cb_alterarCustoPorUnidade";
			this->cb_alterarCustoPorUnidade->Size = System::Drawing::Size(144, 17);
			this->cb_alterarCustoPorUnidade->TabIndex = 30;
			this->cb_alterarCustoPorUnidade->Text = L"Alterar custo por unidade";
			this->cb_alterarCustoPorUnidade->UseVisualStyleBackColor = true;
			this->cb_alterarCustoPorUnidade->Click += gcnew System::EventHandler(this, &TelaAlterarMaterial::cb_alterarCustoPorUnidade_CheckedChanged);
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(182, 267);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(86, 24);
			this->bt_finalizar->TabIndex = 29;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->bt_cancelar->Location = System::Drawing::Point(46, 267);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(86, 24);
			this->bt_cancelar->TabIndex = 28;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			// 
			// lb_alterarMaterial
			// 
			this->lb_alterarMaterial->AutoSize = true;
			this->lb_alterarMaterial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_alterarMaterial->Location = System::Drawing::Point(96, 24);
			this->lb_alterarMaterial->Name = L"lb_alterarMaterial";
			this->lb_alterarMaterial->Size = System::Drawing::Size(104, 17);
			this->lb_alterarMaterial->TabIndex = 27;
			this->lb_alterarMaterial->Text = L"Alterar Material";
			// 
			// lb_novaUnidade
			// 
			this->lb_novaUnidade->AutoSize = true;
			this->lb_novaUnidade->Enabled = false;
			this->lb_novaUnidade->Location = System::Drawing::Point(43, 216);
			this->lb_novaUnidade->Name = L"lb_novaUnidade";
			this->lb_novaUnidade->Size = System::Drawing::Size(76, 13);
			this->lb_novaUnidade->TabIndex = 26;
			this->lb_novaUnidade->Text = L"Nova Unidade";
			// 
			// tb_novaUnidade
			// 
			this->tb_novaUnidade->Enabled = false;
			this->tb_novaUnidade->Location = System::Drawing::Point(198, 213);
			this->tb_novaUnidade->Name = L"tb_novaUnidade";
			this->tb_novaUnidade->Size = System::Drawing::Size(70, 20);
			this->tb_novaUnidade->TabIndex = 25;
			// 
			// lb_novoNome
			// 
			this->lb_novoNome->AutoSize = true;
			this->lb_novoNome->Enabled = false;
			this->lb_novoNome->Location = System::Drawing::Point(43, 91);
			this->lb_novoNome->Name = L"lb_novoNome";
			this->lb_novoNome->Size = System::Drawing::Size(67, 13);
			this->lb_novoNome->TabIndex = 24;
			this->lb_novoNome->Text = L"Novo Nome:";
			// 
			// tb_novoNome
			// 
			this->tb_novoNome->Enabled = false;
			this->tb_novoNome->Location = System::Drawing::Point(198, 88);
			this->tb_novoNome->MaxLength = 20;
			this->tb_novoNome->Name = L"tb_novoNome";
			this->tb_novoNome->Size = System::Drawing::Size(70, 20);
			this->tb_novoNome->TabIndex = 23;
			// 
			// cb_alterarUnidade
			// 
			this->cb_alterarUnidade->AutoSize = true;
			this->cb_alterarUnidade->Location = System::Drawing::Point(46, 190);
			this->cb_alterarUnidade->Name = L"cb_alterarUnidade";
			this->cb_alterarUnidade->Size = System::Drawing::Size(97, 17);
			this->cb_alterarUnidade->TabIndex = 22;
			this->cb_alterarUnidade->Text = L"Alterar unidade";
			this->cb_alterarUnidade->UseVisualStyleBackColor = true;
			this->cb_alterarUnidade->Click += gcnew System::EventHandler(this, &TelaAlterarMaterial::cb_alterarUnidade_CheckedChanged);
			// 
			// cb_alterarNome
			// 
			this->cb_alterarNome->AutoSize = true;
			this->cb_alterarNome->Location = System::Drawing::Point(46, 62);
			this->cb_alterarNome->Name = L"cb_alterarNome";
			this->cb_alterarNome->Size = System::Drawing::Size(87, 17);
			this->cb_alterarNome->TabIndex = 21;
			this->cb_alterarNome->TabStop = false;
			this->cb_alterarNome->Text = L"Alterar Nome";
			this->cb_alterarNome->UseVisualStyleBackColor = true;
			this->cb_alterarNome->Click += gcnew System::EventHandler(this, &TelaAlterarMaterial::cb_alterarNome_CheckedChanged);
			// 
			// TelaAlterarMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(311, 314);
			this->Controls->Add(this->lb_novoCustoPorUnidade);
			this->Controls->Add(this->tb_novoCustoPorUnidade);
			this->Controls->Add(this->cb_alterarCustoPorUnidade);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->lb_alterarMaterial);
			this->Controls->Add(this->lb_novaUnidade);
			this->Controls->Add(this->tb_novaUnidade);
			this->Controls->Add(this->lb_novoNome);
			this->Controls->Add(this->tb_novoNome);
			this->Controls->Add(this->cb_alterarUnidade);
			this->Controls->Add(this->cb_alterarNome);
			this->Name = L"TelaAlterarMaterial";
			this->Text = L"TelaAlterarMaterial";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cb_alterarNome_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->tb_novoNome->Enabled = this->cb_alterarNome->Checked;
	}
	private: System::Void cb_alterarCustoPorUnidade_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->tb_novoCustoPorUnidade->Enabled = this->cb_alterarCustoPorUnidade->Checked;
	}
	private: System::Void cb_alterarUnidade_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->tb_novaUnidade->Enabled = this->cb_alterarUnidade->Checked;
}
};
}
