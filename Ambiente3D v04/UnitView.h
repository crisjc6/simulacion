//---------------------------------------------------------------------------

#ifndef UnitViewH
#define UnitViewH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ExtCtrls.hpp"
#include "MathFunctions.h"
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TFormView : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TOpenDialog *OpenDialog1;
        TButton *btnCargarCubo;
    TButton *Button1;
        TButton *Button2;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall FormMouseWheelDown(TObject *Sender, TShiftState Shift,
          TPoint &MousePos, bool &Handled);
    void __fastcall FormMouseWheelUp(TObject *Sender, TShiftState Shift,
          TPoint &MousePos, bool &Handled);
    void __fastcall FormResize(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall btnCargarCuboClick(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
    HDC     hdc;
    HGLRC   hrc;
    int     PixelFormat;
public:		// User declarations

    __fastcall TFormView(TComponent* Owner);
    void __fastcall SetPixelFormatDescriptor(void);
    void __fastcall IdleLoop(TObject*, bool&);
    void __fastcall glVertexp(point p);
    void __fastcall glColorc(color c);
    void __fastcall DrawScene(void);
    void __fastcall DrawGrid(void);
    void __fastcall DrawCoordinate(point p,color c);
    void __fastcall DrawAxis(void);
    void __fastcall DrawPlane(plane p, int a);
    void __fastcall DrawSource(source f);
    void __fastcall DrawVector(point p, vector v, bool f, double m);
    void __fastcall simulacion();
    void __fastcall drawRoom();
    void __fastcall ReadRoom(void);

    bool      Z;                                        //Z operation
    int       h,                                        //window Height
              w,                                        //window Width
              TessTrianglePoint,                        //tesselation triangle point counter
              NGroups,                                  //Number of groups
              NPoints;                                  //Number of points

    double    a,                                        //Alpha [horizontal viewer angle]
              b,                                        //Beta [vertical viewer angle]
              d,                                        //observer Distance
              f,                                        //Fov [focus angle]
              g,                                        //Grig space
              e;                                        //grid Elements
    point     c,                                        //Central point
              o;                                        //Observer point
    vector    u,                                        //Unitary vector [mouse application]
              Up;                                       //up vector for OpenGL viewport
    //point     SphereFace[32][4];                        //sphere faces
    color     Red,                                      //red default color
              Blue,                                     //blue default color
              Green,                                    //green default color
              Yellow,                                   //yellow default color
              LightGray,                                //lightgray default color
              DarkGray,
              Black;
    int       MouseOperation,
              LastMousePos[2];
    room      r;                                        //Cubic Room
    source    s;
    double    tiempo,distancia;
    bool      cuartoCargado,TestExtra, drawLine;
    reflection *ry;
    vector    *vi, **vis_vector;
    double    **vis_modvec;
    point     p_org,p_int;
    int       NRAYS;
};
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
extern PACKAGE TFormView *FormView;
//---------------------------------------------------------------------------
#endif
