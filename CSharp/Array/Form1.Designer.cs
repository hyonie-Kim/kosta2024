namespace Array
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.tetinput1 = new System.Windows.Forms.TextBox();
            this.tetinput2 = new System.Windows.Forms.TextBox();
            this.tetinput3 = new System.Windows.Forms.TextBox();
            this.resultbtn = new System.Windows.Forms.Button();
            this.lelresult = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // tetinput1
            // 
            this.tetinput1.Location = new System.Drawing.Point(60, 173);
            this.tetinput1.Name = "tetinput1";
            this.tetinput1.Size = new System.Drawing.Size(100, 21);
            this.tetinput1.TabIndex = 0;
            // 
            // tetinput2
            // 
            this.tetinput2.Location = new System.Drawing.Point(176, 173);
            this.tetinput2.Name = "tetinput2";
            this.tetinput2.Size = new System.Drawing.Size(100, 21);
            this.tetinput2.TabIndex = 1;
            // 
            // tetinput3
            // 
            this.tetinput3.Location = new System.Drawing.Point(297, 173);
            this.tetinput3.Name = "tetinput3";
            this.tetinput3.Size = new System.Drawing.Size(100, 21);
            this.tetinput3.TabIndex = 2;
            // 
            // resultbtn
            // 
            this.resultbtn.Font = new System.Drawing.Font("나눔고딕 ExtraBold", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.resultbtn.Location = new System.Drawing.Point(60, 216);
            this.resultbtn.Name = "resultbtn";
            this.resultbtn.Size = new System.Drawing.Size(337, 44);
            this.resultbtn.TabIndex = 3;
            this.resultbtn.Text = "적용";
            this.resultbtn.UseVisualStyleBackColor = true;
            this.resultbtn.Click += new System.EventHandler(this.resultbtn_Click);
            // 
            // lelresult
            // 
            this.lelresult.AutoSize = true;
            this.lelresult.Cursor = System.Windows.Forms.Cursors.No;
            this.lelresult.Font = new System.Drawing.Font("나눔고딕 ExtraBold", 8.999999F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.lelresult.Location = new System.Drawing.Point(68, 290);
            this.lelresult.Name = "lelresult";
            this.lelresult.Size = new System.Drawing.Size(29, 14);
            this.lelresult.TabIndex = 4;
            this.lelresult.Text = "적용";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lelresult);
            this.Controls.Add(this.resultbtn);
            this.Controls.Add(this.tetinput3);
            this.Controls.Add(this.tetinput2);
            this.Controls.Add(this.tetinput1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tetinput1;
        private System.Windows.Forms.TextBox tetinput2;
        private System.Windows.Forms.TextBox tetinput3;
        private System.Windows.Forms.Button resultbtn;
        private System.Windows.Forms.Label lelresult;
    }
}

