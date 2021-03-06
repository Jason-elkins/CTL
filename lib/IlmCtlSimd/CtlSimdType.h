///////////////////////////////////////////////////////////////////////////
// Copyright (c) 2013 Academy of Motion Picture Arts and Sciences 
// ("A.M.P.A.S."). Portions contributed by others as indicated.
// All rights reserved.
// 
// A worldwide, royalty-free, non-exclusive right to copy, modify, create
// derivatives, and use, in source and binary forms, is hereby granted, 
// subject to acceptance of this license. Performance of any of the 
// aforementioned acts indicates acceptance to be bound by the following 
// terms and conditions:
//
//  * Copies of source code, in whole or in part, must retain the 
//    above copyright notice, this list of conditions and the 
//    Disclaimer of Warranty.
//
//  * Use in binary form must retain the above copyright notice, 
//    this list of conditions and the Disclaimer of Warranty in the
//    documentation and/or other materials provided with the distribution.
//
//  * Nothing in this license shall be deemed to grant any rights to 
//    trademarks, copyrights, patents, trade secrets or any other 
//    intellectual property of A.M.P.A.S. or any contributors, except 
//    as expressly stated herein.
//
//  * Neither the name "A.M.P.A.S." nor the name of any other 
//    contributors to this software may be used to endorse or promote 
//    products derivative of or based on this software without express 
//    prior written permission of A.M.P.A.S. or the contributors, as 
//    appropriate.
// 
// This license shall be construed pursuant to the laws of the State of 
// California, and any disputes related thereto shall be subject to the 
// jurisdiction of the courts therein.
//
// Disclaimer of Warranty: THIS SOFTWARE IS PROVIDED BY A.M.P.A.S. AND 
// CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, 
// BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS 
// FOR A PARTICULAR PURPOSE, AND NON-INFRINGEMENT ARE DISCLAIMED. IN NO 
// EVENT SHALL A.M.P.A.S., OR ANY CONTRIBUTORS OR DISTRIBUTORS, BE LIABLE 
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, RESITUTIONARY, 
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
// THE POSSIBILITY OF SUCH DAMAGE.
//
// WITHOUT LIMITING THE GENERALITY OF THE FOREGOING, THE ACADEMY 
// SPECIFICALLY DISCLAIMS ANY REPRESENTATIONS OR WARRANTIES WHATSOEVER 
// RELATED TO PATENT OR OTHER INTELLECTUAL PROPERTY RIGHTS IN THE ACADEMY 
// COLOR ENCODING SYSTEM, OR APPLICATIONS THEREOF, HELD BY PARTIES OTHER 
// THAN A.M.P.A.S., WHETHER DISCLOSED OR UNDISCLOSED.
///////////////////////////////////////////////////////////////////////////


#ifndef INCLUDED_CTL_SIMD_TYPE_H
#define INCLUDED_CTL_SIMD_TYPE_H

//-----------------------------------------------------------------------------
//
//	Types in the SIMD implementation of the color transformation language
//
//-----------------------------------------------------------------------------

#include <CtlType.h>
#include <CtlRcPtr.h>


namespace Ctl {

class SimdDataAddr;
typedef RcPtr<SimdDataAddr> SimdDataAddrPtr;

class SimdArrayType;
typedef RcPtr<SimdArrayType> SimdArrayTypePtr;

class SimdFunctionType;
typedef RcPtr<SimdFunctionType> SimdFunctionTypePtr;

class SimdLContext;

class SimdVoidType: public VoidType
{
  public:

    SimdVoidType ();

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;
};


class SimdBoolType: public BoolType
{
  public:

    SimdBoolType ();

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    AddrPtr             newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;
};


class SimdIntType: public IntType
{
  public:

    SimdIntType ();

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    virtual AddrPtr	newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;
};


class SimdUIntType: public UIntType
{
  public:

    SimdUIntType ();

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    virtual AddrPtr	newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;
};


class SimdHalfType: public HalfType
{
  public:

    SimdHalfType ();

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    AddrPtr             newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;
};


class SimdFloatType: public FloatType
{
  public:

    SimdFloatType ();

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    AddrPtr             newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;
};


class SimdStringType: public StringType
{
  public:

    SimdStringType ();

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    AddrPtr             newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;
};


class SimdArrayType: public ArrayType
{
  public:

    SimdArrayType (const DataTypePtr &elementType, int size,
		   SimdLContext *lcontext = 0);

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;
    virtual SimdDataAddrPtr  unknownElementSize() const;
    virtual SimdDataAddrPtr  unknownSize() const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    AddrPtr             newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;

  private:
    //  Addresses storing the location of unkown size and element size
    //  used in functions with unspecified array sizes
    SimdDataAddrPtr     _unknownSize;
    SimdDataAddrPtr     _unknownESize;
};


class SimdStructType: public StructType
{
  public:

    SimdStructType (const std::string &name,
		    const MemberVector &members);

    virtual size_t	objectSize () const;
    virtual size_t	alignedObjectSize () const;
    virtual size_t	objectAlignment () const;

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;

    AddrPtr             newStaticVariable (Module *module) const;

    void                newAutomaticVariable (StatementNodePtr node, 
					      LContext &lcontext) const;
  private:

    size_t		_objectSize;
    size_t		_alignedObjectSize;
    size_t		_objectAlignment;
};


class SimdFunctionType: public FunctionType
{
  public:

    SimdFunctionType (const DataTypePtr &returnType,
		      bool returnVarying,
	              const ParamVector &parameters);

    virtual void	generateCastFrom (const ExprNodePtr &expr,
					  LContext &lcontext) const;

    virtual void	generateCode (const SyntaxNodePtr &node,
				      LContext &lcontext) const;
};


} // namespace Ctl

#endif
