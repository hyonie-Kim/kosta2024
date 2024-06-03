namespace 스레드정보
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
            this.components = new System.ComponentModel.Container();
            this.btnThreadInfo = new System.Windows.Forms.Button();
            this.txtThreadInfo = new System.Windows.Forms.TextBox();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.SuspendLayout();
            // 
            // btnThreadInfo
            // 
            this.btnThreadInfo.Location = new System.Drawing.Point(62, 364);
            this.btnThreadInfo.Name = "btnThreadInfo";
            this.btnThreadInfo.Size = new System.Drawing.Size(318, 32);
            this.btnThreadInfo.TabIndex = 0;
            this.btnThreadInfo.Text = "스레드 정보";
            this.btnThreadInfo.UseVisualStyleBackColor = true;
            this.btnThreadInfo.Click += new System.EventHandler(this.btnThreadInfo_Click);
            // 
            // txtThreadInfo
            // 
            this.txtThreadInfo.Location = new System.Drawing.Point(62, 23);
            this.txtThreadInfo.Multiline = true;
            this.txtThreadInfo.Name = "txtThreadInfo";
            this.txtThreadInfo.Size = new System.Drawing.Size(318, 311);
            this.txtThreadInfo.TabIndex = 1;
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(211, 32);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(436, 450);
            this.Controls.Add(this.txtThreadInfo);
            this.Controls.Add(this.btnThreadInfo);
            this.Name = "Form1";
            this.Text = "스레드 정보 출력";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnThreadInfo;
        private System.Windows.Forms.TextBox txtThreadInfo;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
    }
}

