/* item.c generated by valac 0.16.0, the Vala compiler
 * generated from item.vala, do not modify */


#include <glib.h>
#include <glib-object.h>


#define ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_TYPE_ITEM (org_westhoffswelt_pdfpresenter_renderer_cache_png_item_get_type ())
#define ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_TYPE_ITEM, orgwesthoffsweltpdfpresenterRendererCachePNGItem))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_TYPE_ITEM, orgwesthoffsweltpdfpresenterRendererCachePNGItemClass))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_TYPE_ITEM))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_IS_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_TYPE_ITEM))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_TYPE_ITEM, orgwesthoffsweltpdfpresenterRendererCachePNGItemClass))

typedef struct _orgwesthoffsweltpdfpresenterRendererCachePNGItem orgwesthoffsweltpdfpresenterRendererCachePNGItem;
typedef struct _orgwesthoffsweltpdfpresenterRendererCachePNGItemClass orgwesthoffsweltpdfpresenterRendererCachePNGItemClass;
typedef struct _orgwesthoffsweltpdfpresenterRendererCachePNGItemPrivate orgwesthoffsweltpdfpresenterRendererCachePNGItemPrivate;

struct _orgwesthoffsweltpdfpresenterRendererCachePNGItem {
	GObject parent_instance;
	orgwesthoffsweltpdfpresenterRendererCachePNGItemPrivate * priv;
	guint8* data;
	gint data_length1;
};

struct _orgwesthoffsweltpdfpresenterRendererCachePNGItemClass {
	GObjectClass parent_class;
};


static gpointer org_westhoffswelt_pdfpresenter_renderer_cache_png_item_parent_class = NULL;

GType org_westhoffswelt_pdfpresenter_renderer_cache_png_item_get_type (void) G_GNUC_CONST;
enum  {
	ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_ITEM_DUMMY_PROPERTY
};
orgwesthoffsweltpdfpresenterRendererCachePNGItem* org_westhoffswelt_pdfpresenter_renderer_cache_png_item_new (guint8* data, int data_length1);
orgwesthoffsweltpdfpresenterRendererCachePNGItem* org_westhoffswelt_pdfpresenter_renderer_cache_png_item_construct (GType object_type, guint8* data, int data_length1);
static guint8* _vala_array_dup1 (guint8* self, int length);
guint8* org_westhoffswelt_pdfpresenter_renderer_cache_png_item_get_png_data (orgwesthoffsweltpdfpresenterRendererCachePNGItem* self, int* result_length1);
static guint8* _vala_array_dup2 (guint8* self, int length);
gint org_westhoffswelt_pdfpresenter_renderer_cache_png_item_get_length (orgwesthoffsweltpdfpresenterRendererCachePNGItem* self);
static void org_westhoffswelt_pdfpresenter_renderer_cache_png_item_finalize (GObject* obj);


/**
         * Create the item from a uchar array
         */
static guint8* _vala_array_dup1 (guint8* self, int length) {
	return g_memdup (self, length * sizeof (guint8));
}


orgwesthoffsweltpdfpresenterRendererCachePNGItem* org_westhoffswelt_pdfpresenter_renderer_cache_png_item_construct (GType object_type, guint8* data, int data_length1) {
	orgwesthoffsweltpdfpresenterRendererCachePNGItem * self = NULL;
	guint8* _tmp0_;
	gint _tmp0__length1;
	guint8* _tmp1_;
	gint _tmp1__length1;
	self = (orgwesthoffsweltpdfpresenterRendererCachePNGItem*) g_object_new (object_type, NULL);
	_tmp0_ = data;
	_tmp0__length1 = data_length1;
	_tmp1_ = (_tmp0_ != NULL) ? _vala_array_dup1 (_tmp0_, _tmp0__length1) : ((gpointer) _tmp0_);
	_tmp1__length1 = _tmp0__length1;
	self->data = (g_free (self->data), NULL);
	self->data = _tmp1_;
	self->data_length1 = _tmp1__length1;
	return self;
}


orgwesthoffsweltpdfpresenterRendererCachePNGItem* org_westhoffswelt_pdfpresenter_renderer_cache_png_item_new (guint8* data, int data_length1) {
	return org_westhoffswelt_pdfpresenter_renderer_cache_png_item_construct (ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_TYPE_ITEM, data, data_length1);
}


/**
         * Return the stored data
         */
static guint8* _vala_array_dup2 (guint8* self, int length) {
	return g_memdup (self, length * sizeof (guint8));
}


guint8* org_westhoffswelt_pdfpresenter_renderer_cache_png_item_get_png_data (orgwesthoffsweltpdfpresenterRendererCachePNGItem* self, int* result_length1) {
	guint8* result = NULL;
	guint8* _tmp0_;
	gint _tmp0__length1;
	guint8* _tmp1_;
	gint _tmp1__length1;
	guint8* _tmp2_;
	gint _tmp2__length1;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->data;
	_tmp0__length1 = self->data_length1;
	_tmp1_ = (_tmp0_ != NULL) ? _vala_array_dup2 (_tmp0_, _tmp0__length1) : ((gpointer) _tmp0_);
	_tmp1__length1 = _tmp0__length1;
	_tmp2_ = _tmp1_;
	_tmp2__length1 = _tmp1__length1;
	if (result_length1) {
		*result_length1 = _tmp2__length1;
	}
	result = _tmp2_;
	return result;
}


/**
         * Shortcut to retrieve the length of the stored dataset
         */
gint org_westhoffswelt_pdfpresenter_renderer_cache_png_item_get_length (orgwesthoffsweltpdfpresenterRendererCachePNGItem* self) {
	gint result = 0;
	guint8* _tmp0_;
	gint _tmp0__length1;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->data;
	_tmp0__length1 = self->data_length1;
	result = _tmp0__length1;
	return result;
}


static void org_westhoffswelt_pdfpresenter_renderer_cache_png_item_class_init (orgwesthoffsweltpdfpresenterRendererCachePNGItemClass * klass) {
	org_westhoffswelt_pdfpresenter_renderer_cache_png_item_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = org_westhoffswelt_pdfpresenter_renderer_cache_png_item_finalize;
}


static void org_westhoffswelt_pdfpresenter_renderer_cache_png_item_instance_init (orgwesthoffsweltpdfpresenterRendererCachePNGItem * self) {
}


static void org_westhoffswelt_pdfpresenter_renderer_cache_png_item_finalize (GObject* obj) {
	orgwesthoffsweltpdfpresenterRendererCachePNGItem * self;
	self = ORG_WESTHOFFSWELT_PDFPRESENTER_RENDERER_CACHE_PNG_ITEM (obj);
	self->data = (g_free (self->data), NULL);
	G_OBJECT_CLASS (org_westhoffswelt_pdfpresenter_renderer_cache_png_item_parent_class)->finalize (obj);
}


/**
     * PNG picture data stored by the PNG cache engine.
     */
GType org_westhoffswelt_pdfpresenter_renderer_cache_png_item_get_type (void) {
	static volatile gsize org_westhoffswelt_pdfpresenter_renderer_cache_png_item_type_id__volatile = 0;
	if (g_once_init_enter (&org_westhoffswelt_pdfpresenter_renderer_cache_png_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (orgwesthoffsweltpdfpresenterRendererCachePNGItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) org_westhoffswelt_pdfpresenter_renderer_cache_png_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (orgwesthoffsweltpdfpresenterRendererCachePNGItem), 0, (GInstanceInitFunc) org_westhoffswelt_pdfpresenter_renderer_cache_png_item_instance_init, NULL };
		GType org_westhoffswelt_pdfpresenter_renderer_cache_png_item_type_id;
		org_westhoffswelt_pdfpresenter_renderer_cache_png_item_type_id = g_type_register_static (G_TYPE_OBJECT, "orgwesthoffsweltpdfpresenterRendererCachePNGItem", &g_define_type_info, 0);
		g_once_init_leave (&org_westhoffswelt_pdfpresenter_renderer_cache_png_item_type_id__volatile, org_westhoffswelt_pdfpresenter_renderer_cache_png_item_type_id);
	}
	return org_westhoffswelt_pdfpresenter_renderer_cache_png_item_type_id__volatile;
}


