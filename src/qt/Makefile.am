include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = ronpaulcoin-qt
noinst_LIBRARIES = libronpaulcoinqt.a
SUBDIRS = $(BUILD_TEST_QT)
DIST_SUBDIRS = test

# ronpaulcoin qt core #
QT_TS = \
  locale/ronpaulcoin_ach.ts \
  locale/ronpaulcoin_af_ZA.ts \
  locale/ronpaulcoin_ar.ts \
  locale/ronpaulcoin_be_BY.ts \
  locale/ronpaulcoin_bg.ts \
  locale/ronpaulcoin_bs.ts \
  locale/ronpaulcoin_ca_ES.ts \
  locale/ronpaulcoin_ca.ts \
  locale/ronpaulcoin_ca@valencia.ts \
  locale/ronpaulcoin_cmn.ts \
  locale/ronpaulcoin_cs.ts \
  locale/ronpaulcoin_cy.ts \
  locale/ronpaulcoin_da.ts \
  locale/ronpaulcoin_de_AT.ts \
  locale/ronpaulcoin_de.ts \
  locale/ronpaulcoin_el_GR.ts \
  locale/ronpaulcoin_en.ts \
  locale/ronpaulcoin_eo.ts \
  locale/ronpaulcoin_es_CL.ts \
  locale/ronpaulcoin_es_DO.ts \
  locale/ronpaulcoin_es_MX.ts \
  locale/ronpaulcoin_es.ts \
  locale/ronpaulcoin_es_UY.ts \
  locale/ronpaulcoin_et.ts \
  locale/ronpaulcoin_eu_ES.ts \
  locale/ronpaulcoin_fa_IR.ts \
  locale/ronpaulcoin_fa.ts \
  locale/ronpaulcoin_fi.ts \
  locale/ronpaulcoin_fr_CA.ts \
  locale/ronpaulcoin_fr.ts \
  locale/ronpaulcoin_gl.ts \
  locale/ronpaulcoin_gu_IN.ts \
  locale/ronpaulcoin_he.ts \
  locale/ronpaulcoin_hi_IN.ts \
  locale/ronpaulcoin_hr.ts \
  locale/ronpaulcoin_hu.ts \
  locale/ronpaulcoin_id_ID.ts \
  locale/ronpaulcoin_it.ts \
  locale/ronpaulcoin_ja.ts \
  locale/ronpaulcoin_ka.ts \
  locale/ronpaulcoin_kk_KZ.ts \
  locale/ronpaulcoin_ko_KR.ts \
  locale/ronpaulcoin_ky.ts \
  locale/ronpaulcoin_la.ts \
  locale/ronpaulcoin_lt.ts \
  locale/ronpaulcoin_lv_LV.ts \
  locale/ronpaulcoin_ms_MY.ts \
  locale/ronpaulcoin_nb.ts \
  locale/ronpaulcoin_nl.ts \
  locale/ronpaulcoin_pam.ts \
  locale/ronpaulcoin_pl.ts \
  locale/ronpaulcoin_pt_BR.ts \
  locale/ronpaulcoin_pt_PT.ts \
  locale/ronpaulcoin_ro_RO.ts \
  locale/ronpaulcoin_ru.ts \
  locale/ronpaulcoin_sah.ts \
  locale/ronpaulcoin_sk.ts \
  locale/ronpaulcoin_sl_SI.ts \
  locale/ronpaulcoin_sq.ts \
  locale/ronpaulcoin_sr.ts \
  locale/ronpaulcoin_sv.ts \
  locale/ronpaulcoin_th_TH.ts \
  locale/ronpaulcoin_tr.ts \
  locale/ronpaulcoin_uk.ts \
  locale/ronpaulcoin_ur_PK.ts \
  locale/ronpaulcoin_uz@Cyrl.ts \
  locale/ronpaulcoin_vi.ts \
  locale/ronpaulcoin_vi_VN.ts \
  locale/ronpaulcoin_zh_CN.ts \
  locale/ronpaulcoin_zh_HK.ts \
  locale/ronpaulcoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_ronpaulcoinaddressvalidator.cpp \
  moc_ronpaulcoinamountfield.cpp \
  moc_ronpaulcoingui.cpp \
  moc_ronpaulcoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

RONPAULCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  ronpaulcoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_ronpaulcoin.cpp
QT_QRC = ronpaulcoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

RONPAULCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  ronpaulcoinaddressvalidator.h \
  ronpaulcoinamountfield.h \
  ronpaulcoingui.h \
  ronpaulcoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/ronpaulcoin.ico \
  res/icons/ronpaulcoin.png \
  res/icons/ronpaulcoin_testnet.ico \
  res/icons/ronpaulcoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

RONPAULCOIN_QT_CPP = \
  ronpaulcoin.cpp \
  ronpaulcoinaddressvalidator.cpp \
  ronpaulcoinamountfield.cpp \
  ronpaulcoingui.cpp \
  ronpaulcoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  signverifymessagedialog.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp

if ENABLE_WALLET
RONPAULCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

RONPAULCOIN_RC = res/ronpaulcoin-qt-res.rc

libronpaulcoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libronpaulcoinqt_a_SOURCES = $(RONPAULCOIN_QT_CPP) $(RONPAULCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libronpaulcoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libronpaulcoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# ronpaulcoin-qt binary #
ronpaulcoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
ronpaulcoin_qt_SOURCES = ronpaulcoin.cpp
if TARGET_DARWIN
  ronpaulcoin_qt_SOURCES += $(RONPAULCOIN_MM)
endif
if TARGET_WINDOWS
  ronpaulcoin_qt_SOURCES += $(RONPAULCOIN_RC)
endif
ronpaulcoin_qt_LDADD = libronpaulcoinqt.a $(LIBRONPAULCOIN_SERVER)
if ENABLE_WALLET
ronpaulcoin_qt_LDADD += $(LIBRONPAULCOIN_WALLET)
endif
ronpaulcoin_qt_LDADD += $(LIBRONPAULCOIN_CLI) $(LIBRONPAULCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
ronpaulcoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

ronpaulcoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/ronpaulcoinstrings.cpp

translate: ronpaulcoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(RONPAULCOIN_QT_CPP) $(RONPAULCOIN_QT_H) $(RONPAULCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/ronpaulcoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name ronpaulcoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -i.bak -e '/^\*\*.*Created:/d' $@ && rm $@.bak
	$(SED) -i.bak -e '/^\*\*.*by:/d' $@ && rm $@.bak

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
