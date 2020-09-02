<?php
/**
 * @file
 * tier_2_news_endpoint.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tier_2_news_endpoint_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_tier3_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Tier3 Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all news »';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'news-contain';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['element_class'] = 'news-image';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'news-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_teaser_image']['group_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['element_class'] = 'news-copy';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'items';
  $handler->display->display_options['style_options']['item_node'] = 'item';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = 'Subtitle';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title_2']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['title_2']['element_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'pubdate';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'path';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'category';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Top Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'full_tier2_export',
    'image_link' => '',
  );
  /* Field: File: Alt Text */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = 'imgAlt';
  $handler->display->display_options['fields']['field_file_image_alt_text']['element_label_colon'] = FALSE;
  /* Field: File: Alt Text */
  $handler->display->display_options['fields']['field_file_image_alt_text_1']['id'] = 'field_file_image_alt_text_1';
  $handler->display->display_options['fields']['field_file_image_alt_text_1']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text_1']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text_1']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['field_file_image_alt_text_1']['label'] = 'caption';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'description';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'GUID';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = 'writer';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri_1']['id'] = 'uri_1';
  $handler->display->display_options['fields']['uri_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri_1']['field'] = 'uri';
  $handler->display->display_options['fields']['uri_1']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri_1']['label'] = 'imgURL';
  $handler->display->display_options['fields']['uri_1']['file_download_path'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['label'] = 'credit';
  $handler->display->display_options['fields']['title_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_3']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title_3']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['label'] = 'suppress';
  $handler->display->display_options['fields']['title_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_4']['alter']['text'] = '0';
  $handler->display->display_options['fields']['title_4']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-1 year';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'tier3-export';
  $export['news_tier3_export'] = $view;

  return $export;
}
