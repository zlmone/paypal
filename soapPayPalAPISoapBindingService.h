/* soapPayPalAPISoapBindingService.h
   Generated by gSOAP 2.8.54 for paypal.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapPayPalAPISoapBindingService_H
#define soapPayPalAPISoapBindingService_H
#include "soapH.h"

    class SOAP_CMAC PayPalAPISoapBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        bool soap_own;  ///< flag indicating that this context is owned by this service when context is shared
        /// Variables globally declared in paypal.h, if any
        /// Construct a service with new managing context
        PayPalAPISoapBindingService();
        /// Copy constructor
        PayPalAPISoapBindingService(const PayPalAPISoapBindingService&);
        /// Construct service given a shared managing context
        PayPalAPISoapBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        PayPalAPISoapBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        PayPalAPISoapBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~PayPalAPISoapBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void PayPalAPISoapBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual PayPalAPISoapBindingService *copy() SOAP_PURE_VIRTUAL;
        /// Copy assignment
        PayPalAPISoapBindingService& operator=(const PayPalAPISoapBindingService&);
        /// Close connection (normally automatic)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Return sender-related fault to sender
        virtual int soap_senderfault(const char *string, const char *detailXML);
        /// Return sender-related fault with SOAP 1.2 subcode to sender
        virtual int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Return receiver-related fault to sender
        virtual int soap_receiverfault(const char *string, const char *detailXML);
        /// Return receiver-related fault with SOAP 1.2 subcode to sender
        virtual int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(ns3__CustomSecurityHeaderType *ns1__RequesterCredentials);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
    #ifndef WITH_NOIO
        /// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int run(int port);
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// Run simple single-thread SSL service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int ssl_run(int port);
    #endif
        /// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET bind(const char *host, int port, int backlog);
        /// Accept next request (returns socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET accept();
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// When SSL is used, after accept() should perform and accept SSL handshake
        virtual int ssl_accept();
    #endif
    #endif
        /// After accept() serve this request (returns SOAP_OK or error code)
        virtual int serve();
        /// Used by serve() to dispatch a request (returns SOAP_OK or error code)
        virtual int dispatch();
        virtual int dispatch(struct soap *soap);
        ///
        /// Service operations are listed below (you should define these)
        /// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
        ///
        /// Web service operation 'RefundTransaction' (returns SOAP_OK or error code)
        virtual int RefundTransaction(_ns1__RefundTransactionReq *ns1__RefundTransactionReq, ns1__RefundTransactionResponseType &ns1__RefundTransactionResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'InitiateRecoup' (returns SOAP_OK or error code)
        virtual int InitiateRecoup(_ns1__InitiateRecoupReq *ns1__InitiateRecoupReq, ns1__InitiateRecoupResponseType &ns1__InitiateRecoupResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CompleteRecoup' (returns SOAP_OK or error code)
        virtual int CompleteRecoup(_ns1__CompleteRecoupReq *ns1__CompleteRecoupReq, ns1__CompleteRecoupResponseType &ns1__CompleteRecoupResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CancelRecoup' (returns SOAP_OK or error code)
        virtual int CancelRecoup(_ns1__CancelRecoupReq *ns1__CancelRecoupReq, ns1__CancelRecoupResponseType &ns1__CancelRecoupResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetTransactionDetails' (returns SOAP_OK or error code)
        virtual int GetTransactionDetails(_ns1__GetTransactionDetailsReq *ns1__GetTransactionDetailsReq, ns1__GetTransactionDetailsResponseType &ns1__GetTransactionDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BMCreateButton' (returns SOAP_OK or error code)
        virtual int BMCreateButton(_ns1__BMCreateButtonReq *ns1__BMCreateButtonReq, ns1__BMCreateButtonResponseType &ns1__BMCreateButtonResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BMUpdateButton' (returns SOAP_OK or error code)
        virtual int BMUpdateButton(_ns1__BMUpdateButtonReq *ns1__BMUpdateButtonReq, ns1__BMUpdateButtonResponseType &ns1__BMUpdateButtonResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BMSetInventory' (returns SOAP_OK or error code)
        virtual int BMSetInventory(_ns1__BMSetInventoryReq *ns1__BMSetInventoryReq, ns1__BMSetInventoryResponseType &ns1__BMSetInventoryResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BMGetButtonDetails' (returns SOAP_OK or error code)
        virtual int BMGetButtonDetails(_ns1__BMGetButtonDetailsReq *ns1__BMGetButtonDetailsReq, ns1__BMGetButtonDetailsResponseType &ns1__BMGetButtonDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BMGetInventory' (returns SOAP_OK or error code)
        virtual int BMGetInventory(_ns1__BMGetInventoryReq *ns1__BMGetInventoryReq, ns1__BMGetInventoryResponseType &ns1__BMGetInventoryResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BMManageButtonStatus' (returns SOAP_OK or error code)
        virtual int BMManageButtonStatus(_ns1__BMManageButtonStatusReq *ns1__BMManageButtonStatusReq, ns1__BMManageButtonStatusResponseType &ns1__BMManageButtonStatusResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BMButtonSearch' (returns SOAP_OK or error code)
        virtual int BMButtonSearch(_ns1__BMButtonSearchReq *ns1__BMButtonSearchReq, ns1__BMButtonSearchResponseType &ns1__BMButtonSearchResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BillUser' (returns SOAP_OK or error code)
        virtual int BillUser(_ns1__BillUserReq *ns1__BillUserReq, ns1__BillUserResponseType &ns1__BillUserResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'TransactionSearch' (returns SOAP_OK or error code)
        virtual int TransactionSearch(_ns1__TransactionSearchReq *ns1__TransactionSearchReq, ns1__TransactionSearchResponseType &ns1__TransactionSearchResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'MassPay' (returns SOAP_OK or error code)
        virtual int MassPay(_ns1__MassPayReq *ns1__MassPayReq, ns1__MassPayResponseType &ns1__MassPayResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BillAgreementUpdate' (returns SOAP_OK or error code)
        virtual int BillAgreementUpdate(_ns1__BillAgreementUpdateReq *ns1__BillAgreementUpdateReq, ns1__BAUpdateResponseType &ns1__BAUpdateResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'AddressVerify' (returns SOAP_OK or error code)
        virtual int AddressVerify(_ns1__AddressVerifyReq *ns1__AddressVerifyReq, ns1__AddressVerifyResponseType &ns1__AddressVerifyResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'EnterBoarding' (returns SOAP_OK or error code)
        virtual int EnterBoarding(_ns1__EnterBoardingReq *ns1__EnterBoardingReq, ns1__EnterBoardingResponseType &ns1__EnterBoardingResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetBoardingDetails' (returns SOAP_OK or error code)
        virtual int GetBoardingDetails(_ns1__GetBoardingDetailsReq *ns1__GetBoardingDetailsReq, ns1__GetBoardingDetailsResponseType &ns1__GetBoardingDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateMobilePayment' (returns SOAP_OK or error code)
        virtual int CreateMobilePayment(_ns1__CreateMobilePaymentReq *ns1__CreateMobilePaymentReq, ns1__CreateMobilePaymentResponseType &ns1__CreateMobilePaymentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetMobileStatus' (returns SOAP_OK or error code)
        virtual int GetMobileStatus(_ns1__GetMobileStatusReq *ns1__GetMobileStatusReq, ns1__GetMobileStatusResponseType &ns1__GetMobileStatusResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetMobileCheckout' (returns SOAP_OK or error code)
        virtual int SetMobileCheckout(_ns1__SetMobileCheckoutReq *ns1__SetMobileCheckoutReq, ns1__SetMobileCheckoutResponseType &ns1__SetMobileCheckoutResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoMobileCheckoutPayment' (returns SOAP_OK or error code)
        virtual int DoMobileCheckoutPayment(_ns1__DoMobileCheckoutPaymentReq *ns1__DoMobileCheckoutPaymentReq, ns1__DoMobileCheckoutPaymentResponseType &ns1__DoMobileCheckoutPaymentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetBalance' (returns SOAP_OK or error code)
        virtual int GetBalance(_ns1__GetBalanceReq *ns1__GetBalanceReq, ns1__GetBalanceResponseType &ns1__GetBalanceResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetPalDetails' (returns SOAP_OK or error code)
        virtual int GetPalDetails(_ns1__GetPalDetailsReq *ns1__GetPalDetailsReq, ns1__GetPalDetailsResponseType &ns1__GetPalDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoExpressCheckoutPayment' (returns SOAP_OK or error code)
        virtual int DoExpressCheckoutPayment(_ns1__DoExpressCheckoutPaymentReq *ns1__DoExpressCheckoutPaymentReq, ns1__DoExpressCheckoutPaymentResponseType &ns1__DoExpressCheckoutPaymentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoUATPExpressCheckoutPayment' (returns SOAP_OK or error code)
        virtual int DoUATPExpressCheckoutPayment(_ns1__DoUATPExpressCheckoutPaymentReq *ns1__DoUATPExpressCheckoutPaymentReq, ns1__DoUATPExpressCheckoutPaymentResponseType &ns1__DoUATPExpressCheckoutPaymentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetAuthFlowParam' (returns SOAP_OK or error code)
        virtual int SetAuthFlowParam(_ns1__SetAuthFlowParamReq *ns1__SetAuthFlowParamReq, ns1__SetAuthFlowParamResponseType &ns1__SetAuthFlowParamResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAuthDetails' (returns SOAP_OK or error code)
        virtual int GetAuthDetails(_ns1__GetAuthDetailsReq *ns1__GetAuthDetailsReq, ns1__GetAuthDetailsResponseType &ns1__GetAuthDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetAccessPermissions' (returns SOAP_OK or error code)
        virtual int SetAccessPermissions(_ns1__SetAccessPermissionsReq *ns1__SetAccessPermissionsReq, ns1__SetAccessPermissionsResponseType &ns1__SetAccessPermissionsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UpdateAccessPermissions' (returns SOAP_OK or error code)
        virtual int UpdateAccessPermissions(_ns1__UpdateAccessPermissionsReq *ns1__UpdateAccessPermissionsReq, ns1__UpdateAccessPermissionsResponseType &ns1__UpdateAccessPermissionsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAccessPermissionDetails' (returns SOAP_OK or error code)
        virtual int GetAccessPermissionDetails(_ns1__GetAccessPermissionDetailsReq *ns1__GetAccessPermissionDetailsReq, ns1__GetAccessPermissionDetailsResponseType &ns1__GetAccessPermissionDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetIncentiveEvaluation' (returns SOAP_OK or error code)
        virtual int GetIncentiveEvaluation(_ns1__GetIncentiveEvaluationReq *ns1__GetIncentiveEvaluationReq, ns1__GetIncentiveEvaluationResponseType &ns1__GetIncentiveEvaluationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetExpressCheckout' (returns SOAP_OK or error code)
        virtual int SetExpressCheckout(_ns1__SetExpressCheckoutReq *ns1__SetExpressCheckoutReq, ns1__SetExpressCheckoutResponseType &ns1__SetExpressCheckoutResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ExecuteCheckoutOperations' (returns SOAP_OK or error code)
        virtual int ExecuteCheckoutOperations(_ns1__ExecuteCheckoutOperationsReq *ns1__ExecuteCheckoutOperationsReq, ns1__ExecuteCheckoutOperationsResponseType &ns1__ExecuteCheckoutOperationsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetExpressCheckoutDetails' (returns SOAP_OK or error code)
        virtual int GetExpressCheckoutDetails(_ns1__GetExpressCheckoutDetailsReq *ns1__GetExpressCheckoutDetailsReq, ns1__GetExpressCheckoutDetailsResponseType &ns1__GetExpressCheckoutDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoDirectPayment' (returns SOAP_OK or error code)
        virtual int DoDirectPayment(_ns1__DoDirectPaymentReq *ns1__DoDirectPaymentReq, ns1__DoDirectPaymentResponseType &ns1__DoDirectPaymentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ManagePendingTransactionStatus' (returns SOAP_OK or error code)
        virtual int ManagePendingTransactionStatus(_ns1__ManagePendingTransactionStatusReq *ns1__ManagePendingTransactionStatusReq, ns1__ManagePendingTransactionStatusResponseType &ns1__ManagePendingTransactionStatusResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoCancel' (returns SOAP_OK or error code)
        virtual int DoCancel(_ns1__DoCancelReq *ns1__DoCancelReq, ns1__DoCancelResponseType &ns1__DoCancelResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoCapture' (returns SOAP_OK or error code)
        virtual int DoCapture(_ns1__DoCaptureReq *ns1__DoCaptureReq, ns1__DoCaptureResponseType &ns1__DoCaptureResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoReauthorization' (returns SOAP_OK or error code)
        virtual int DoReauthorization(_ns1__DoReauthorizationReq *ns1__DoReauthorizationReq, ns1__DoReauthorizationResponseType &ns1__DoReauthorizationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoVoid' (returns SOAP_OK or error code)
        virtual int DoVoid(_ns1__DoVoidReq *ns1__DoVoidReq, ns1__DoVoidResponseType &ns1__DoVoidResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoAuthorization' (returns SOAP_OK or error code)
        virtual int DoAuthorization(_ns1__DoAuthorizationReq *ns1__DoAuthorizationReq, ns1__DoAuthorizationResponseType &ns1__DoAuthorizationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UpdateAuthorization' (returns SOAP_OK or error code)
        virtual int UpdateAuthorization(_ns1__UpdateAuthorizationReq *ns1__UpdateAuthorizationReq, ns1__UpdateAuthorizationResponseType &ns1__UpdateAuthorizationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoUATPAuthorization' (returns SOAP_OK or error code)
        virtual int DoUATPAuthorization(_ns1__DoUATPAuthorizationReq *ns1__DoUATPAuthorizationReq, ns1__DoUATPAuthorizationResponseType &ns1__DoUATPAuthorizationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetCustomerBillingAgreement' (returns SOAP_OK or error code)
        virtual int SetCustomerBillingAgreement(_ns1__SetCustomerBillingAgreementReq *ns1__SetCustomerBillingAgreementReq, ns1__SetCustomerBillingAgreementResponseType &ns1__SetCustomerBillingAgreementResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetBillingAgreementCustomerDetails' (returns SOAP_OK or error code)
        virtual int GetBillingAgreementCustomerDetails(_ns1__GetBillingAgreementCustomerDetailsReq *ns1__GetBillingAgreementCustomerDetailsReq, ns1__GetBillingAgreementCustomerDetailsResponseType &ns1__GetBillingAgreementCustomerDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateBillingAgreement' (returns SOAP_OK or error code)
        virtual int CreateBillingAgreement(_ns1__CreateBillingAgreementReq *ns1__CreateBillingAgreementReq, ns1__CreateBillingAgreementResponseType &ns1__CreateBillingAgreementResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoReferenceTransaction' (returns SOAP_OK or error code)
        virtual int DoReferenceTransaction(_ns1__DoReferenceTransactionReq *ns1__DoReferenceTransactionReq, ns1__DoReferenceTransactionResponseType &ns1__DoReferenceTransactionResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateRecurringPaymentsProfile' (returns SOAP_OK or error code)
        virtual int CreateRecurringPaymentsProfile(_ns1__CreateRecurringPaymentsProfileReq *ns1__CreateRecurringPaymentsProfileReq, ns1__CreateRecurringPaymentsProfileResponseType &ns1__CreateRecurringPaymentsProfileResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetRecurringPaymentsProfileDetails' (returns SOAP_OK or error code)
        virtual int GetRecurringPaymentsProfileDetails(_ns1__GetRecurringPaymentsProfileDetailsReq *ns1__GetRecurringPaymentsProfileDetailsReq, ns1__GetRecurringPaymentsProfileDetailsResponseType &ns1__GetRecurringPaymentsProfileDetailsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ManageRecurringPaymentsProfileStatus' (returns SOAP_OK or error code)
        virtual int ManageRecurringPaymentsProfileStatus(_ns1__ManageRecurringPaymentsProfileStatusReq *ns1__ManageRecurringPaymentsProfileStatusReq, ns1__ManageRecurringPaymentsProfileStatusResponseType &ns1__ManageRecurringPaymentsProfileStatusResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'BillOutstandingAmount' (returns SOAP_OK or error code)
        virtual int BillOutstandingAmount(_ns1__BillOutstandingAmountReq *ns1__BillOutstandingAmountReq, ns1__BillOutstandingAmountResponseType &ns1__BillOutstandingAmountResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UpdateRecurringPaymentsProfile' (returns SOAP_OK or error code)
        virtual int UpdateRecurringPaymentsProfile(_ns1__UpdateRecurringPaymentsProfileReq *ns1__UpdateRecurringPaymentsProfileReq, ns1__UpdateRecurringPaymentsProfileResponseType &ns1__UpdateRecurringPaymentsProfileResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DoNonReferencedCredit' (returns SOAP_OK or error code)
        virtual int DoNonReferencedCredit(_ns1__DoNonReferencedCreditReq *ns1__DoNonReferencedCreditReq, ns1__DoNonReferencedCreditResponseType &ns1__DoNonReferencedCreditResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ReverseTransaction' (returns SOAP_OK or error code)
        virtual int ReverseTransaction(_ns1__ReverseTransactionReq *ns1__ReverseTransactionReq, ns1__ReverseTransactionResponseType &ns1__ReverseTransactionResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ExternalRememberMeOptOut' (returns SOAP_OK or error code)
        virtual int ExternalRememberMeOptOut(_ns1__ExternalRememberMeOptOutReq *ns1__ExternalRememberMeOptOutReq, ns1__ExternalRememberMeOptOutResponseType &ns1__ExternalRememberMeOptOutResponse) SOAP_PURE_VIRTUAL;
    };
#endif
