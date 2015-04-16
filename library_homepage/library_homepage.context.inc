<?php
/**
 * @file
 * library_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_content';
  $context->description = 'The site home page';
  $context->tag = 'Presentation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fx_searchblock-form' => array(
          'module' => 'fx_searchblock',
          'delta' => 'form',
          'region' => 'main_top',
          'weight' => '-49',
        ),
        'menu-menu-home-actions' => array(
          'module' => 'menu',
          'delta' => 'menu-home-actions',
          'region' => 'main_top',
          'weight' => '-48',
        ),
        'menu-menu-quick-links' => array(
          'module' => 'menu',
          'delta' => 'menu-quick-links',
          'region' => 'main_top',
          'weight' => '-47',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-49',
        ),
        'views-front_page_features-block_2' => array(
          'module' => 'views',
          'delta' => 'front_page_features-block_2',
          'region' => 'content',
          'weight' => '-48',
        ),
        'views-front_page_features-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_features-block_1',
          'region' => 'content',
          'weight' => '-47',
        ),
        'views-news_feed-block_4' => array(
          'module' => 'views',
          'delta' => 'news_feed-block_4',
          'region' => 'content',
          'weight' => '-46',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Presentation');
  t('The site home page');
  $export['homepage_content'] = $context;

  return $export;
}
