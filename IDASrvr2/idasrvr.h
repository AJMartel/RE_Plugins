
bool SendTextMessage(char* name, char *Buffer, int blen);
bool SendTextMessage(int hwnd, char *Buffer, int blen);

__int64 __stdcall ImageBase(void);
void __stdcall Jump      (__int64 addr)  ; 
void __stdcall Refresh   (void)      ; 
__int64 __stdcall ScreenEA  (void)      ; 
int  __stdcall NumFuncs  (void)      ; 
void __stdcall RemvName  (__int64 addr)  ; 
void __stdcall Setname(__int64 addr, const char* name); 
//void __stdcall AddComment(char *cmt, char color); generate_big_comment(cmt, color);}
void __stdcall AddProgramComment(char *cmt); 
void __stdcall AddCodeXRef(__int64 start, __int64 end); 
void __stdcall DelCodeXRef(__int64 start, __int64 end); 
void __stdcall AddDataXRef(__int64 start, __int64 end); 
void __stdcall DelDataXRef(__int64 start, __int64 end); 
void __stdcall MessageUI(char *m);
void __stdcall PatchByte(__int64 addr, char val);
void __stdcall PatchWord(__int64 addr, int val); 
void __stdcall DelFunc(__int64 addr);
int  __stdcall FuncIndex(__int64 addr);
void __stdcall SelBounds( ea_t* selStart, ea_t* selEnd); 
void __stdcall FuncName(__int64 addr, char *buf, size_t bufsize); 
int  __stdcall GetBytes(__int64 offset, void *buf, int length);
void __stdcall Undefine(__int64 offset); 
char __stdcall OriginalByte(__int64 offset);
void __stdcall SetComment(__int64 offset, char* comm);
void __stdcall GetComment(__int64 offset, char* buf, int bufSize);
int __stdcall ProcessState(void);
int __stdcall FilePath(char *buf, int bufsize);
int __stdcall RootFileName(char *buf, int bufsize);
void __stdcall HideEA(__int64 offset); 
void __stdcall ShowEA(__int64 offset); 
__int64 __stdcall NextAddr(__int64 offset);
__int64 __stdcall PrevAddr(__int64 offset);
void __stdcall AnalyzeArea(__int64 startat,__int64 endat);
void __stdcall GetName(__int64 offset, char* buf, int bufsize);
void __stdcall MakeCode(__int64 offset);
__int64 __stdcall FunctionStart(int n);
__int64 __stdcall FunctionEnd(int n);
int __stdcall FuncArgSize(int index);
int __stdcall FuncColor(int index);
int __stdcall GetAsm(__int64 addr, char* buf, int bufLen);
__int64 __stdcall FirstCodeFrom(__int64 ea);
__int64 __stdcall FirstCodeTo(__int64 ea);
__int64 __stdcall NextCodeTo(__int64 ea);
__int64 __stdcall NextCodeFrom(__int64 ea);
__int64 __stdcall ImageBase(void);
int __stdcall GetRefsTo(__int64 offset, int hwnd);
int __stdcall GetRefsFrom(__int64 offset, int hwnd);